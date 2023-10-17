# CPPDS_Linked_list

# C++ Linked List Implementation

This repository contains a basic C++ implementation of a singly linked list. It provides functionality to add nodes at the beginning or end, delete nodes from the beginning or end, and display the linked list.

## Code Overview

The code is structured as follows:

- `Node` structure: Represents a single node in the linked list.

- `LinkedList` class: Manages the linked list, including the `head` pointer and various methods to manipulate the list.

## Usage

1. **Adding a Node at the Beginning**: Enter `1` to add a new node at the beginning. You will be prompted to enter the data for the new node.

2. **Deleting a Node from the Beginning**: Enter `2` to delete a node from the beginning. If the list is empty, an appropriate message is displayed.

3. **Adding a Node at the End**: Enter `3` to add a new node at the end. You will be prompted to enter the data for the new node.

4. **Deleting a Node from the End**: Enter `4` to delete a node from the end. If the list is empty, an appropriate message is displayed.

5. **Displaying Nodes**: Enter `5` to display the nodes in the linked list.

6. **Exit**: Enter `6` to exit the program.

## How to Run

To run the program, follow these steps:

1. Compile the code using a C++ compiler. For example, you can use g++:

   ```sh
   g++ -o linkedlist linkedlist.cpp
