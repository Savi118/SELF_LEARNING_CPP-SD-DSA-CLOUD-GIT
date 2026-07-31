# Why Linked Lists Exist

- # Arrays have a real limitation you've quietly been living with:
        - Fixed size
        - Decided at declaration
        - Expensive insertion/deletion in the middle (shifting every subsequent element, which we did manually in insertion sort)
- # A linked list solves both:
        - It grows one element at a time
        - Inserting/removing a node doesn't require shifting anything else — just rewiring a couple of connections.

# The tradeoff:

- No more instant arr[5] access — to reach the 5th element
- We must walk through the first 4 one at a time.
- Arrays win at random access
- Linked lists win at flexible insertion/deletion
- Neither is "better" — they're suited to different situations, and recognizing which fits a given problem is itself an interview skill.

