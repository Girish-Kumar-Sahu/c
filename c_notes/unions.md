

# 🔷 What is a Union in C?

> A union is a user-defined data type where **all members share the same memory location**.

That means:

👉 Only **one member can store value at a time**.

---

# 🔹 Syntax

```c
union Data {
    int i;
    float f;
    char str[20];
};
```

⚠ Notice:

* `union` keyword
* `;` after closing brace (required)

---

# 🔹 Example Program

```c
#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;

    d.i = 10;
    printf("i = %d\n", d.i);

    d.f = 3.14;
    printf("f = %.2f\n", d.f);

    printf("i after assigning f = %d\n", d.i);

    return 0;
}
```

---

# 🔥 Important Concept

When we do:

```
d.i = 10;
```

Memory stores integer.

When we do:

```
d.f = 3.14;
```

The same memory is overwritten.

So previous value is lost.

---

# 🔷 Memory Difference (Structure vs Union)

## Structure

```c
struct A {
    int x;
    float y;
};
```

Memory:

```
| x (4 bytes) | y (4 bytes) |
```

Total ≈ 8 bytes

---

## Union

```c
union A {
    int x;
    float y;
};
```

Memory:

```
| shared 4 bytes |
```

Total = 4 bytes (size of largest member)

---

# 🔥 Size Example

```c
union A {
    int x;     // 4 bytes
    float y;   // 4 bytes
    char c;    // 1 byte
};
```

Size = 4 bytes
Because largest member is 4 bytes.

---

# 🔷 When Do We Use Union?

Used when:

✔ Only one value is needed at a time
✔ Memory saving is important
✔ Embedded systems
✔ Interpreting same memory in different formats

Example:

* Storing int OR float
* Type conversion trick
* Hardware-level programming

---

# 🔥 Very Important Difference

| Feature                        | Structure      | Union          |
| ------------------------------ | -------------- | -------------- |
| Memory                         | Separate       | Shared         |
| Size                           | Sum of members | Largest member |
| Can store all values together? | ✅ Yes          | ❌ No           |
| Memory efficient               | ❌              | ✅              |

---

# 🎯 Exam Definition (Write This)

> A union in C is a user-defined data type in which all members share the same memory location, and only one member can hold a value at a time.

---

