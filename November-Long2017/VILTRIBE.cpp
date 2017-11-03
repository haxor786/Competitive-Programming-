#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ind;
		for(int i=0;i<s.length();i++){
			if(s[i]=='A' || s[i]=='B')
			{
				ind=i;
				break;
			}
		}
	    int a=0,b=0,count=0;
	    char x=s[ind];
	    for(int i=ind;i<s.length();i++){
	    	
	      if(s[i]=='.')
	      count++;
	      else if(s[i]=='A'){
	         if(x==s[i]){
	       	a=a+count+1;
	           }
	        else {
	       	a+=1;
	       	x=s[i];
	            }
	      count=0;	
	    }
	    else if(s[i]=='B'){
	       if(x==s[i]){
	        b=b+count+1;	
	       }	
	       else {
	       	b+=1;
	       	x=s[i];
	       }	
	     count=0;	
	    }
	
	    	
      }
		
		
	cout<<a<<" "<<b<<"\n";    		
  }
return 0;
} 
