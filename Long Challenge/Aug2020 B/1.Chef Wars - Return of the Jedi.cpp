//https://www.codechef.com/AUG20B/problems/CHEFWARS

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define fo(i,n) for(i=0;i<n;i++)
#define fok(i,k,n) for(i=k;i<n;i++)

//const double PI=acos(-1); 
#define vint vector<int>
#define vfloat vector<float>

#define pb push_back

const long long mod=1e9;

#define PI 3.14159 
#define vint vector<int>
#define vfloat vector<float>

void solve(){
	int h,p;
	cin>>h>>p;

	/*
	simulate
	while(h and p){
		h-=p;
		p/=2;
	}

	cout<< (h<=0);
	*/
	
	//or observation
	cout<< (h<=2*p);
}

int main(int argc, char const *argv[])
{
	//cout<<"changed\n";
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll t=1;
	cin>>t;

	while(t--)
	{	
		//cout<<solve()<<endl;
		solve();cout<<endl;

	}	
	return 0;	
}
