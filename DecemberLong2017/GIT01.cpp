#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
		long long int n,m,sum1=0,sum2=0;
		cin>>n>>m;
		char c ,flag1,flag2,oflag1,eflag1,oflag2,eflag2;
		char dp[n][m];
		for(int i=0;i<n;i++)
		 for(int j=0;j<m;j++)
		  cin>>dp[i][j];
		flag1 = dp[0][0];
		if(flag1 == 'R')
		{
			oflag1='G';
			eflag1='R';
			flag2 = 'G';
			oflag2 = 'R';
			eflag2 = 'G';
		}
		else {
			oflag1 = 'R';
			eflag1 = 'G';
			flag2 = 'R';
			oflag2 = 'G';
			eflag2 = 'R';
		}
		for(int i=0;i<n;i++){
			if(dp[i][0]!=flag1){
				if(flag1 == 'R')
				sum1+=3;
				else 
				sum1+=5;
			}
			for(int j=1;j<m;j++){
				if(j%2!=0 && dp[i][j]!=oflag1){
					if(oflag1 == 'R')
					sum1+=3;
					else
					sum1+=5;
				}
					if(j%2==0 && dp[i][j]!=eflag1){
					if(eflag1 == 'R')
					sum1+=3;
					else
					sum1+=5;
				}
				
			}
			if(flag1 == 'R'){
					flag1 = 'G';
					oflag1 = 'R';
					eflag1 = 'G';
				}
				else if(flag1 == 'G')
				{
					flag1 = 'R';
					eflag1 = 'R';
					oflag1 = 'G';
				}
			
		}
			for(int i=0;i<n;i++){
			if(dp[i][0]!=flag2){
				if(flag2 == 'R')
				sum2+=3;
				else 
				sum2+=5;
			}
			for(int j=1;j<m;j++){
				if(j%2!=0 && dp[i][j]!=oflag2){
					if(oflag2 == 'R')
					sum2+=3;
					else
					sum2+=5;
				}
					if(j%2==0 && dp[i][j]!=eflag2){
					if(eflag2 == 'R')
					sum2+=3;
					else
					sum2+=5;
				}
				
			}
			  if(flag2 == 'R'){
					flag2 = 'G';
					oflag2 = 'R';
					eflag2 = 'G';
				}
				else if(flag2 == 'G')
				{
					flag2 = 'R';
					eflag2 = 'R';
					oflag2 = 'G';
				}
			
		}
		if(sum1<=sum2)
		cout<<sum1<<"\n";
		else
		cout<<sum2<<"\n";
		
		
		
		
	}
	return 0;
} 
