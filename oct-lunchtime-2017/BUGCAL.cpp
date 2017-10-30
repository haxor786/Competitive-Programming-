#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		
		long long int a;
		long long int b;
		int l,m,c,d=0;
		cin>>a;
		cin>>b;
		if(b>a)
		{
		 int temp = b;
		 b = a;
		 a = temp;
		}
	            string s,str;
	            while(a!=0 && b!=0){
	            	
	              l =a%10;
	              m= b%10;
	              c = l+m;
	              if(c>=10)
	              c=c-10;
	              
	              str = to_string(c);
	              s = s +str;
	              a = a/10;
	              b = b/10;
	            }
	         //   cout<<s<<"\n";
	            if(a!=0)
	            {
	              while(a!=0)
	              {
	                 l = a%10;
	                 str = to_string(l);
	                 s= s+str;
	                 a=a/10;
	              }
	            }
	           reverse(s.begin(),s.end());
	           int i =0;
	          while(s[i]=='0'){
	          	d++;
	          	i++;
	          }
	          s.erase(0,d);
	          if(s.length()==0)
	          cout<<0<<"\n";
	          else
	          cout<<s<<"\n";
		
	
		
	}
	return 0;
} 
