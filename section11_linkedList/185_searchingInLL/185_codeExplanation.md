# 185 - Searching in a linked list

```cpp
Node* search(int key)
{
    Node *current = head;
    while(current != nullptr)
    {
        if(current->data == key) return current;
        current = current->next;
    }
    return nullptr;
}
```

- `search` is a member function of the `LinkedList` class that searches for a specific key in the linked list using an iterative approach.

- It takes an integer parameter `key`, which is the value to be searched.

- It initializes a pointer `current` to the head of the linked list.

- It enters a `while` loop, where the loop continues until `current` becomes `nullptr` (reaching the end of the linked list).

- Inside the loop, it checks if the `data` of the current node is equal to the search key. If true, it returns the pointer to the current node.

- It then moves the `current` pointer to the next node.

- If the loop completes without finding the key, it returns `nullptr` to indicate that the key is not present in the linked list.

```cpp
Node* searchRecursive(Node *current, int key)
{
    if(current == nullptr) return nullptr;
    if(current->data == key) return current;
    searchRecursive(current->next, key);
    return nullptr;
}
```

- `searchRecursive` is a recursive member function of the `LinkedList` class that searches for a specific key in the linked list using a recursive approach.

- It takes two parameters: a `Node*` parameter `current` representing the current node being processed and an integer parameter `key` representing the value to be searched.

- The base case of the recursion is when `current` is `nullptr`, indicating the end of the linked list. In this case, it returns `nullptr` to signify that the key is not present.

- If `current` is not `nullptr`, it checks if the `data` of the current node is equal to the search key. If true, it returns the pointer to the current node.

- It makes a recursive call to `searchRecursive` with the next node (`current->next`). Note that the result of this recursive call is not used or returned.

- Finally, it returns `nullptr` to signify that the key is not present. This line, however, makes the function always return `nullptr`, and it should be modified to return the result of the recursive call.

In the `main` function:

```cpp
int main()
{
    int A[] = {1, 7, 4, 12, 3}, size = sizeof(A) / sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);

    Node* resultIterative = list1.search(4);
    if(resultIterative != nullptr)
        cout << "Iterative Search: Found " << resultIterative->data << endl;
    else
        cout << "Iterative Search: Not Found" << endl;

    Node* resultRecursive = list1.searchRecursive(list1.getHead(), 12);
    if(resultRecursive != nullptr)
        cout << "Recursive Search: Found " << resultRecursive->data << endl;
    else
        cout << "Recursive Search: Not Found" << endl;
}
```

- An array `A` is created, and its size is calculated.

- An instance of `LinkedList` named `list1` is created.

- The `create` method is called to initialize `list1` with the values from array `A`.

- The `search` method is called to search for the key 4 in the linked list iteratively.

- The `searchRecursive` method is called to search for the key 12 in the linked list recursively.

- The results are printed to the console, indicating whether the keys were found or not.