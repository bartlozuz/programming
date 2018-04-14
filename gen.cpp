
#include <cstdio>
#include <random>
#include <vector>
#include <cstdlib> 
using namespace std;
int const maxn=10;
vector<int> v;
int main()
{
	int n,k;
	srand(time(NULL));
	n=rand()%maxn+1;
	printf("%d\n", n);
	for(int i=1;i<=n;i++)
		v.push_back(i);
	random_shuffle ( v.begin(), v.end() );
	for(int i=0;i<n;i++)
	{
		k=rand()%2;
		if(k==0)
		printf("0 ");
		else
			printf("%d ", v[i]);
		}
	
	
}



