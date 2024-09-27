#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
};
class LinkedList {
    private:
        Node *head;
    public:
        LinkedList() {head = nullptr;}
        ~LinkedList() {
            Node *current = head, *nextNode = nullptr;
            while (current) {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
        }

        void initialise(vector <int> values) {
            head = new Node(values[0]);
            Node *current = head;
            for(int i = 1; i < values.size(); i++) {
                current->next = new Node(values[i]);
                current = current->next;
            }
        }
        void display() {
            Node *current = head;
            while (current) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }

        void concatenate(LinkedList list) {
            Node *current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = list.head;
        }
        void merge(LinkedList list2) {
            Node *list1_current = head;
            Node *list2_current = list2.head;
            
            if (!list1_current) {
                head = list2.head;
                return;
            }
            if (!list2_current) return;

            LinkedList mergedList;
            if (list1_current->data <= list2_current->data) {
                mergedList.head = new Node(list1_current->data);
                list1_current = list1_current->next;        
            } else {
                mergedList.head = new Node(list2_current->data);
                list2_current = list2_current->next;
            }
            Node *mergedList_current = mergedList.head;

            while (list1_current && list2_current) {
                if (list1_current->data <= list2_current->data) {
                    mergedList_current->next = new Node(list1_current->data);
                    list1_current = list1_current->next;
                }
                else {
                    mergedList_current->next = new Node(list2_current->data);
                    list2_current = list2_current->next;
                }
                mergedList_current = mergedList_current->next;
            }

            while (list1_current) {
                mergedList_current->next = new Node(list1_current->data);
                mergedList_current = mergedList_current->next;
                list1_current = list1_current->next;
            }
            while (list2_current) {
                mergedList_current->next = new Node(list2_current->data);
                mergedList_current = mergedList_current->next;
                list2_current = list2_current->next;
            }

            head = mergedList.head;
        }
};

int main() {
    LinkedList list1;
    list1.initialise({1, 3, 5});
    list1.display();
    LinkedList list2;
    list2.initialise({2, 4, 6});
    list2.display();

    //list1.concatenate(list2);
    list1.merge(list2);
    list1.display();
}