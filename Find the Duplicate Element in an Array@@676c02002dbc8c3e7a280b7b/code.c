// Your code here...
#include<stdio.h>
int duplicate_element(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
        else{
            return -1;
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = duplicate_element(arr, n);
    
    if (duplicate != -1) {
        printf("%d\n", duplicate);
    } else {
        printf("-1\n");
    }
    return 0;
}