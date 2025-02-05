#include<stdio.h>
int main(){
  int n;
  printf("\nEnter the no of elements:");
  scanf("%d",&n);
  int number[n];
  printf("\nEnter the %d elements;",n);
  for (int i=0;i<n;i++){
    scanf("%d",&number[i]);
  }
    for (int i=0;i<n-1;i++){
       for(int j=0;j<n-i;j++){
          if(number[j]>number[j+1]){
            int temp=number[j];
            number[j]=number[j+1];
            number[j+1]=temp;
         }
       }
   }
   printf("\nThe sorted array:\t");
   for(int i=0;i<n;i++){
     printf("%d\t",number[i]);
   }
   return 0;
}
