#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
int n,l;
vector <int> v;
cin >> n;
cin >> l;
int i,j;
int a,u,r;
for(i=0;i<n;i++)
{
	v.push_back(0);
}
for(j=0;j<l;j++)
{
	cin >> a;
	if(a==1)
	{
		cin >> u >> r;
		v[u-1]=v[u-1]+r;
	}
	else if(a==2)
	{
		int max,k,p;
		p=1;
		max=v[0];
		if(n>1)
		{	
			for(k=0;k<(n-1);k++)	
			{
				if(max<v[k+1]) { max=v[k+1]; p=k+2; }
			}
			if(max==0) {cout << "No data available." << "\n";}
			else { cout << p << "\n"; }
		}
	}
}
}

