//https://www.codechef.com/AUG20B/problems/SKMP  
/*
	some edge cases
	6
	zzzety
	ze
	acdeedaghfaee
	eeaghfa
	qwertyuioppppppoiuyt
	tyuui
	zaazyz
	azy
	jtewmpzqmscas
	pqssc
	zatgggg
	gt

	OUTPUT :

	tyzezz
	acddeeaghfaee
	eiooppppppqrttyuuiwy
	aazyzz
	aejmmpqssctwz
	aggggtz
*/

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

string solve(){
	string s,pat;
	cin>>s>>pat;
	string ans="";

	int freq[26]={};

	for(char c:s){
		freq[c-'a']++;
	}
	for(char c:pat){
		freq[c-'a']--;
	}

	bool remaining=true;
	int i;
	for (i = 0; i < 26 and (i+'a')<pat[0] ; ++i)
	{
		while(freq[i]--){
			ans+= char(i+'a');
		}
	}
	
	if(remaining and i<='z'-'a'){
    	string temp="";
    	while(freq[i]--)
    	    temp+=(i+'a');
    	
    	if(temp+pat<pat+temp)
    	    ans+=(temp+pat);
    	else
    	    ans+=(pat+temp);
    	    
    	 remaining=false;
    	i++;
	}
	
	for (; i < 26; ++i)
	{
		while(freq[i]--){
			ans+= char(i+'a');
		}
	}
	
	if(remaining){
			ans+=pat;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	//cout<<"changed\n";
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll t=1;
	cin>>t;

	while(t--)
	{	
		cout<<solve()<<endl;;

	}	
	return 0;	
}
