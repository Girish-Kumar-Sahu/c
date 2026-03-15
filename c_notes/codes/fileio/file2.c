// C program to implement
// fseek
#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
      // string declared
    char str[80];
  
      // File Pointer declared
    FILE* ptr;

      // File Opened
    ptr = fopen("Hello.txt", "a+");
    
      // Puts data in File
      fputs("Welcome to GeeksforGeeks", ptr);

      // fseek function used
    fseek(ptr, 11, SEEK_SET);
  
      // puts programming in place of at position defined 
      // After 11 elements
    fputs("Programming  ", ptr);
    fclose(ptr);

      // Reading the file
    ptr = fopen("Hello.txt", "r+");
    if (fgets(str, 80, ptr) != NULL) {
        puts(str);
    }

      // Close the opened file
    fclose(ptr);
  
    return 0;
}