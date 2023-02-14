//                      <---------------Map in c++ -------------->
#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){

    map<string, int> stu_marks;
    stu_marks ["sanjeev"]  = 98;
    stu_marks ["rohan"]  = 91;
    stu_marks ["rohit"]  = 2;
    stu_marks ["rajan"]  = 8;
    stu_marks.insert({{"Kozume", 169}, {"Kuroo", 187}});

    map<string, int> :: iterator iter;

    for (iter = stu_marks.begin(); iter != stu_marks.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";   //remember this wil output as alphabetical order.
    }
    cout<<"The size of the map is: "<<stu_marks.size()<<endl;
    cout<<"The max_size of the map is: "<<stu_marks.max_size()<<endl;
    cout<<"The empty's return is: "<<stu_marks.empty()<<endl;
    
    return 0;
}