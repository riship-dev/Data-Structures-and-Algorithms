# 178 - Counting nodes in a linked list

```cpp
int count()
{
    int count = 0;
    Node* current = head;
    while(current != nullptr)
    {
        count += 1;
        current = current->next;
    }
    return count;
}
```

- `count` is a member function of the `LinkedList` class that counts the number of nodes in the linked list using an iterative approach.

- It initializes a variable `count` to 0 to keep track of the number of nodes.

- A pointer `current` is initialized to the head of the linked list.

- It enters a `while` loop, where the loop continues until `current` becomes `nullptr` (reaching the end of the linked list).

- Inside the loop, it increments the `count` by 1 and moves the `current` pointer to the next node.

- Finally, it returns the total count of nodes in the linked list.

```cpp
int countRecursive(Node* current)
{
    if(current == nullptr) return 0;
    return countRecursive(current -> next) + 1;
}
```

- `countRecursive` is a recursive member function of the `LinkedList` class that counts the number of nodes in the linked list using a recursive approach.

- It takes a `Node*` parameter `current` representing the current node being processed.

- The base case of the recursion is when `current` is `nullptr`, indicating the end of the linked list. In this case, it returns 0.

- If `current` is not `nullptr`, it makes a recursive call to `countRecursive` with the next node (`current->next`) and adds 1 to the result. This process continues until the base case is reached.

- The recursive calls are unwound, and the count is calculated by adding 1 for each node in the linked list.

In the `main` function:

```cpp
int main()
{
    int A[] = {1, 2, 3, 4, 5}, size = sizeof(A) / sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);
    cout << list1.count() << endl;                    // Outputs: 5
    cout << list1.countRecursive(list1.getHead()) << endl;  // Outputs: 5
}
```

- An array `A` is created, and its size is calculated.

- An instance of `LinkedList` named `list1` is created.

- The `create` method is called to initialize `list1` with the values from array `A`.

- The `count` method is called to count the number of nodes in the linked list iteratively.

- The `countRecursive` method is called to count the number of nodes in the linked list recursively.

- The results are printed to the console, and the output should be 5 for both methods, as there are five nodes in the linked list.