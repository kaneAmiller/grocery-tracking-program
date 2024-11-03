# Grocery Tracking Program

## Overview
This C++ program, **Grocery Tracking Program**, is designed to track grocery items and provide insights based on an input list of items. The program reads grocery data, counts the frequency of each item, and offers users various functionalities for managing and viewing this data.

## Features
- **Item Frequency Count**: Displays how many times each item appears in the grocery list.
- **Single Item Lookup**: Allows users to check the occurrence count of a specific item.
- **Graphical Histogram**: Generates a histogram that visually represents the frequency of each item, making it easy to see which items are purchased most frequently.

## Files
- **CS210_Project_Three_Input_File.txt**: Contains a list of grocery items used as input for the program's functionality.
- **Grocery-TrackingProgram.cpp**: The main C++ source file that includes the logic for reading the input file, counting items, and displaying the frequency data in text and histogram formats.

## How to Use
1. **Compile and Run**: Compile `Grocery-TrackingProgram.cpp` using a C++ compiler (e.g., g++, clang++) and run the executable.
   ```bash
   g++ Grocery-TrackingProgram.cpp -o GroceryTracker
   ./GroceryTracker
   ```
2. **Interact with Program**: Follow the on-screen prompts to:
   - View the full list of items with their frequency counts.
   - Look up the frequency of a specific item.
   - Display a histogram of item frequencies for a visual breakdown.

## Example Input
A sample of the items included in the input file:
```
Spinach
Radishes
Broccoli
Peas
Cranberries
Potatoes
...
```

## Requirements
- C++ compiler supporting C++11 or later.
- Input file (`CS210_Project_Three_Input_File.txt`) placed in the same directory as the executable.

## License
This project is open-source and available under the MIT License.
