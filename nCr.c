#include <stdio.h>
int factorial(int x){
    int fact =1;
    for( int i=1;i<=x;i++){
        fact = fact*i;
    }
    
    return fact;
}
int main()
 {
    int n,r;
    printf("Welcome to nCr calculator!!!\n");
    printf("Enter the value of n and r:");
    scanf("%d %d", &n,&r);
    
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int nCr = nfact/(rfact*nrfact);
    int a;
    printf("%d", "Now input number you would like to check even or odd")
    scanf("&d",a);

    if(a%2==0){
        cout<<"Number is even!";

    }else{
        cout<<"Number is odd!";
    }
    printf("%d",nCr);
 }
