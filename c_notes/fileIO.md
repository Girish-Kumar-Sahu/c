# 📁 C File I/O — Core Idea

> File I/O = reading from and writing to files stored on disk.

Instead of:

```c
scanf / printf   // keyboard & screen
```

you use:

```c
FILE *   // file pointer
```

---

# 🔹 1️⃣ File Pointer

```c
FILE *fp;
```

Think of it like:
👉 a “connection” between your program and the file.

You must include:

```c
#include <stdio.h>
```

---

# 🔹 2️⃣ Opening a File — `fopen()`

```c
fp = fopen("data.txt", "r");
```

Syntax:

```c
fopen("filename", "mode");
```

---

## 📌 File Modes (VERY IMPORTANT)

| Mode   | Meaning                       |
| ------ | ----------------------------- |
| `"r"`  | Read only (file must exist)   |
| `"w"`  | Write (creates or overwrites) |
| `"a"`  | Append (adds at end)          |
| `"r+"` | Read + write                  |
| `"w+"` | Read + write (overwrite)      |
| `"a+"` | Read + append                 |

---

## ⚠️ Always check if file opened

```c
if (fp == NULL) {
    printf("File not found");
}
```

---

# 🔹 3️⃣ Closing File — `fclose()`

```c
fclose(fp);
```

Why?

* frees resources
* prevents data loss

Rule:
👉 Open → Use → Close

---

# 🔹 4️⃣ Writing to File

## ✅ `fprintf()`

Same as `printf` but writes to file.

```c
FILE *fp = fopen("data.txt", "w");

fprintf(fp, "Hello Girish\n");

fclose(fp);
```

---

## ✅ `fputc()` — write single character

```c
fputc('A', fp);
```

---

## ✅ `fputs()` — write string

```c
fputs("Hello World", fp);
```

---

# 🔹 5️⃣ Reading from File

## ✅ `fscanf()`

```c
int x;
fscanf(fp, "%d", &x);
```

---

## ✅ `fgetc()` — read one character

```c
char ch = fgetc(fp);
```

Returns `EOF` at end of file.

---

## ✅ `fgets()` — read a line

```c
char line[100];
fgets(line, 100, fp);
```

Best for strings.

---

# 🔹 6️⃣ EOF (End Of File)

EOF means:
👉 file has no more data.

Example loop:

```c
char ch;
while ((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);
}
```

Very common pattern.

---

# 🔹 7️⃣ Full Example — Write + Read

```c
#include <stdio.h>

int main() {

    FILE *fp;

    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello C File IO\n");
    fclose(fp);

    fp = fopen("data.txt", "r");

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
```

---

# 🔹 8️⃣ Text File vs Binary File (quick idea)

### Text file

```c
fopen("data.txt", "r");
```

Human readable.

---

### Binary file

```c
fopen("data.bin", "rb");
```

Raw bytes (faster, used later).

You don’t need binary yet.

---

# 🔥 Common Mistakes (avoid these)

❌ Forgetting `fclose()`
❌ Not checking `fp == NULL`
❌ Using wrong mode (`"r"` when file doesn’t exist)
❌ Mixing `scanf` and file functions

---

# 🧠 Mental Model (simple)

```
FILE *fp = fopen()   -> connect
fprintf/fgetc/etc    -> communicate
fclose()             -> disconnect
```

---



