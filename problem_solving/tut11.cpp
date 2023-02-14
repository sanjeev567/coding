#include <iostream>
using namespace std;

int main()
{
    int H, N, x, res = 0;
    cin >> N >> H >> x;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (H <= (x + arr[i]))
            res = 1;
    }
    if (res == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}