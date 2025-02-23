#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

// File to store tasks
const string FILE_NAME = "tasks.txt";

// Function to display UI header
void showHeader() {
    cout << "\n============================\n";
    cout << "     📋 TO-DO LIST MANAGER   \n";
    cout << "============================\n";
}

// Function to load tasks from file
vector<string> loadTasks() {
    vector<string> tasks;
    ifstream file(FILE_NAME);
    string task;
    
    while (getline(file, task)) {
        tasks.push_back(task);
    }
    file.close();
    
    return tasks;
}

// Function to save tasks to file
void saveTasks(const vector<string>& tasks) {
    ofstream file(FILE_NAME);
    
    for (const string& task : tasks) {
        file << task << endl;
    }
    file.close();
}

// Function to display tasks
void showTasks(const vector<string>& tasks) {
    showHeader();
    if (tasks.empty()) {
        cout << "📭 No tasks available!\n";
    } else {
        cout << "📌 Your Tasks:\n";
        for (size_t i = 0; i < tasks.size(); i++) {
            cout << setw(2) << (i + 1) << ". " << tasks[i] << "\n";
        }
    }
    cout << "============================\n";
}

// Function to add a task
void addTask(vector<string>& tasks) {
    showHeader();
    string newTask;
    cout << "✍️ Enter a new task: ";
    cin.ignore();
    getline(cin, newTask);
    
    tasks.push_back(newTask);
    saveTasks(tasks);
    
    cout << "✅ Task added successfully!\n";
}

// Function to remove a task
void removeTask(vector<string>& tasks) {
    showTasks(tasks);
    
    if (tasks.empty()) return;
    
    int index;
    cout << "❌ Enter task number to remove: ";
    cin >> index;
    
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        saveTasks(tasks);
        cout << "🗑️ Task removed successfully!\n";
    } else {
        cout << "⚠️ Invalid task number!\n";
    }
}

// Main function
int main() {
    vector<string> tasks = loadTasks();
    int choice;
    
    while (true) {
        showHeader();
        cout << "1️⃣ Add Task\n";
        cout << "2️⃣ Remove Task\n";
        cout << "3️⃣ Show Tasks\n";
        cout << "4️⃣ Exit\n";
        cout << "============================\n";
        cout << "👉 Choose an option: ";
        cin >> choice;
        
        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: removeTask(tasks); break;
            case 3: showTasks(tasks); break;
            case 4: cout << "👋 Goodbye!\n"; return 0;
            default: cout << "⚠️ Invalid choice! Try again.\n";
        }
    }
}
