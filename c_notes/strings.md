
# 🧵 What is a string in C? (core truth)

> **A string in C is an array of characters that ends with `'\0'` (null character)**

There is **no built-in string type** like Python or JS.

---

## 1️⃣ Basic string declaration

```c
char name[6] = "Girish";
```

What’s *actually* stored in memory:

```
G  i  r  i  s  h  \0
```

That `\0` is **mandatory**.

Without it → C doesn’t know where the string ends.

---

## 2️⃣ Why `\0` matters

```c
printf("%s", name);
```

`printf` prints characters **until it sees `\0`**.

No `\0` = garbage output or crash 💥

---

## 3️⃣ Different ways to declare strings

### ✅ Recommended (clean)

```c
char name[] = "Girish";
```

Compiler automatically adds `\0`.

---

### ⚠️ Manual (be careful)

```c
char name[] = {'G','i','r','i','s','h','\0'};
```

Miss `\0` → bug.

---

### ❌ Dangerous (no space for `\0`)

```c
char name[6] = "Girish";  // needs 7
```

---

## 4️⃣ Accessing characters

```c
char name[] = "Girish";

printf("%c", name[0]);  // G
printf("%c", name[3]);  // i
```

Strings are just **arrays**.

---

## 5️⃣ String input (VERY IMPORTANT)

### ❌ Wrong (unsafe)

```c
char name[20];
scanf("%s", name);
```

Stops at space, no bounds check.

---

### ✅ Safer (preferred)

```c
fgets(name, 20, stdin);
```

Reads full line including spaces.

---

## 6️⃣ String vs char pointer (BIG concept)

### Array string

```c
char name[] = "Girish";
name[0] = 'M';   // ✅ allowed
```

Stored in stack memory.

---

### Pointer string

```c
char *name = "Girish";
name[0] = 'M';   // ❌ undefined behavior
```

Points to **read-only memory**.

👉 Rule:

* Modify string → use `char[]`
* Read-only → `char *`

---

## 7️⃣ String functions (`string.h`)

Include:

```c
#include <string.h>
```

### Length

```c
strlen(name);   // excludes '\0'
```

---

### Copy

```c
char a[20];
strcpy(a, "Hello");
```

⚠️ Destination must be large enough.

---

### Concatenate

```c
strcat(a, " World");
```

---

### Compare

```c
strcmp("abc", "abd");   // <0, 0, >0
```

❌ Never compare strings with `==`.

---

## 8️⃣ Why `==` doesn’t work

```c
char a[] = "hi";
char b[] = "hi";

a == b   // ❌ compares addresses
```

Use:

```c
strcmp(a, b) == 0
```

---

## 9️⃣ Passing strings to functions

```c
void greet(char name[]) {
    printf("Hello %s", name);
}
```

OR (same thing)

```c
void greet(char *name) { }
```

Arrays decay into pointers.

---

## 🔥 Very common mistakes (avoid these)

❌ Forgetting `\0`
❌ Using `==` for string comparison
❌ Modifying string literal
❌ Using `scanf` blindly
❌ Not allocating enough space

---

## 🧠 Mental model (lock this in)

* String = `char[] + '\0'`
* Printing stops at `\0`
* Strings are **mutable arrays**, not objects
* You control memory

---

