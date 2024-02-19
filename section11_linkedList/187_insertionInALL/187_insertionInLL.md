# 187 - Insertion in a linked list

```cpp
void insert(int value, int index)
{
    if(index < 0 || index > count()) return;
```

- `insert` is a member function of the `LinkedList` class that inserts a new node with a given value at a specified index in the linked list.

- It takes two parameters: an integer `value` representing the data to be inserted, and an integer `index` representing the position where the new node should be inserted.

- The function begins with a check to ensure that the index is within valid bounds. If the index is less than 0 or greater than the total number of nodes in the linked list (given by `count()`), the function returns early, indicating that the insertion is not possible.

```cpp
    Node *temporary = new Node(value);
```

- A new node is created dynamically using `new` with the provided `value`. This new node is called `temporary` as it will be used to temporarily store the new data.

```cpp
    if(index == 0)
    {
        temporary->next = head;
        head = temporary;
    }
```

- If the index is 0, meaning the new node should be inserted at the beginning of the linked list, the `next` pointer of the new node (`temporary`) is set to the current `head`, and then the `head` is updated to point to the new node.

```cpp
    else if(index > 0)
    {
        Node *current = head;
        for(int i = 0; i < index - 1; i++) 
            current = current->next;
```

- If the index is greater than 0, the function enters an `else if` block. It initializes a pointer `current` to the `head` of the linked list.

- A `for` loop is used to traverse the linked list to the node just before the desired insertion point (at index - 1). The loop increments `i` until it reaches `index - 1`, adjusting the `current` pointer accordingly.

```cpp
        temporary->next = current->next;
        current->next = temporary;
    }
```

- After finding the node just before the desired insertion point, the `next` pointer of the new node (`temporary`) is set to point to the node that was originally at the insertion index.

- Then, the `next` pointer of the node just before the insertion point (`current`) is updated to point to the new node (`temporary`).

This way, the new node is effectively inserted at the specified index, whether it's at the beginning or somewhere within the linked list.