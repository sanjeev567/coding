#include<iostream>
#include<algorithm>
using namespace std;




int main(){
    int t,i=0,j=0,k=0;
    cin>>t;
    int A[t];
    int B1[t], B2[t];
    while(t--){
        int x1,x2;
        cin>>x1>>x2;
        A[i]=x1-x2;
        if(x1>x2){
        B1[j]=x1;
        j++;
        }
        else{
        B2[j]=x2;
        k++;
        }
        i++; 

    }
    int n=sizeof(A)/sizeof(A[0]);
    int n1=sizeof(B1)/sizeof(B2[0]);
    int n=sizeof(A)/sizeof(A[0]);
    cout<<*max_element(B,B+n)<<" "<<*max_element(A,A+n);
    
    return 0;
}