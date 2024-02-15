# 182 - Maximum element in a linked list

```cpp
int maximum()
{
    int max = INT_MIN;
    Node *current = head;
    while(current != nullptr)
    {
        if(current->data > max) max = current->data;
        current = current->next;
    }
    return max;
}
```

- `maximum` is a member function of the `LinkedList` class that calculates the maximum value in the linked list using an iterative approach.

- It initializes a variable `max` to `INT_MIN` (the minimum value representable by an `int`) to ensure that any value in the linked list will be greater than the initial value of `max`.

- It initializes a pointer `current` to the head of the linked list.

- It enters a `while` loop, where the loop continues until `current` becomes `nullptr` (reaching the end of the linked list).

- Inside the loop, it checks if the `data` of the current node is greater than the current maximum (`max`). If true, it updates the value of `max` with the `data` of the current node.

- It then moves the `current` pointer to the next node.

- Finally, it returns the maximum value found in the linked list.

```cpp
int maximumRecursive(Node *current)
{
    int max = 0;
    if(current == nullptr) return INT_MIN;
    max = maximumRecursive(current->next);
    if(max > current->data) return max;
    else return current->data;
    return 0;
}
```

- `maximumRecursive` is a recursive member function of the `LinkedList` class that calculates the maximum value in the linked list using a recursive approach.

- It takes a `Node*` parameter `current` representing the current node being processed.

- It initializes a variable `max` to 0, but it is not essential in this case as the actual calculation occurs during the recursive calls.

- The base case of the recursion is when `current` is `nullptr`, indicating the end of the linked list. In this case, it returns `INT_MIN` to signify that there is no maximum value.

- If `current` is not `nullptr`, it makes a recursive call to `maximumRecursive` with the next node (`current->next`). The maximum value is then compared with the `data` of the current node, and the greater of the two is returned.

- The recursive calls are unwound, and the maximum value is determined by comparing the `data` of each node in the linked list.

- Note: The `return 0;` line at the end of the function is unreachable and can be removed.

In the `main` function:

```cpp
int main()
{
    int A[] = {1, 7, 4, 12, 3}, size = sizeof(A) / sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);
    cout << list1.maximum() << endl;                      // Outputs: 12
    cout << list1.maximumRecursive(list1.getHead()) << endl;  // Outputs: 12
}
```

- An array `A` is created, and its size is calculated.

- An instance of `LinkedList` named `list1` is created.

- The `create` method is called to initialize `list1` with the values from array `A`.

- The `maximum` method is called to find the maximum value in the linked list iteratively.

- The `maximumRecursive` method is called to find the maximum value in the linked list recursively.

- The results are printed to the console, and the output should be 12 for both methods, as 12 is the maximum value in the linked list {1, 7, 4, 12, 3}.