#include <iostream>
#include <cstring>
using namespace std;

class google
{
protected:
    string title;
    float rating;

public:
    google(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){};
};
class video_tutorial : public google
{
private:
    int duration;

public:
    video_tutorial(string s, float r, float t) : google(s, r)
    {
        duration = t;
    }
    void display()
    {
        cout << "amazing c++ video_tutorials with title: " << title << " rating: "
             << rating << " out of 5 stars of "<<duration<<" minutes"<<endl;
    }
};
class text_tutorial : public google
{
private:
    int words;

public:
    text_tutorial(string s, float r, int w) : google(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "amazing c++ text_tutorials with title: " << title << " rating: "
             << rating << " out of 5 stars. with : "<<words<<" words"<<endl;
    }
};

int main()
{
    string title;
    float rating,video_len;
    int words;
    //for video tutorials
    title = "coding_school video tutorials: ";
    rating =4.5;
    video_len = 13.2;
    video_tutorial sanjeev_video(title, rating, video_len);

    // text tutorials
    title = "coding_school text tutorials: ";
    rating =4.1;
    words = 50;
    text_tutorial sanjeev_text(title, rating, words);

    google* tut[2];
    tut[0]= &sanjeev_video;
    tut[1]= &sanjeev_text;
    tut[0]->display();
    tut[1]->display();

    

    return 0;
}