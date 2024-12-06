#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "Your to-do list is empty.\n";
    } else {
        cout << "Your to-do list:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << "\n";
        }
    }
}

int main() {
    vector<string> toDoList;
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add a task\n";
        cout << "2. Remove a task\n";
        cout << "3. Display all tasks\n";
        cout << "4. Clear all tasks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // To handle newline character after the choice input

        switch (choice) {
        case 1: {
            string task;
            cout << "Enter the task: ";
            getline(cin, task);
            toDoList.push_back(task);
            cout << "Task added successfully.\n";
            break;
        }
        case 2: {
            displayTasks(toDoList);
            if (!toDoList.empty()) {
                int taskIndex;
                cout << "Enter the task number to remove: ";
                cin >> taskIndex;
                if (taskIndex > 0 && taskIndex <= static_cast<int>(toDoList.size())) {
                    toDoList.erase(toDoList.begin() + taskIndex - 1);
                    cout << "Task removed successfully.\n";
                } else {
                    cout << "Invalid task number.\n";
                }
            }
            break;
        }
        case 3:
            displayTasks(toDoList);
            break;
        case 4:
            toDoList.clear();
            cout << "All tasks cleared.\n";
            break;
        case 5:
            cout << "Exiting To-Do List Manager. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}