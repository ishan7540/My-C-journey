// reverse a string
#include <stdio.h>

int main()
{
    char str[20 ];    
    printf("Enter your string:");
    fgets(str,20,stdin);
    printf("reverse of a string is:\b");
    for(int i = 19;i>=0;i--){
        printf("%c",str[i]);
    }
    
    return 0;
}
