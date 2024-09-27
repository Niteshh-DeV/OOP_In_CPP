#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
    } else {
        cout << "Your Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {
        cout << "\nTo-Do List Menu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
            case 1:
                cout << "Enter the task: ";
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added!" << endl;
                break;
            case 2:
                displayTasks(tasks);
                break;
            case 3:
                displayTasks(tasks);
                int taskIndex;
                cout << "Enter the task number to delete: ";
                cin >> taskIndex;
                if (taskIndex > 0 && taskIndex <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskIndex - 1);
                    cout << "Task deleted!" << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
