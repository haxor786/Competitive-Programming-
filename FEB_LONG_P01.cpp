#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int count=0;
	if(s.length()<4)
	cout<<"normal"<<"\n";
	else {
	for(long long int i=0;i<=s.length()-4;i++){
	if(s[i]=='c' && s[i+1]=='h' && s[i+2]=='e' && s[i+3]=='f')
	count+=1;
	else if(s[i]=='c' && s[i+1]=='e' && s[i+2]=='h' && s[i+3]=='f')
	count+=1;
	else if(s[i]=='c' && s[i+1]=='f' && s[i+2]=='h' && s[i+3]=='e')
	count+=1;
    else if(s[i]=='c' && s[i+1]=='e' && s[i+2]=='f' && s[i+3]=='h')
	count+=1;
    else if(s[i]=='c' && s[i+1]=='h' && s[i+2]=='f' && s[i+3]=='e')
	count+=1;
    else if(s[i]=='c' && s[i+1]=='f' && s[i+2]=='e' && s[i+3]=='h')
	count+=1;
	else if(s[i]=='e' && s[i+1]=='c' && s[i+2]=='h' && s[i+3]=='f')
	count+=1;
	else if(s[i]=='e' && s[i+1]=='c' && s[i+2]=='f' && s[i+3]=='h')
	count+=1;
	else if(s[i]=='e' && s[i+1]=='f' && s[i+2]=='h' && s[i+3]=='c')
	count+=1;
	else if(s[i]=='e' && s[i+1]=='f' && s[i+2]=='c' && s[i+3]=='h')
	count+=1;
 else if(s[i]=='e' && s[i+1]=='h' && s[i+2]=='c' && s[i+3]=='f')
	count+=1;
else if(s[i]=='e' && s[i+1]=='h' && s[i+2]=='f' && s[i+3]=='c')
	count+=1;
else if(s[i]=='f' && s[i+1]=='e' && s[i+2]=='c' && s[i+3]=='h')
	count+=1;
	else if(s[i]=='f' && s[i+1]=='e' && s[i+2]=='h' && s[i+3]=='c')
	count+=1;
else if(s[i]=='f' && s[i+1]=='h' && s[i+2]=='e' && s[i+3]=='c')
	count+=1;
else if(s[i]=='f' && s[i+1]=='h' && s[i+2]=='c' && s[i+3]=='e')
	count+=1;
    else if(s[i]=='f' && s[i+1]=='c' && s[i+2]=='e' && s[i+3]=='h')
	count+=1;
    else if(s[i]=='f' && s[i+1]=='c' && s[i+2]=='h' && s[i+3]=='e')
	count+=1;
    else if(s[i]=='h' && s[i+1]=='e' && s[i+2]=='f' && s[i+3]=='c')
	count+=1;
else if(s[i]=='h' && s[i+1]=='e' && s[i+2]=='c' && s[i+3]=='f')
	count+=1;
else if(s[i]=='h' && s[i+1]=='f' && s[i+2]=='e' && s[i+3]=='c')
	count+=1;
else if(s[i]=='h' && s[i+1]=='f' && s[i+2]=='c' && s[i+3]=='e')
	count+=1;
else if(s[i]=='h' && s[i+1]=='c' && s[i+2]=='e' && s[i+3]=='f')
	count+=1;
else if(s[i]=='h' && s[i+1]=='c' && s[i+2]=='f' && s[i+3]=='e')
	count+=1;
	else
	continue;	
	}
	 if(count==0)
	 cout<<"normal"<<"\n";
	 else
	 cout<<"lovely"<<" "<<count<<"\n";
		
	}
   }	
	return 0;
}  
