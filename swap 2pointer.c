#include <stdio.h>
void swap(int* a, int* b){
     int temp = *a;
     *a = *b;
     *b = temp;
    
    
    
}



int main()
{   
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    int b;
    printf("Enter value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a =%d and value of b = %d",a,b);

    return 0;
}
