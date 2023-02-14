#include<iostream>
#include<string>
using namespace std;

class Binary{
private:
string s;
public:
    void read_binary();
    void ch_bin();
    void display();
};
void Binary::read_binary(){
    cout<<"Enter a binary number:"<<endl;
    cin>>s;
}
void Binary::ch_bin(){
    for (int i=0; i<s.length(); i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout<<"invalid binary format"<<endl;
            exit(0);
        }
    }
}
void Binary ::display(){
    cout<<"showing your binary number"<<endl;
    for (int i=0; i<s.length(); i++){
        cout<<s.at(i);

    }
    cout<<endl;
}

int main(){
    Binary b1;
    b1.read_binary();
    b1.ch_bin();
    b1.display();
    
    return 0;
}