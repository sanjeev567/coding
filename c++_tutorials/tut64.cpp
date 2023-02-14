//                                      <---------------template in c++---------------->
/*
why we use template ?
to avoid repetitions i.e to follow dry principle
to write generic programming.
template is basically a kind of blue-print you can say through which we made one class and use it as we want...

*/

#include <iostream>
using namespace std;

template<class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[4];
    }
    T dot_product(vector &v)
    {
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <int> v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 1;
    v1.arr[2] = 2;
    vector <int> v2(3);
    v2.arr[0] = 5;
    v2.arr[1] = 3;
    v2.arr[2] = 6;

    cout<<v1.dot_product(v2)<<endl;

    vector <float> v3(3);
    v3.arr[0] = 3.3;
    v3.arr[1] = 0.1;
    v3.arr[2] = 1.5;
    vector <float> v4(3);
    v4.arr[0] = 1.3;
    v4.arr[1] = 2.1;
    v4.arr[2] = 3.5;
    cout<<v3.dot_product(v4)<<endl;
   
    return 0;
}