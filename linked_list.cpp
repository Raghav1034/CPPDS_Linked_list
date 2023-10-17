#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void add_start() {
        int x;
        cout << "Enter data for the new node: ";
        cin >> x;
        Node* newnode = new Node;
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }

    bool del_start() {
        if (head == nullptr)
            return false;

        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    void add_end() {
        int x;
        cout << "Enter data for the new node: ";
        cin >> x;
        Node* newnode = new Node;
        newnode->data = x;
        newnode->next = nullptr;

        if (head == nullptr) {
            head = newnode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newnode;
    }

    bool del_end() {
        if (head == nullptr)
            return false;

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return true;
        }

        Node* temp = head;
        while (temp->next->next != nullptr)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
        return true;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList myList;

    while (true) {
        char choice;
        cout << "\nAdd node at the beginning: 1" << endl;
        cout << "Delete node from the beginning: 2" << endl;
        cout << "Add node at the end: 3" << endl;
        cout << "Delete node from the end: 4" << endl;
        cout << "Display nodes: 5" << endl;
        cout << "Exit: 6" << endl;
        cin >> choice;

        switch (choice) {
            case '1':
                myList.add_start();
                break;

            case '2':
                if (!myList.del_start())
                    cout << "List is empty. Cannot delete from the beginning." << endl;
                break;

            case '3':
                myList.add_end();
                break;

            case '4':
                if (!myList.del_end())
                    cout << "List is empty. Cannot delete from the end." << endl;
                break;

            case '5':
                myList.display();
                break;

            case '6':
                exit(0);

            default:
                cout << "Invalid choice. Exiting." << endl;
                exit(1);
        }
    }

    return 0;
}
