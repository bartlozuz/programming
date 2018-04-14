#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
int reps = 10000;
char buf[40];

for(int i = 0; i < reps; i++)
  {
  cout<<i<<endl;
  
  sprintf(buf, "./gen %d > in", i+1);
  system(buf);
  system("./podciag2 < in > wout");
  system("./podciag < in > bout");
  if(system("diff wout bout"))
    {
    cout<<"ZNALAZŁEM BŁOND !!! "<<endl;
    return 0;
    }
  }
}






