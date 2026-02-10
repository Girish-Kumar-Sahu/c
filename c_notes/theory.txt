
# 📖 Detailed Theory Notes on C Language

## **UNIT I: Introduction to Problem Solving**
- **Computation Model**: Every program follows the cycle of input → processing → output. Computation is essentially the transformation of data into meaningful results.
- **Algorithms**: A finite sequence of well-defined steps to solve a problem. Properties: definiteness, finiteness, effectiveness.
- **Flowcharts**: Diagrammatic representation of algorithms using symbols (oval for start/end, parallelogram for input/output, rectangle for process, diamond for decision).
- **Programming Languages**:  
  - Machine language: Binary instructions.  
  - Assembly language: Mnemonics for machine instructions.  
  - High-level languages: Human-readable, require translation.  
- **Compilation Process**: Source code → Compiler → Object code → Linker → Executable.  
- **Testing & Debugging**: Testing ensures correctness; debugging removes errors.  
- **Documentation**: Essential for maintainability and clarity.  
- **C Language Basics**:  
  - Variables: Named memory locations.  
  - Identifiers: Names for variables/functions.  
  - Data types: Fundamental types like `int`, `float`, `char`, `double`.  
  - Constants: Fixed values that do not change.  
  - Expressions: Combination of variables, constants, and operators.  
  - Input/Output: Mechanisms to interact with the user.  

---

## **UNIT II: Decision, Control & Looping Statements**
- **Decision Making**: Programs often need to choose between alternatives.  
- **Relational Operators**: Compare values (e.g., `<`, `>`, `==`).  
- **Logical Operators**: Combine conditions (`&&`, `||`, `!`).  
- **Conditional Constructs**:  
  - `if`: Executes a block if condition is true.  
  - `if-else`: Executes one block if true, another if false.  
  - `switch`: Multi-way branching based on discrete values.  
- **Loops**:  
  - `while`: Repeats as long as condition is true.  
  - `do-while`: Executes at least once, then checks condition.  
  - `for`: Compact loop with initialization, condition, and increment.  
  - Nested loops: Loops inside loops, useful for multidimensional problems.  
  - Infinite loops: Loops without termination, often accidental.  
- **Structured Programming**: Emphasizes clarity, modularity, and avoidance of unstructured jumps (like `goto`).  

---

## **UNIT III: Arrays, Pointers & Strings**
- **Arrays**:  
  - Collection of elements of same type stored in contiguous memory.  
  - One-dimensional arrays: Linear storage.  
  - Two-dimensional arrays: Matrix-like storage.  
  - Operations: Searching, insertion, deletion, finding min/max.  
  - Matrix operations: Addition, multiplication, transpose.  

- **Strings**:  
  - Represented as arrays of characters terminated by `\0`.  
  - Standard library functions: `strlen`, `strcpy`, `strcmp`, `strcat`.  

- **Pointers**:  
  - Variables that store memory addresses.  
  - Pointer arithmetic: Incrementing/decrementing addresses.  
  - Applications: Dynamic memory allocation, efficient array handling, function arguments.  
  - Pointers and structures: Enable linked data structures.  
  - Dynamic memory: Allocated at runtime using `malloc`, `calloc`, freed with `free`.  

---

## **UNIT IV: Functions & Storage Classes**
- **Functions**:  
  - Promote modular programming and code reuse.  
  - Function prototype: Declares return type and parameters.  
  - Function call: Transfers control to function.  
  - Argument passing:  
    - Call by value: Copies values.  
    - Call by reference: Passes addresses, allows modification.  
  - Recursion: Function calling itself, useful for problems like factorial, Fibonacci.  
  - Arrays as arguments: Enables bulk data processing.  

- **Storage Classes**: Define scope, lifetime, and visibility of variables.  
  - `auto`: Default, local to function, destroyed after function exits.  
  - `static`: Retains value between function calls.  
  - `extern`: Declares global variable accessible across files.  
  - `register`: Suggests storage in CPU registers for faster access.  

---

## **UNIT V: Structures, Unions & Files**
- **Structures**:  
  - User-defined data type grouping different types.  
  - Useful for representing records (e.g., student with roll, name, marks).  
  - Arrays of structures: Store multiple records.  
  - Pointers to structures: Enable dynamic data structures.  
  - Self-referential structures: Basis of linked lists.  

- **Unions**:  
  - Similar to structures but all members share the same memory location.  
  - Efficient for memory when only one member is used at a time.  

- **Files**:  
  - Persistent storage of data.  
  - Operations: Opening, closing, reading, writing.  
  - Modes: Read (`r`), write (`w`), append (`a`).  
  - Importance: Data remains even after program termination.  

- **Enumerators**:  
  - User-defined type with named integer constants.  
  - Improves readability and maintainability.  

- **Bitwise Operations**:  
  - Operate directly on bits.  
  - Operators: AND (`&`), OR (`|`), XOR (`^`), shift left (`<<`), shift right (`>>`).  
  - Applications: Masking, setting/clearing bits, efficient arithmetic.  

---

