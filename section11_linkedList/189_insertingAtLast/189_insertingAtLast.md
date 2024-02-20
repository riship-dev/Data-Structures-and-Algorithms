# 189 - Inserting at the end of a linked list

```cpp
void insertAtEnd(int value)
{
    Node *temporary = new Node(value);
```

- `insertAtEnd` is a member function of the `LinkedList` class that inserts a new node with a given value at the end of the linked list.

- It takes an integer `value` representing the data to be inserted.

- The function begins by dynamically creating a new node using `new` with the provided `value`. This new node is called `temporary` as it will be used to temporarily store the new data.

```cpp
    if(head == nullptr)
    {
        head = last = temporary;
        return;
    }
```

- If the `head` of the linked list is `nullptr`, i.e., the linked list is empty, the function enters this `if` block.

- In this case, both `head` and `last` pointers are updated to point to the new node (`temporary`). This means that the new node is both the head and the last node in the linked list since it is the only node.

- The function then returns early as there is no need to continue with the rest of the logic.

```cpp
    last->next = temporary;
    last = temporary;
}
```

- If the linked list is not empty (i.e., `head` is not `nullptr`), the function continues with the following steps.

- The `next` pointer of the current last node (`last->next`) is set to point to the new node (`temporary`). This ensures that the last node now points to the new node, effectively inserting the new node at the end of the linked list.

- The `last` pointer is then updated to point to the new node (`temporary`). Now, `last` represents the new last node in the linked list.

This way, the function inserts a new node with the provided value at the end of the linked list, handling both the case when the list is empty and when it is not.