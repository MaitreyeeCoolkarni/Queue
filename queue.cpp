# QUEUE

## Theory of Queue

A **queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle.  
The element that is inserted **first** is the one that gets **removed first**.

### Characteristics:
- Elements are **inserted at the rear** (enqueue).
- Elements are **removed from the front** (dequeue).
- Supports sequential access, not random access.
- Can be implemented using arrays, linked lists, or STL in C++.

### Types of Queues:
1. **Simple Queue** – Follows basic FIFO order.
2. **Circular Queue** – Last position connects back to the first, avoiding wasted space.
3. **Priority Queue** – Elements are dequeued based on priority, not order of insertion.
4. **Double-Ended Queue (Deque)** – Insertion and deletion allowed from both ends.

### Applications:
- CPU scheduling
- Disk scheduling
- Printer task management
- Call center systems
- Breadth-First Search (BFS) in graphs

## Algorithm for Queue Implementation

1. Define a class `Queue` with:
   - Array `arr[SIZE]` to store elements.
   - Two integer pointers: `front` and `rear`.

2. Initialize:
   - `front = -1`
   - `rear = -1`

3. Enqueue (Insert element):
   - If `rear == SIZE - 1`, print "Queue Overflow" (queue full).
   - If `front == -1`, set `front = 0` (first element).
   - Increment `rear` and insert element at `arr[rear]`.

4. Dequeue (Remove element):
   - If `front == -1` OR `front > rear`, print "Queue Underflow" (queue empty).
   - Else, print `arr[front]` as removed.
   - Increment `front`.

5. Display (Print queue elements):
   - If `front == -1` OR `front > rear`, print "Queue is empty".
   - Otherwise, loop from `front` to `rear` and print elements.

6. In `main`:
   - Create a queue object.
   - Perform enqueue, dequeue, and display operations to test functionality.

  ## Conclusion

- A **queue** is a fundamental data structure based on the FIFO principle.  
- The given code implements a **simple queue using arrays** with operations:
  - **Enqueue** → Insert at rear.
  - **Dequeue** → Remove from front.
  - **Display** → Print all elements from front to rear.  
- This implementation demonstrates how to handle **overflow** (when full) and **underflow** (when empty).  
- While array-based queues are easy to implement, they have limitations (fixed size).  
- More advanced versions like **circular queues** or **linked list-based queues** can overcome these drawbacks.  
