#include <stdio.h> 
#include <string.h> 

int main() { 
  char *fruits[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"}; 
  int n = sizeof(fruits) / sizeof(fruits[0]); 
  
  for (int i = 0; i < n - 1; i++) { 
    for (int j = 0; j < n - 1 - i; j++) { 
      if (strcmp(fruits[j], fruits[j+1]) > 0) { 
        char *temp = fruits[j]; 
        fruits[j] = fruits[j+1]; 
        fruits[j+1] = temp; 
      } 
    } 
  } 
  
  for (int i = 0; i < n; i++) { 
    printf("%s\n", fruits[i]); 
  } 
  
  return 0; 
}
