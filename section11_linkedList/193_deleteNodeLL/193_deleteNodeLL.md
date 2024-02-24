# 193 - Deleting a Node from a linked list

```cpp
void deleteFrom(int index)
{
    if(head == nullptr || index >= count()) return;
```

- `deleteFrom` is a member function of the `LinkedList` class that deletes a node at a specified index in the linked list.

- It takes an integer `index` representing the position of the node to be deleted.

- The function begins with a check. If the `head` of the linked list is `nullptr` (i.e., the linked list is empty) or the provided index is greater than or equal to the total number of nodes in the linked list (given by `count()`), the function returns early as there is no node to delete.

```cpp
    Node *current = head;
    for(int i = 0; i < index - 1; i++)
        current = current->next;
```

- If the linked list is not empty and the index is within valid bounds, the function initializes a pointer `current` to the `head` of the linked list.

- A `for` loop is used to traverse the linked list to the node just before the desired deletion point (at index - 1). The loop increments `i` until it reaches `index - 1`, adjusting the `current` pointer accordingly.

```cpp
    Node *temporary = current->next;
    current->next = current->next->next;
```

- After finding the node just before the desired deletion point, the `next` pointer of the node to be deleted (`temporary`) is stored in `temporary`.

- The `next` pointer of the current node (`current`) is then updated to point to the node after the one being deleted. This effectively bypasses the node to be deleted in the linked list.

```cpp
    delete temporary;
}
```

- Finally, the node stored in `temporary` is deleted using the `delete` keyword. This frees up the memory occupied by the node being deleted, preventing memory leaks.

This way, the function deletes a node at the specified index in the linked list while handling cases where the list is empty or the index is out of bounds.