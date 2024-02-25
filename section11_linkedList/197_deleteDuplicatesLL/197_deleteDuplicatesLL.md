# 197 - Deleting duplicates from a sorted linked list

```cpp
void removeDuplicate()
{
    Node *current = head;
```

- `removeDuplicate` is a member function of the `LinkedList` class that removes duplicate nodes from the linked list.

- It begins by initializing a pointer `current` to the `head` of the linked list.

```cpp
    while(current->next)
    {
        if(current->data == current->next->data)
        {
            Node *temporary = current->next;
            current->next = current->next->next;
            delete temporary;
        }
        else current = current->next;
    }
```

- The function enters a `while` loop, where the loop continues until `current->next` is not `nullptr` (i.e., there are nodes remaining in the linked list to check).

- Inside the loop, there is an `if` statement that checks whether the data of the current node (`current->data`) is equal to the data of the next node (`current->next->data`). If true, it means there is a duplicate.

- If a duplicate is found, a temporary pointer `temporary` is created, pointing to the next node to be deleted.

- The `next` pointer of the current node (`current->next`) is updated to skip the next node and point to the node after it.

- The node stored in `temporary` is deleted using the `delete` keyword. This frees up the memory occupied by the duplicate node.

- If no duplicate is found, the `else` statement is executed, and the `current` pointer is moved to the next node in the linked list (`current = current->next`).

The loop continues until all duplicate nodes have been removed from the linked list.

In summary, the function iterates through the linked list, checks for duplicate nodes, and removes them while preserving the order of the remaining nodes.