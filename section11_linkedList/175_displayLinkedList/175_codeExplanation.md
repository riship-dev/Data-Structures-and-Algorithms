# 175 - Create and display linked list

This C++ code defines a simple linked list data structure with a class `Node` representing individual nodes and a class `LinkedList` for managing the linked list. The `main` function demonstrates the usage of the linked list.

Let's go through the code line by line:

```cpp
#include <bits/stdc++.h>
using namespace std;
```
- This includes the necessary standard C++ library headers for the code.

```cpp
class Node
{
    public:
        int data;
        Node *next;
        Node(int value)
        {
            data = value;
            next = nullptr;
        }
};
```
- Defines a class `Node` representing a node in a linked list. Each node has an integer `data` and a pointer to the next node (`next`). The constructor initializes the node with a given value and sets the next pointer to `nullptr`.

```cpp
class LinkedList
{
    private:
        Node* head;
    public:
        LinkedList()
        {
            head = nullptr;
        }
        ~LinkedList()
        {
            Node* current = head;
            Node* nextNode = nullptr;
            while(current != nullptr)
            {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
            head = nullptr;
        }
```
- Defines a class `LinkedList` to manage the linked list. It has a private member `head`, which is a pointer to the first node.
- The constructor initializes the linked list with an empty head (nullptr).
- The destructor (`~LinkedList()`) is responsible for deleting all nodes in the linked list to avoid memory leaks.

```cpp
        void create(int arr[], int size)
        {
            head = new Node(arr[0]);
            Node *current = head;
            for (int i = 1; i < size; i++)
            {
                current->next = new Node(arr[i]);
                current = current->next;
            }
        }
```
- `create` method initializes the linked list with an array of integers. It creates nodes for each element in the array and links them together.

```cpp
        void display() 
        {
            Node* current = head;
            while (current != nullptr) 
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
```
- `display` method prints the elements of the linked list to the standard output.

```cpp
int main()
{
    int A[] = {3, 5, 7, 10, 15};
    int size = sizeof(A)/sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);
    list1.display();
    list1.~LinkedList();
}
```
- In the `main` function, an array `A` is created, and its size is calculated.
- An instance of `LinkedList` named `list1` is created.
- The `create` method is called to initialize `list1` with the values from array `A`.
- The `display` method is called to print the contents of the linked list.
- Finally, the destructor `~LinkedList()` is explicitly called to free the memory used by the linked list. Note that in normal circumstances, the destructor is automatically called when the object goes out of scope. Explicitly calling the destructor is generally not necessary and could lead to issues if not done carefully.