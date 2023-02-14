#include<stdio.h>

void print(char* c){     //void print (char c[]);---> same as that of written
    int i=0;
    while (c[i]!='\0')
    {
       printf("%c",c[i]);
       i++;
    }
    printf("\n");
}
// void print(char* c){
    
//     while (*c!='\0')        //*(c+i) <---> c[i]; where i untill \0.
//     {
//        printf("%c",*c);
//        *c++;
//     }
//     printf("\n");
// }
int main(){
    char c[]="hello";
    print(c);
    
}