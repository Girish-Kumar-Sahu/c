
# 📘 Notes on C Language (Syntax + Theory)

## **UNIT I: Introduction to Problem Solving**
- **Basic Model of Computation**  
  - Input → Processing → Output  
  - Algorithms: Step-by-step procedure to solve a problem.  
  - Flowcharts: Graphical representation of algorithms.  

- **Programming Languages**  
  - Machine language → Assembly language → High-level languages.  
  - Compiler: Translates source code into machine code.  
  - Linking & Loading: Combines object files and libraries into an executable.  
  - Testing & Debugging: Finding and fixing errors.  
  - Documentation: Writing clear explanations for code.

- **Introduction to C**  
  - Variables: Named storage locations.  
  - Identifiers: Names for variables/functions.  
  - Data Types: `int`, `float`, `char`, `double`.  
  - Constants & Literals: Fixed values (`10`, `3.14`, `'A'`).  
  - Operators: `+`, `-`, `*`, `/`, `%`.  
  - Input/Output: `scanf()`, `printf()`.  
  - Simple Program:  
    ```c
    #include <stdio.h>
    int main() {
        int a = 5, b = 10;
        printf("Sum = %d", a+b);
        return 0;
    }
    ```

---

## **UNIT II: Decision, Control & Looping Statements**
- **Conditional Statements**  
  - `if`, `if-else`, `nested if`, `switch`.  
  - Relational operators: `<`, `>`, `<=`, `>=`, `==`, `!=`.  
  - Logical operators: `&&`, `||`, `!`.

- **Loops**  
  - `while`: Entry-controlled.  
  - `do-while`: Exit-controlled.  
  - `for`: Compact loop structure.  
  - Nested loops: Loop inside another loop.  
  - Infinite loop: Loop without termination condition.  

---

## **UNIT III: Arrays, Pointers & Strings**
- **Arrays**  
  - One-dimensional: `int arr[10];`  
  - Operations: Searching, insertion, deletion.  
  - Two-dimensional: `int mat[3][3];`  
  - Matrix operations: Addition, multiplication, transpose.  

- **Strings**  
  - Null-terminated character arrays.  
  - Functions: `strlen()`, `strcpy()`, `strcmp()`, `strcat()`.  

- **Pointers**  
  - Address operator: `&`.  
  - Declaration: `int *p;`  
  - Pointer arithmetic: `p++`, `p--`.  
  - Functions & pointers: Passing addresses.  
  - Dynamic memory: `malloc()`, `calloc()`, `free()`.  

---

## **UNIT IV: Functions & Storage Classes**
- **Functions**  
  - Modular programming: Breaking into functions.  
  - Prototype: `return_type function_name(parameters);`  
  - Call by value vs Call by reference.  
  - Recursion: Function calling itself.  
  - Arrays as arguments.  

- **Storage Classes**  
  - `auto`: Default local variables.  
  - `static`: Retains value between calls.  
  - `extern`: Access global variables across files.  
  - `register`: Stored in CPU registers for fast access.  

---

## **UNIT V: Structures, Unions & Files**
- **Structures**  
  - Grouping different data types.  
  - Example:  
    ```c
    struct student {
        int roll;
        char name[20];
        float marks;
    };
    ```
  - Array of structures, pointers to structures.  
  - Self-referential structures (linked lists).  

- **Unions**  
  - Similar to structures but share memory.  

- **Files**  
  - File handling: `fopen()`, `fclose()`, `fprintf()`, `fscanf()`.  
  - Modes: `"r"`, `"w"`, `"a"`.  

- **Enumerators & Bitwise Operations**  
  - `enum days {Mon, Tue, Wed};`  
  - Bitwise: `&`, `|`, `^`, `<<`, `>>`.  

---


