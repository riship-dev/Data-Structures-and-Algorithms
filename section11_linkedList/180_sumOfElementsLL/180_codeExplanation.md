# 180 - Sum of elements in  a linked list 

```cpp
int sumOf()
{
    Node *current = head;
    int sum = 0;
    while(current != nullptr)
    {
        sum += current->data;
        current = current->next;
    }
    return sum;
}
```

- `sumOf` is a member function of the `LinkedList` class that calculates the sum of all elements in the linked list using an iterative approach.

- It initializes a pointer `current` to the head of the linked list and a variable `sum` to 0 to keep track of the sum.

- It enters a `while` loop, where the loop continues until `current` becomes `nullptr` (reaching the end of the linked list).

- Inside the loop, it adds the `data` of the current node to the `sum` and moves the `current` pointer to the next node.

- Finally, it returns the total sum of all elements in the linked list.

```cpp
int sumOfRecursive(Node *current)
{
    if(current == nullptr) return 0;
    return sumOfRecursive(current->next) + current->data;
}
```

- `sumOfRecursive` is a recursive member function of the `LinkedList` class that calculates the sum of all elements in the linked list using a recursive approach.

- It takes a `Node*` parameter `current` representing the current node being processed.

- The base case of the recursion is when `current` is `nullptr`, indicating the end of the linked list. In this case, it returns 0.

- If `current` is not `nullptr`, it makes a recursive call to `sumOfRecursive` with the next node (`current->next`) and adds the `data` of the current node to the result. This process continues until the base case is reached.

- The recursive calls are unwound, and the sum is calculated by adding the `data` of each node in the linked list.

In the `main` function:

```cpp
int main()
{
    int A[] = {1, 2, 3, 4, 5}, size = sizeof(A) / sizeof(A[0]);
    LinkedList list1;
    list1.create(A, size);
    cout << list1.sumOf() << endl;                      // Outputs: 15
    cout << list1.sumOfRecursive(list1.getHead()) << endl;  // Outputs: 15
}
```

- An array `A` is created, and its size is calculated.

- An instance of `LinkedList` named `list1` is created.

- The `create` method is called to initialize `list1` with the values from array `A`.

- The `sumOf` method is called to calculate the sum of all elements in the linked list iteratively.

- The `sumOfRecursive` method is called to calculate the sum of all elements in the linked list recursively.

- The results are printed to the console, and the output should be 15 for both methods, as the sum of the elements in the linked list {1, 2, 3, 4, 5} is 15.