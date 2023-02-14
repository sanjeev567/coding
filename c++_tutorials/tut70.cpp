//          <-----------vector in c++ -------------------->

#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";

    }
    cout<<endl;
    
}

int main(){
    //way to create a vector
    vector<int> vec1;  //zero length integer vector
    int element , size=4;
    // cout<<"Enter the size of the vector to store in this vector: "<<endl;
    // cin>>size;
    // for (int i =0; i<size; i++){
    //     cout<<"Enter a element to add in this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);

    // }
    // vec1.pop_back();
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,55);
    // vec1.insert(iter+1,55);
    // vec1.insert(iter,5,55);  //this will insert 55 five times at the beginning.
    // display(vec1);

    vector<char> vec2(4);  //4 -element charactor vector  
    // vec2.push_back('4'); 
    // display(vec2);
    vector<char> vec3(vec2);  // vec3 is made of vec2
    // display(vec3);
    vector <int> vec4(6,3);   //6-element vectors of 3s       -->   this will display 3 six times.
    display(vec4);
    cout<<vec4.size();  //this will return size of vec4

    return 0;
}