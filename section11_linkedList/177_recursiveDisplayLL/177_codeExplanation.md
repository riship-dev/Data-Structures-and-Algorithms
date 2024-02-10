# 177 - Recursively displaying linked list

```cpp
void displayRecursive(Node* current) 
{
    if(current != nullptr)
    {
        cout << current->data << " ";
        displayRecursive(current->next);
    }
}
```

- `displayRecursive` is a private member function of the `LinkedList` class. It takes a `Node*` parameter named `current`, representing the current node being processed.

- The function first checks if the current node is not `nullptr`, which is the base case for the recursion. If the current node is `nullptr`, it means the end of the linked list has been reached, and the function returns without doing anything.

- If the current node is not `nullptr`, it prints the `data` of the current node using `cout`. Then, it makes a recursive call to `displayRecursive` with the next node (`current->next`), continuing the process for the rest of the linked list.

```cpp
Node* getHead()
{
    return head;
}
```

- `getHead` is another member function of the `LinkedList` class. It returns a pointer to the `head` of the linked list.

Now, let's see how these functions work together in the `main` function:

```cpp
int main()
{
    int A[] = {3, 5, 7, 10, 15};
    int size = sizeof(A)/sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);
    list1.displayRecursive(list1.getHead());
    list1.~LinkedList();
}
```

- An array `A` is created, and its size is calculated.

- An instance of `LinkedList` named `list1` is created.

- The `create` method is called to initialize `list1` with the values from array `A`.

- The `displayRecursive` method is called with the `head` of the linked list obtained through `list1.getHead()`. This initiates the recursive display of the linked list elements.

- Finally, the destructor `~LinkedList()` is explicitly called to free the memory used by the linked list. Note that in normal circumstances, the destructor is automatically called when the object goes out of scope. Explicitly calling the destructor is generally not necessary and could lead to issues if not done carefully.