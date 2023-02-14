// https:www.codechef.com/JUNE21C/problems/CHFHEIST
//this is the link of the problem of the codechef.
// basically probelem is of ap series in which last term doesn't the part of ap 
// so we have to found summation of all.

#include<bits/stdc++.h>
# define ll long long int

using namespace std;
  

int main()
{   
	int t; cin >> t;
    ll D, d, P, Q;
	while(t--){
        cin>>D>>d>>P>>Q;
		ll a=P;
		ll diff=Q;
		ll n= D/d;
		ll rem= D%d;
		ll ap_sum= d*(n*((2*a) +(n-1)*diff)/2);
		ll rem_sum = rem*(a + n*diff);

		ll total_sum = ap_sum +rem_sum;

		// ll ans =d*((D/d)*(2*P + ((D/d) -1)*Q)/2) + ((D%d)*(P + (D/d)*Q));  this is do same as total_sum only 
						// difference is here we put directly all the operand.

	    // cout << ans << endl;            
		cout<<total_sum<<endl;
	}
} 	