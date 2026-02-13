
# 🧠 Why Dynamic Memory Exists

First understand the problem.

### 🔹 Static memory (what you’ve used till now)

```c
int arr[10];
```

* Size fixed at compile time
* Stored in **stack**
* Automatically destroyed

But what if:

👉 You don’t know size beforehand?
👉 User enters size at runtime?

Example:

```c
int n;
scanf("%d", &n);
int arr[n];   // sometimes allowed, but limited
```

This is where **dynamic memory** comes in.

---

# 🏗️ Stack vs Heap (Mental Model)

```
STACK → small, fast, automatic
HEAP  → large, manual, flexible
```

Dynamic memory = memory from **heap**.

You control:

* when to create
* when to destroy

---

# 🔹 Required Header

```c
#include <stdlib.h>
```

All dynamic memory functions live here.

---

# 🔹 1️⃣ malloc() — Memory Allocation

Syntax:

```c
ptr = (type*) malloc(size_in_bytes);
```

Example:

```c
int *arr;
arr = (int*) malloc(5 * sizeof(int));
```

What happens:

* Heap allocates space for 5 integers
* Returns starting address
* Stored in `arr`

Diagram:

```
arr  ----->  [ _ _ _ _ _ ]   (heap memory)
```

⚠️ Memory is **uninitialized** (random garbage values).

---

# 🔹 2️⃣ calloc() — Clear Allocation

```c
int *arr = (int*) calloc(5, sizeof(int));
```

Difference from malloc:

* Initializes all values to **0**

| malloc         | calloc          |
| -------------- | --------------- |
| faster         | slightly slower |
| garbage values | zeroed memory   |

---

# 🔹 3️⃣ free() — Release Memory (VERY IMPORTANT)

```c
free(arr);
```

If you don’t free:
👉 **memory leak**

In long programs, this crashes systems.

Rule:

> Every malloc/calloc must have one free.

---

# 🔹 4️⃣ realloc() — Resize Memory

```c
arr = realloc(arr, 10 * sizeof(int));
```

Used when:

* you need bigger or smaller array later

Example:

```c
int *arr = malloc(3*sizeof(int));

arr = realloc(arr, 6*sizeof(int));
```

---

# 🔹 5️⃣ Full Example (Dynamic Array)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        arr[i] = i + 1;
    }

    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
```

---

# 🔥 Why Dynamic Memory Matters for YOU (DSA)

When you learn:

* linked list
* stacks
* queues
* trees
* graphs

You’ll create nodes like:

```c
Node *newNode = malloc(sizeof(Node));
```

Dynamic memory = foundation of DSA.

---

# ⚠️ Common Beginner Mistakes (seriously avoid)

### ❌ Using pointer before malloc

```c
int *p;
*p = 10;   // 💥 crash
```

---

### ❌ Forgetting free

```c
malloc(...);  // memory never released
```

---

### ❌ Wrong size

```c
malloc(5);   // ❌ wrong for int array
```

Correct:

```c
malloc(5 * sizeof(int));
```

---

### ❌ Losing reference

```c
arr = malloc(...);
arr = malloc(...);  // first memory lost forever
```

---

# 🧠 Mental Model (lock this in)

```
malloc  → give me memory
calloc  → give me zeroed memory
realloc → change size
free    → return memory
```

---


