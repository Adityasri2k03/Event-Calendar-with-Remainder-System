# Event Calendar with Reminder System

The **Event Calendar with Reminder System** is developed in C that helps users manage personal or organizational events efficiently. The project simulates a real-world calendar utility by allowing users to create, store, search, and manage event records with reminder functionality.

Each event contains a unique Event ID, title, date and a short description. The application validates event IDs to prevent duplicates and stores all event records using a Singly Linked List (SLL) for dynamic event management.

### Key Features

* Add new events with validation
* Display a monthly calendar for any year
* View all saved events
* Search events by date or title
* Delete events using Event ID
* Show upcoming event reminders for ahead days
* Save events to a binary file (`events.dat`)
* Load previously saved events when the application starts

### Technical Implementation

* Language: C
* Data Structure: Singly Linked List (SLL)
* Memory Management: Dynamic Memory Allocation (DMA)
* File Handling: Binary file operations using `fwrite()` and `fread()`
* Modular design with separate source and header files
* Build automation using a Makefile

### Project Structure

* Source files (`.c`)
* Header files (`.h`)
* `makefile`
* `readme.txt`
* `events.dat` (generated during execution)

### Learning Outcomes

This project demonstrates practical usage of structures, pointers, dynamic memory allocation, linked lists, file handling, modular programming, and menu-driven application development in C. It provides hands-on experience in designing a persistent event management system similar to real-world scheduling and reminder applications.
