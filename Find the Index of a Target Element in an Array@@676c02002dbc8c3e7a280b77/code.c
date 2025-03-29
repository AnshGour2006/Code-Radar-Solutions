// Your code here...
#include<stdio.h>
int target_index(int arr[],int n,int x){
    if(arr[i]==x){
        return arr[i];
    }
    else{
        return -1;
    }
}
int main(){
scanf("%d", &n);
int arr[n]; // Declare array;
for (int i = 0; i < n; i++) {
  scanf("%d", &arr[i]);
 }
 scanf("%d", &x);

// // Call the function
int index = target_index(arr, n, x);
 if (index != -1) {
  printf("%d\n", index);
 } else {
   printf("Element not found\n");
 }
    return 0;
}