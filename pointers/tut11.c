#include<stdio.h>

// void print(char* c){
//     int i=0;
//     while (c[i]!='\0')
//     {
//        printf("%c",c[i]);
//        i++;
//     }
//     printf("\n");
// }
void print(char* c){
    //c[0]='a';   //like here we change the first index value h to a
    
    while (*c!='\0')        //*(c+i) <---> c[i]; where i untill \0.
    {
       printf("%c",*c);
       *c++;
    }
    printf("\n");
}
int main(){
    char c[]="hello";  //string get stored in the space for array with that we can modify it 
    // char *c="hello"; //string get stored as a compile time constant means using this we can't modify it 
    // c[0]='a'  --> this will through an error bcoz here it is not part of an array
    print(c);
    
}