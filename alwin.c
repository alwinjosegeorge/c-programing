#include<stdio.h>
int main(){
   int finder, i, key, index = -1;
   printf("\nEnter the number of elements: ");
   scanf("%d", &finder);
   
   int array[finder];
   printf("Enter the elements:\n");
   for (i = 0; i < finder; i++){
       scanf("%d", &array[i]);
   }
   printf("Enter the number to find: ");
   scanf("%d", &key);
   
   for (i = 0; i < finder; i++){
       if(array[i] == key){
          index = i + 1;
          printf("Index = %d\n", index);
          break;
       }
   }
   if(index == -1){
       printf("The given number is not in the array\n");
   }
   return 0;
}

