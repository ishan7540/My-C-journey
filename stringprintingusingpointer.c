
// printing sting using pointers
#include <stdio.h>

int main()
{
    char arr[20];
    printf("Enter the string you want to print:");
    fgets(arr,20,stdin);
    char* ptr = arr;
    int i = 0;
    while(arr[i]!='\0'){
        
    printf("%c",*ptr);    
        i++;
        ptr++;
    }    
    
    return 0;
}
