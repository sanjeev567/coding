//<-------virtual Base class ------------->
// this is made to solve ambiguous behaiviour while inheriting

//let's say we have to shortlisted some students on the
// on the basis of their written as well as physically test.
#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    void set_roll(int a)
    {
        roll_no = a;
    }
    void print_roll(){
        cout<<"your roll no is: "<<roll_no<<endl;
    }
};
class written : virtual public student
{
protected:
    int english, maths, raga, reasoning;

public:
    void setmarks(float m1, float m2, float m3, float m4)
    {
        english = m1;
        maths = m2;
        raga = m3;
        reasoning = m4;
    }
    void print_marks(){
        cout<<"your marks in english: "<<english<<endl
        <<"your marks in maths: "<<maths<<endl
        <<"your marks in raga: "<<raga<<endl
        <<"your marks in reasoning: "<<reasoning<<endl;
    }
    // int written_score = english + maths + raga + reasoning;

    // void writen_score()
    // {
    //     cout << "your score in written is: " << written_score << endl;
    // }
};
class PT : virtual public student
{
public:
    int score;
    void set_score(int a)
    {
        score = a;
    }
    void print_score(){
        cout<<"your PT score is: "<<score<<endl;
    }
    // void PT_score()
    // {
    //     cout << "your score in PT is: " << score << endl;
    // }
    // int PT_scores = score;
};
class result : public written, public PT
{
public:
    void final_score()
    {
        cout << "your final score is: " << english+maths+raga+reasoning+score<<endl;
        print_roll();
        print_marks();
        print_score();
    }
};

int main()
{
    result sanjeev;
    sanjeev.set_roll(24);
    sanjeev.setmarks(30,3,2,5);
    sanjeev.set_score(50);
    sanjeev.final_score();

    return 0;
}