#include <iostream>
#include <fstream>
#include <string>
#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include <ctime>

// Function to write API response to a string
size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t totalSize = size * nmemb;
    output->append((char*)contents, totalSize);
    return totalSize;
}

// Function to convert UNIX timestamp to human-readable time
std::string convertUnixTime(time_t unixTime) {
    struct tm* timeInfo = localtime(&unixTime);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeInfo);
    return std::string(buffer);
}

// Function to save weather data to a file
void saveToFile(const std::string& city, const nlohmann::json& weatherData) {
    std::ofstream outFile("weather_cache.json");
    if (outFile) {
        outFile << weatherData.dump(4); // Save formatted JSON
        outFile.close();
    } else {
        std::cerr << "Error: Could not save weather data.\n";
    }
}

// Function to load cached weather data from a file
nlohmann::json loadFromFile() {
    std::ifstream inFile("weather_cache.json");
    nlohmann::json cachedData;
    if (inFile) {
        inFile >> cachedData; // Read JSON from file
        inFile.close();
    }
    return cachedData;
}

class ChatBot {
public:
    void getWeather(const std::string& city) {
        const std::string apiKey = "e77b37fc8b7ebcba97ae147c33cc7096";
        std::string url = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "&appid=" + apiKey + "&units=metric";

        CURL* curl;
        CURLcode res;
        std::string response;
        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

            res = curl_easy_perform(curl);
            if (res != CURLE_OK) {
                std::cerr << "No Internet Connection. Loading cached data...\n";
                
                // Load from file if no internet
                nlohmann::json cachedData = loadFromFile();
                if (cachedData.contains(city)) {
                    displayWeather(city, cachedData[city]); // Show cached data
                } else {
                    std::cerr << "No cached data available for " << city << "\n";
                }
            } else {
                // Parse JSON response
                auto json = nlohmann::json::parse(response);
                displayWeather(city, json);

                // Save to file
                nlohmann::json cachedData = loadFromFile();
                cachedData[city] = json;
                saveToFile(city, cachedData);
            }
            curl_easy_cleanup(curl);
        }
    }

    void displayWeather(const std::string& city, const nlohmann::json& json) {
        std::cout << "Weather in " << city << ": " << json["weather"][0]["description"] << "\n";
        std::cout << "Temperature: " << json["main"]["temp"] << "°C\n";
        std::cout << "Humidity: " << json["main"]["humidity"] << "%\n";
        std::cout << "Atmospheric Pressure: " << json["main"]["pressure"] << " hPa\n";
        std::cout << "Sunrise: " << convertUnixTime(json["sys"]["sunrise"]) << "\n";
        std::cout << "Sunset: " << convertUnixTime(json["sys"]["sunset"]) << "\n";
    }
};

int main() {
    ChatBot bot;
    std::string city;

    std::cout << "Enter a city to check the weather: ";
    std::getline(std::cin, city);

    bot.getWeather(city);

    return 0;
}