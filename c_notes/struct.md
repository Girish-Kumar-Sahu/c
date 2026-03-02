---

# 🔷 1️⃣ What is a Structure in C?

A **structure** is a user-defined data type that allows you to store **different types of data together** under one name.

👉 It is used when multiple variables are related.

---

## 🧠 Example Situation

Instead of writing:

```c
char name[50];
int age;
float marks;
```

We group them into one unit called `Student`.

---

# 🔷 2️⃣ Syntax of Structure

```c
struct Student {
    char name[50];
    int age;
    float marks;
};
```

### Important:

* `struct` keyword is mandatory in C
* Semicolon after closing brace is compulsory

---

# 🔷 3️⃣ Creating Structure Variables

```c
struct Student s1;
```

Assign values:

```c
s1.age = 19;
s1.marks = 85.5;
```

---

# 🔷 4️⃣ Complete Working Program

```c
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
```

---

# 🔷 5️⃣ Using typedef (Very Important for Exams)

Instead of writing `struct Student` every time:

```c
typedef struct {
    char name[50];
    int age;
    float marks;
} Student;
```

Now you can write:

```c
Student s1;
```

Much cleaner 👌

---

# 🔷 6️⃣ Array of Structures

Very important for university exams.

```c
Student s[3];
```

Access:

```c
s[0].age = 18;
```

Used when storing multiple students.

---

# 🔷 7️⃣ Structure Inside Structure (Nested Structure)

```c
struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    struct Date dob;
};
```

Access:

```c
s1.dob.year = 2005;
```

---

# 🔷 8️⃣ Structure and Functions

Passing structure to function:

```c
void display(struct Student s) {
    printf("%s %d", s.name, s.age);
}
```

Better way (using pointer):

```c
void display(struct Student *s) {
    printf("%s %d", s->name, s->age);
}
```

👉 `->` is used with structure pointer.

---

# 🔷 9️⃣ Memory Concept (Important Conceptual Question)

Structure memory = sum of all members
(but may include padding)

Example:

```c
struct A {
    char c;
    int i;
};
```

Size may not be 5 bytes — it may be 8 due to padding.

---

# 🔥 Important Viva Questions

Q1: Difference between structure and union?
Q2: Why use typedef?
Q3: What is structure padding?
Q4: Can we assign one structure to another? → ✅ Yes (same type)

Example:

```c
s2 = s1;
```

---

# 🎯 Exam Definition

> A structure in C is a user-defined data type that groups variables of different data types under a single name.

---

Since you’re in BTech AI & DS at Chouksey 👌
Strong C fundamentals will help in:

* Memory understanding
* Data structures
* System-level concepts

---

