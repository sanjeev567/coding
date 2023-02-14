// <----------List in stl c++ ------------------>
// below program working function in list
#include<list>
#include<iterator>
#include<iostream>
using namespace std;

void show_list(list<int> g1){
    list<int> ::iterator it;  //if we use auto then we don't require of this line 
    for ( it=g1.begin(); it !=g1.end(); ++it)
        cout<<*it<<" ";
}

int main(){
    list<int> lst1, lst2;
    for(int i=0; i<10; i++){
        lst1.push_back(i);
        lst2.push_front(i);

    }

    cout<<"\n lst1 content is: ";
    show_list(lst1);
    cout<<"\n lst2 content is: ";
    show_list(lst2);

    cout<<"\n lst1.front: "<<lst1.front()<<endl;
    cout<<"\n lst2.front: "<<lst2.back()<<endl;


    cout<<"\n lst1.popback: ";
    lst1.pop_back();
    show_list(lst1);
    cout<<"\n lst2.popfront: ";
    lst2.pop_front();
    show_list(lst2);

    cout<<"lst1.reverse: ";
    lst1.reverse();
    show_list(lst1);

    cout<<"\n sort lst1: ";
    lst2.sort();
    show_list(lst2);  

    
    return 0;
}