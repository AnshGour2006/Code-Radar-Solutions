int isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
 }
            return 1;
}
void printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            found=1;
            printf("%d ",i);
        }

    }
    if(!found){
        printf("No prime numbers");
    }
}