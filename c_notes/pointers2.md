#pointer notations
* (asterisk) = value at address
& (ampersend) = address of

# array and pointers
In C, array name behaves like a pointer to the first element.

🔹 Basic Example
int arr[3] = {10, 20, 30};


Memory looks like:

Address      Value
1000         10
1004         20
1008         30

🔹 What is arr?
arr == &arr[0]


👉 arr gives address of first element.

So:

printf("%p\n", arr);
printf("%p\n", &arr[0]);


Both print same address.

🔹 Pointer to array
int *p = arr;


This works because:

arr already holds starting address.

Diagram:

arr  -----> 10 20 30
p    ----^

🔥 Array indexing vs Pointer arithmetic (VERY IMPORTANT)

These two are equivalent:

arr[1]
*(arr + 1)


Why?

Because C internally converts:

arr[i]  →  *(arr + i)

Example
printf("%d", arr[2]);      // 30
printf("%d", *(arr+2));    // 30


Same result.

🔹 Pointer Arithmetic
int *p = arr;

printf("%d", *p);       // 10
printf("%d", *(p+1));   // 20
printf("%d", *(p+2));   // 30


Key idea:

p + 1  → moves by sizeof(int) bytes


Not 1 byte — depends on type.

🔹 Traversing array using pointer
int *p = arr;

for(int i=0;i<3;i++){
    printf("%d ", *(p+i));
}


OR

while(p < arr+3){
    printf("%d ", *p);
    p++;
}

⚠️ VERY IMPORTANT DIFFERENCE

Many students get this wrong.

arr is NOT exactly a pointer.

It acts like a pointer but:

❌ You cannot change arr
arr = arr + 1;   // ❌ error

✅ But you CAN change pointer
p = p + 1;   // allowed

🧠 Why?

arr → fixed memory location (constant address)

p → normal variable storing address

🔹 arr, &arr, and &arr[0] (super important)
int arr[3];

Expression	Meaning
arr	address of first element
&arr[0]	address of first element
&arr	address of whole array

They may print same address but types differ.

This matters later in advanced pointers.

🔥 Function parameter trick (DSA gold)

These are equivalent:

void print(int arr[]) { }

void print(int *arr) { }


Because array becomes pointer when passed to function.

🔹 Modify array using pointer
void change(int *a){
    a[0] = 99;
}

int main(){
    int arr[3] = {1,2,3};
    change(arr);
}


Output:

99 2 3


Why?
Because pointer refers to original memory.

🧠 One-line summary
arr[i] == *(arr + i)


If this feels natural → you understand arrays + pointers.