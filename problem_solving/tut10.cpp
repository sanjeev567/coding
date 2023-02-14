/* Q. katapa army chief even no of weapons= lucky , odd=unlucky and if no of lucky > no of unlucky 
print ready for battle otherwise print not ready.
*/
#include<iostream>
using namespace std;

int main(){
    int N, count_R=0,count_N=0;
    cin>>N;
    int arr[N];
    for (int i=0; i<N; i++){
        cin>>arr[i];
         if (arr[i]%2==0){
            count_R++;
        }
        else{
            count_N++;
        }
    }
   
    if (count_R>count_N)
        cout<<"READY FOR BATTLE "<<endl;
    else
        cout<< "NOT READY "<<endl;
    
    return 0;
}