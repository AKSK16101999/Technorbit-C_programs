#include <stdio.h> 
#include <string.h> 
  
// Function to swap adjacent characters 
void swap(char* str) 
{ 
  
    char c = 0; 
    int length = 0, i = 0; 
  
    // Find the length of the string 
    length = strlen(str); 
  
    // Check if the length of the string 
    // is even or odd 
    if (length % 2 == 0) { 
  
        // swap the characters with the adjacent character 
        for (i = 0; i < length; i += 2) { 
            c = str[i]; 
            str[i] = str[i + 1]; 
            str[i + 1] = c; 
        } 
  
        // Print the swapped character string 
        printf("%s\n", str); 
    } 
    else { 
  
        // Print NA as the string length is odd 
        printf("NA\n"); 
    } 
} 
  

int main() 
{ 
  
    // Get the string 
    char str1[] = "Geek"; 
    char str2[] = "Geeks"; 
  
    swap(str1); 
    swap(str2); 
  
    return 0; 
}

