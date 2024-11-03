/********************************************
* File: Grocery-TrackingProgram.cpp
* Author: Kane Miller
* Date: 2024-03-01
********************************************/

#include <iostream>
#include <map>
#include <string>
#include <fstream>

// Class to track the frequency of items
class ItemTracker {
private:
    std::map<std::string, int> itemFrequency; // Map to store item frequencies

public:
    // Adds an item to the tracker or increments its frequency if it already exists
    void addItem(const std::string& item) {
        itemFrequency[item]++;
    }

    // Returns the frequency of a specific item
    int getFrequency(const std::string& item) const {
        auto it = itemFrequency.find(item);
        if (it != itemFrequency.end()) {
            return it->second;
        }
        return 0;
    }

    // Prints all items with their frequencies
    void printAllItems() const {
        for (const auto& pair : itemFrequency) {
            std::cout << pair.first << " " << pair.second << std::endl;
        }
    }

    // Prints a histogram representing the frequency of each item
    void printHistogram() const {
        for (const auto& pair : itemFrequency) {
            std::cout << pair.first << " ";
            for (int i = 0; i < pair.second; ++i) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }
};

// Reads items from the input file and adds them to the tracker
void readItemsFromFile(const std::string& filename, ItemTracker& tracker) {
    std::ifstream file(filename);
    std::string item;

    while (file >> item) {
        tracker.addItem(item);
    }
}

// Menu option to check the frequency of a specific item
void menuOptionOne(ItemTracker& tracker) {
    std::string item;
    std::cout << "Enter the item you wish to look for: ";
    std::cin >> item;
    std::cout << "Frequency: " << tracker.getFrequency(item) << std::endl;
}

// Menu option to print all items with their frequencies
void menuOptionTwo(ItemTracker& tracker) {
    tracker.printAllItems();
}

// Menu option to print a histogram of item frequencies
void menuOptionThree(ItemTracker& tracker) {
    tracker.printHistogram();
}

int main() {
    ItemTracker tracker;
    readItemsFromFile("CS210_Project_Three_Input_File.txt", tracker);

    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Check item frequency\n";
        std::cout << "2. Print all items with frequencies\n";
        std::cout << "3. Print histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                menuOptionOne(tracker);
                break;
            case 2:
                menuOptionTwo(tracker);
                break;
            case 3:
                menuOptionThree(tracker);
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
