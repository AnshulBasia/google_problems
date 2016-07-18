#include <iostream>
using namespace std;
#include <map>
#include <bits/stdc++.h>

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	long long k;
	long long arr[1003][4];
	int p=1;
	while(t--)
	{
	    cin>>n>>k;
	    long ans=0;
	    map <long long, long long> x;
	    for(int i=0;i<4;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>arr[j][i];
	        }
	    }
	   
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            long long temp=(arr[i][0]^arr[j][1]);
	            long y=0;
	            if(x.find(temp)!=x.end())
	            {
	                y+=x[temp];
	            }
	            y++;
	            x[temp]=y;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            long long temp=(arr[i][2]^arr[j][3]^k);
	            if(x.find(temp)!=x.end())
	            {ans+=x[temp];}
	        }
	    }
	    
	    cout<<"Case #"<<p<<": "<<ans<<endl;
	    p++;
	    
	}
	return 0;
}
