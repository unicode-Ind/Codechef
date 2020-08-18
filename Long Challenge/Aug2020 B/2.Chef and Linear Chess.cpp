//https://www.codechef.com/AUG20B/problems/LINCHESS

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

void read(vector<int>&v,int n);

void solve(){
	int n,pos;
	cin>>n>>pos;

	vector<int> in(n);
	read(in,n);

	int ans=-1;
	int quot=INT_MAX;

	for(int x:in){
		if(pos%x==0){
			int q=pos/x;
			if(quot > q){
				quot=q;
				ans=x;
			}
		}
	}

	cout<<ans;
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

void read(vector<int>&v,int n){
	//int inp;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
}
