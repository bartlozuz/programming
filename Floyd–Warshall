#include <iostream>
using namespace std;
int const maxn=100,maxd=1000000000;
int n,m,a,b,c,tab[maxn][maxn];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			tab[i][j]=maxd;
		tab[i][i]=0;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b>>c;
		tab[a][b]=min(tab[a][b],c);
	}
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				tab[i][j]=min(tab[i][j],tab[i][k]+tab[k][j]);
	
}
