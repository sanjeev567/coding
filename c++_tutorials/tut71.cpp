//          <--------------List in C++ ------------------>

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){   //since list is like array so it takes reference as arguments
    list<int> :: iterator iter;
    for (iter=lst.begin(); iter!=lst.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> lst1;         //list of 0 length

    lst1.push_back(1); 
    lst1.push_back(2); 
    lst1.push_back(3); 
    lst1.push_back(4); 
    lst1.push_back(5); 
    lst1.push_back(7); 
    // lst1.pop_back();
    // lst1.pop_front();    //this will remove first element 
    // lst1.remove(5);   //this will remove 5, we use this to remove from the middle;
    lst1.sort();        //sorting in ascending order
    lst1.reverse();   //reversing the list
    display(lst1);
    
    list<int> lst2(4);
    list<int> ::iterator it=lst2.begin();
    *it = 45;
    //  it++;
    *(it) = 67;
     it++;
    *it = 789;
     it++;
    *it = 90;
     it++;
    *it = 5;
     it++;
    display(lst2);

    lst1.merge(lst2);
    lst1.sort();      //sorting lst1 after merging with lst2;
    cout<<"after merging: ";
    display(lst1);



    return 0;
}