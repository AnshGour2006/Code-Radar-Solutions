#include<stdio.h>
int target_index(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
        else{
            return -1;
        }
    }
}
int main(){
int n,x;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",&x);\
int index=target_index(arr,n,x)
if(index!=-1){
    printf("%d",index);
}
else{
    printf("-1\n");
}
}