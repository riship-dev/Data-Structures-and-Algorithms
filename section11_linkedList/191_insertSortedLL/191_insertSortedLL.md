# 191 - Insert element in a sorted linked list

```cpp
void insertInSorted(int value)
{
    Node *temporary = new Node(value);
```

- `insertInSorted` is a member function of the `LinkedList` class that inserts a new node with a given value in a sorted manner (ascending order) into the linked list.

- It takes an integer `value` representing the data to be inserted.

- The function begins by dynamically creating a new node using `new` with the provided `value`. This new node is called `temporary` as it will be used to temporarily store the new data.

```cpp
    if(head == nullptr || value < head->data) 
    {
        temporary->next = head;
        head = temporary;
        return;
    }
```

- If the `head` of the linked list is `nullptr` (i.e., the linked list is empty) or the provided `value` is less than the data in the current head node, the function enters this `if` block.

- In this case, the `next` pointer of the new node (`temporary`) is set to point to the current head of the linked list. Then, the `head` pointer is updated to point to the new node, effectively inserting the new node at the beginning of the linked list.

- The function returns early as there is no need to continue with the rest of the logic.

```cpp
    Node *current = head;
    while(current->next != nullptr && value > current->next->data)
        current = current->next;
```

- If the linked list is not empty and the provided `value` is greater than the data in the next node, the function enters a `while` loop.

- The loop iterates through the linked list, finding the position where the new node should be inserted. It stops when it reaches the end of the list (`current->next` is `nullptr`) or when the next node has a data greater than the provided `value`.

```cpp
    temporary->next = current->next;
    current->next = temporary;
}
```

- After finding the correct position, the `next` pointer of the new node (`temporary`) is set to point to the next node in the linked list.

- Then, the `next` pointer of the current node (`current`) is updated to point to the new node (`temporary`). This effectively inserts the new node in a sorted manner within the linked list.

This way, the function inserts a new node with the provided value into the linked list while maintaining the ascending order of the elements.