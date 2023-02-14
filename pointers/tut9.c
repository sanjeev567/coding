//<---------------character arrays and string---------->

#include<stdio.h>
#include<string.h>

int main(){
    // char c[4];
    // c[0]='j';
    // c[1]='o';
    // c[2]='h';
    // c[3]='n';
    // printf("%s\n",c);  //this wil print john!@#$
//     char c[5];
//     c[0]='j';
//     c[1]='o';
//     c[2]='h';
//     c[3]='n';
//     c[4]='\0';
//     printf("%s\n",c);  

char c[]="sanjeet";
char d[8]={'s','a','n','j','e','e','v','\0'};
int leg = strlen(c);
int leg2 = strlen(d);
printf("name is: %s\n ",c);
printf("length of %s is: %d\n",c,leg);
printf("size of c is: %d\n",sizeof(c));


printf("name is: %s\n ",d);
printf("length of %s is: %d\n",d,leg2);
printf("size of d is: %d\n",sizeof(d));

}