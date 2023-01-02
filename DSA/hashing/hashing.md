Hashing (storing and retrieving data in O(1) time)
hashing is a technique in which the data can be stored in an array like structure using various 
algorithms (hashing algorithms) which decide what element will be stored in which location.
The hashing function can be defined by: K mod 10, K mod n, Mid Square, Folding method, etc
example:
array/hash table initialized from 0 to n-1
if we intend to store the element 24, using the k mod 10 method, 
24 % 10 = 4; Hence, the value 24 will be stored in the 4th index of the array
While searching, 
24 % 10 = 4, which means go to index 4 to get value 24

Collision resolution techniques:
A) Chaining (Open hashing) - Linked list is used
- Array will store the address of the linked list node for that index. 
- If a new node/element has to be added to the linked list, we add it at the start.
- Makes deletion easy
- Worst case time complexity for searching/deleting is O(n)
- Load factor Alpha = (Elements or Keys)/ Slots


B) Open Addressing (Closed hashing)
i) Linear probing
- K mod 10 or K mod n is used, to store the element in the remainder index. 
- When an element is already present at the index, we use the function: (K mod 10 + i) mod 10
- For example, storing 23 and 43.  
    -- 23 % 10 = 3, hence 23 is stored at index 3
    -- 43 % 10 = 3, hence 43 has to be stored at index 3, but it is already occupied. This is called collision.
    -- Hence, we use the next formula: 
       ((43 % 10) + i ) % 10 where i = 1 (since at i=0 we already checked, and that position was occupied by 23). 
       (3 + 1) % 10 = 4
    -- Now, we again check if index 4 is already occupied or not. If it is, repeat the procedure by incrementing i. If it isn't, store 43 at index 4.
- Advantage: No extra space is required
- Disadvantages:
    -- Searching time: worst case is O(n), best case is O(1)
    -- Deletion is difficult
    
ii) Quadratic probing
- Same as linear probing
- The new hash function changes: ((k mod 10) + i^2) % 10
- The above function is used in case of collision
- Advantages: 
    -- Primary clustering is avoided, due to the quadratic nature of the algorithm
- Disadvantages:
    -- Search time can go upto O(n)
    -- No guarantee of finding a slot
    -- Secondary clustering

iii) Double Hashing
- Two hash functions are used
- Example:
    -- h1(k) = k mod 11; h2(k) = 8 - (k mod 8)
    -- final hashing value = (h1(k) + i * h2(k)) mod 11
    -- usually the final mod in final hash value is done with a prime number
- Advantages:
    -- No extra space needed
    -- No primary clustering
    -- No secondary clustering
- Disadvantages: 
    -- Search time is O(n)