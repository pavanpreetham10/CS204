#include <iostream> 
#include <queue> 
#include<bits/stdc++.h>

using namespace std;

int n,m;

int main()
{
int i,j,a,b;
cin >>n>>m;
int v[n];

for(i=0;i<n;i++)
{
v[i]=0;
}

int e[n][n];
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		e[i][j]=0;
	}

}

for(i=0;i<m;i++)
{
cin >>a>>b;
e[a-1][b-1]=1;
e[b-1][a-1]=1;
}

for(i=0;i<n;i++)
{
if(v[i]==0)
{
v[i]=1;
queue <int> q; 
    q.push(i); 
 
    while (!q.empty()) 
    { 
        int u = q.front(); 
        q.pop(); 
    
        if (e[u][u] == 1) 
        {cout<<"NO"<<"\n";return 0;}  
  
	for(int x=0;x<n;x++)
	{
		if(e[u][x] && v[x]==0)
		{
			v[x]=(-1)*v[u];
			q.push(x);
		}
		else if(e[u][x] && v[x]==v[u])
		{
			cout << "NO"<<"\n";return 0;
		}
	}

    } 
}

}
cout<<"YES"<<"\n";

return 0;

}
