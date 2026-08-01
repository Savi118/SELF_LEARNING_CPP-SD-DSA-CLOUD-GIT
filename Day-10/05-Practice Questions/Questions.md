1. Create a struct Node and manually build a 3-node list (like the example), then print all values using a printList function
2. Write int listLength(Node \*head) that counts how many nodes are in the list
3. Write Node* insertAtHead(Node *head, int value) (from the example) and test by inserting 3 values one at a time, printing after each insert
4. Write Node* insertAtEnd(Node *head, int value) and test similarly
5. Write bool searchList(Node \*head, int target) — traverse and return whether target exists anywhere in the list
6. Write Node* deleteNode(Node *head, int value) (from the example), test deleting the head, a middle node, and the last node — three separate test cases
7. Write int sumList(Node \*head) — sum all values in the list (notice: this is basically the same shape as your Day 8 recursive array sum, just following pointers instead of indices)
8. Write Node* reverseList(Node *head) — reverse the list in place by rewiring the next pointers (this is the single most commonly asked linked list interview question — expect it to take real effort and multiple attempts)
9. Write Node* findMiddle(Node *head) using the "slow and fast pointer" technique: two pointers start at head, slow moves one step at a time, fast moves two steps at a time — when fast reaches the end, slow is at the middle. (This exact technique reappears constantly in linked list problems — worth understanding deeply, not just implementing.)
10. Write bool hasCycle(Node \*head) using the same slow/fast pointer idea — if the list has a cycle (some node's next loops back to an earlier node instead of ending in nullptr), the fast pointer will eventually catch up to the slow pointer. If it ever reaches nullptr instead, there's no cycle. (You'll need to manually construct a small test list with a cycle to verify this — be careful not to printList on it, since that would loop forever!)
