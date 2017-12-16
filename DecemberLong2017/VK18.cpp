#include <bits/stdc++.h>
using namespace std;
long long int a[1000001];
void diff(){
	long long int res,i,index, sumo=0,sume=0;
	for( i=2;i<=1000000;i++){
             sume=0,sumo=0;		
	 index = i;	
	  while(index>0){
	      res = index%10;
	      if(res%2==0)
	      sume+=res;
	      else
	      sumo+=res;
	    index/=10;	
	  }	
	 res = abs(sume-sumo);
	 a[i] = res;
	 //cout<<res<<"\n";	
	}
	
 
}
 
int main() {
	// your code goes here
	diff();
	long long int t;
	cin>>t;
	//cout<<a[102];
	while(t--){
		long long int n,b,room,sum=0;
		cin>>n;
		long long int dp[n+1][n+1];
		for(int i =1;i<=n;i++)
		 for(int j=1;j<=n;j++){
		 	room = (i+j);
		 	b = a[room];
		 	sum+=b;
		 	
		 }
		cout<<sum<<"\n";
	//	cout<<a[2]<<"\n";
		
		
		
	}
	return 0;
} 
