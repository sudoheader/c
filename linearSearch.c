#include <stdio.h>

//A linear search algorithm to find and return index of the searched element
int recursiveLinearSearch(int array[], int arraySize, int value, int index)
{
   if(index<arraySize){
       if(array[index] == value)
           return index;
       else
           return recursiveLinearSearch(array, arraySize, value, index+1);
   }
   else{
       return -1;
   }
}

int main(void)
{
  int array[] = {10, 2, 7, 5, 15, 30, 8, 6}; // input array
  int value = 30;  //value to be searched
  int arraySize = sizeof(array)/sizeof(array[0]);
  int result = recursiveLinearSearch(array, arraySize, value, 0); //calling function to apply linear search
  (result == -1)? printf("Element is not present in array")
                : printf("Element is present at index %d", result);
  return 0;
}