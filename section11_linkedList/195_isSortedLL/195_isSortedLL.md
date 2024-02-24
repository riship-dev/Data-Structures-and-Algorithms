# 195 - Is a linked list sorted?

```cpp
bool isSorted()
{
    Node *current = head;
```

- `isSorted` is a member function of the `LinkedList` class that checks whether the linked list is sorted in non-decreasing order.

- It begins by initializing a pointer `current` to the `head` of the linked list.

```cpp
    while (current->next != nullptr)
    {
        if (current->data <= current->next->data) 
            current = current->next;
        else return false;
    }
```

- The function enters a `while` loop, where the loop continues until `current->next` is `nullptr` (i.e., the end of the linked list is reached).

- Inside the loop, there is an `if` statement that checks whether the data of the current node (`current->data`) is less than or equal to the data of the next node (`current->next->data`). If true, it means the current node's data is less than or equal to the next node's data, and the loop continues to the next node (`current = current->next`).

- If the `if` condition is false (i.e., the data of the current node is greater than the data of the next node), the function returns `false`. This indicates that the linked list is not sorted in non-decreasing order.

```cpp
    return true;
}
```

- If the loop completes without encountering a pair of nodes where the current node's data is greater than the next node's data, the function returns `true`. This indicates that the linked list is sorted in non-decreasing order.

In summary, the function traverses the linked list and checks if each node's data is less than or equal to the next node's data. If it finds a pair of nodes where this condition is not met, it returns `false`, indicating that the list is not sorted. If it successfully traverses the entire list without finding such a pair, it returns `true`, indicating that the list is sorted.