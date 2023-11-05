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
    printF("%d", "Note: Lakksh(gr8) is trying GIT")
    printf("%d",nCr);
 }
