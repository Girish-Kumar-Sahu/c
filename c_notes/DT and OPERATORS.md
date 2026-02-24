Here is a **clean, structured exam-ready answer** you can directly learn and write. I’ll keep it **simple, organized, and technically correct** so it fits engineering exam expectations.

---

# **Data Types and Operators in C**

---

# **1. Data Types in C**

## **1.1 Definition**

A **data type** specifies the type of data a variable can store and the amount of memory allocated to it.

Example:

```c
int age = 18;
float marks = 85.5;
```

---

## **1.2 Types of Data Types in C**

C data types are mainly classified into:

### **(a) Basic / Primary Data Types**

| Data Type | Description                 | Example  |
| --------- | --------------------------- | -------- |
| `int`     | Stores integer values       | 10, -5   |
| `float`   | Stores decimal values       | 3.14     |
| `char`    | Stores single character     | 'A'      |
| `double`  | Stores large decimal values | 12.45678 |

Example:

```c
int a = 5;
float b = 2.5;
char c = 'G';
```

---

### **(b) Derived Data Types**

These are formed from basic data types.

* Array
* Pointer
* Function

Example:

```c
int arr[5];
int *ptr;
```

---

### **(c) User-Defined Data Types**

Created by the programmer.

* `struct`
* `union`
* `enum`
* `typedef`

Example:

```c
struct Student {
    int id;
    char name[20];
};
```

---

### **(d) Void Data Type**

* Represents **no value**
* Used in functions

Example:

```c
void display();
```

---

### **1.3 Type Modifiers**

Modifiers change size or range of data.

* `short`
* `long`
* `signed`
* `unsigned`

Example:

```c
unsigned int x = 100;
long int y = 50000;
```

---

# **2. Operators in C**

## **2.1 Definition**

Operators are symbols used to perform operations on variables and values.

Example:

```c
int c = a + b;
```

---

## **2.2 Types of Operators in C**

---

## **(a) Arithmetic Operators**

Used for mathematical calculations.

| Operator | Meaning        |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `*`      | Multiplication |
| `/`      | Division       |
| `%`      | Modulus        |

Example:

```c
int sum = a + b;
```

---

## **(b) Relational Operators**

Used to compare values. Result is **true (1)** or **false (0)**.

| Operator | Meaning          |
| -------- | ---------------- |
| `==`     | Equal to         |
| `!=`     | Not equal        |
| `>`      | Greater than     |
| `<`      | Less than        |
| `>=`     | Greater or equal |
| `<=`     | Less or equal    |

Example:

```c
if(a > b)
```

---

## **(c) Logical Operators**

Used to combine conditions.

| Operator | Meaning |   |    |
| -------- | ------- | - | -- |
| `&&`     | AND     |   |    |
| `        |         | ` | OR |
| `!`      | NOT     |   |    |

Example:

```c
if(a > 0 && b > 0)
```

---

## **(d) Assignment Operators**

Used to assign values.

| Operator | Example |
| -------- | ------- |
| `=`      | a = 5   |
| `+=`     | a += 2  |
| `-=`     | a -= 1  |
| `*=`     | a *= 3  |
| `/=`     | a /= 2  |

---

## **(e) Increment and Decrement Operators**

| Operator | Meaning       |
| -------- | ------------- |
| `++`     | Increase by 1 |
| `--`     | Decrease by 1 |

Example:

```c
a++;
b--;
```

---

## **(f) Bitwise Operators**

Operate on binary bits.

`&` (AND)
`|` (OR)
`^` (XOR)
`~` (NOT)
`<<` (Left shift)
`>>` (Right shift)

---

## **(g) Conditional (Ternary) Operator**

Syntax:

```c
condition ? true_value : false_value;
```

Example:

```c
int max = (a>b) ? a : b;
```

---

## **(h) Special Operators**

* `sizeof`
* Pointer operators `&` and `*`
* Comma operator `,`

Example:

```c
int x = sizeof(int);
```

---

# ✅ **Conclusion**

Data types define the nature of data stored in variables, while operators perform operations on that data. Proper understanding of both helps in efficient program design and memory management.

---

If you want, Girish, I can also give you:

✅ **Ultra-short 5-marker answer** (most asked in engineering exams)
✅ **Diagram-based classification** so you remember quickly during revision
✅ Or a **one-page handwritten-style notes format** you can memorize before exams.
