#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int num;
    char stringarray[16];
	cout<<"Enter the number which you want to get double: "<<endl;
	cin>>num;
    if (num>=0 && num<=10){

	cout<<"Double of your no is: "<<2*num<<endl;
    }
    else 
     cout<<"invalid input!!!"<<endl;
    cout<<"Enter the string which you want to print: "<<endl;
    cin>>stringarray;
    int lenght = strlen(stringarray);
    if (lenght>=0 && lenght<=15){

    cout<<"string that you entered is: "<<stringarray<<endl;
    }
    else
        cout<<"invaid input"<<endl;

    return 0;
}