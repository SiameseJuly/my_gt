#include <stdio.h>
#include <string.h>


char *message = "Hello,world!";

void vulnerable_function()
{
    char *tmp;
    tmp = message ;
 
    char buf[128];
    printf("Enter some text:\n");    
    scanf("%s", &buf);    
    
    tmp = tmp + 1;
//    printf("You entered: %s\n", buf);  
   
//    printf("tmp is %s",tmp);
//    printf("You have passed successfully!");
}




int main(void)
{
    printf("begin test!");
    vulnerable_function();  
    printf("test end!");
    return 0;
}
