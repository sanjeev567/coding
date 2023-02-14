#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){

    map<int, int> student;
    student[1] =100;
    student[2]= 200;
    student[3]= 300;
    student[4]= 400;
    student[5]= 500;
    map<int, int> :: iterator it;

    for (it=student.begin(); it!=student.end(); it++){

        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    map<char, int> stu1;
    string x = "a";
    for (char c : x){
        stu1[c]++;
    }
    cout<<stu1['a']<<" "<<stu1['z']<<endl;
    return 0;
}