## 🔹 What is an Array?
- An **array** is a collection of elements of the **same data type** stored in **contiguous memory locations**.  
- Instead of declaring 100 separate variables, you can declare one array that holds 100 values.  
- Each element is accessed using an **index** (starting at 0).  

Example:  
```c
int numbers[5];   // declares an array of 5 integers
```

Here:
- `numbers[0]` → first element  
- `numbers[1]` → second element  
- …  
- `numbers[4]` → fifth element  

---

## 🔹 Declaring and Initializing Arrays
```c
int marks[5] = {90, 85, 70, 88, 95};
```
- This creates an array of 5 integers and initializes them.  
- If you don’t provide all values, the rest are set to **0**.  

---

## 🔹 Accessing Array Elements
```c
#include <stdio.h>
int main() {
    int marks[5] = {90, 85, 70, 88, 95};
    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }
    return 0;
}
```
**Output:**
```
marks[0] = 90
marks[1] = 85
marks[2] = 70
marks[3] = 88
marks[4] = 95
```

---

## 🔹 Key Properties of Arrays
- **Fixed size** → once declared, you cannot change the size.  
- **Same type** → all elements must be of the same data type.  
- **Random access** → you can directly access any element using its index.  
- **Contiguous memory** → elements are stored next to each other in memory.  

---

## 🔹 Common Mistakes
- Accessing out-of-bound indices (e.g., `marks[5]` when size is 5) → leads to **undefined behavior**.  
- Forgetting that arrays start at index **0**, not 1.  

---

✅ Arrays are the foundation for more advanced concepts like **strings, matrices, and pointers** in C.  


