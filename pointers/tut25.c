#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void A(){
    printf("Hello");
}
void B(void (*ptr)()){   //here B is fn which takes void pointer fn as an argument.
    //void fn pointer that return void and no takes any argument as well
    ptr();  // Callback fn that "ptr" points to

}
int main(){
    // void (*p)() = A;
    // B(p);

    B(A); //above both line are same as of this line.  A--> is call-back fn
    //when a fn passing through a reference is called call-back fn.
}