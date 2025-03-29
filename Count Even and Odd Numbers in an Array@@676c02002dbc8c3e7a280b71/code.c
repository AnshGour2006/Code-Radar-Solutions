// Your code here...
#include<stdio.h>
int even_odd(int arr[],int n,int even_count,int odd_count){
    for(int i=0;i<n;i++){
        if(arr[i]/2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",even_count);
    printf("%d",odd_count);
}