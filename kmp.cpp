#include <iostream>
using namespace std;
int const maxn=1000009;
int n,p[maxn];
string s,s2;
void kmp()
{
	int pom=0;
	for(int i=2;i<n;i++)
	{
		pom=p[i-1];
		while(s[pom+1]!=s[i] && pom!=0)
			pom=p[pom];
		if(s[pom+1]==s[i])
			pom++;
		p[i]=pom;
	}
}
int main()
{
	cin>>s>>s2;
	
	s='0'+s+'#'+s2;
	n=s.size();
	kmp();
	for(int i=0;i<n;i++)
		cout<<p[i]<<" ";
	
}
