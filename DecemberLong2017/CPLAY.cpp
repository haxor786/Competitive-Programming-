#include <iostream>
using namespace std;
 
int main() {
	// your code goes 
	string s;
	//int t = 3;
	while(cin>>s){
		//cin>>s;
		long long int a=0,b=0,i=0,la=3,lb=3,l=0,flag=1;
		for( i=0;i<10;i++){
		  if(i%2==0){
		  l++;
		  a=a+(s[i]-'0');
		  }
		  if(i%2!=0){
		  b=b+(s[i]-'0');
		  l++;
		  }
		  if(i>=3  && i%2==0)
		  {
		    if(a>b && (a-b)>la)
		    {
		     flag=0;
		     cout<<"TEAM-A"<<" "<<l<<"\n";
		     break;
		    }
		    if(b>a && (b-a)>lb){
		    	flag=0;
		    	cout<<"TEAM-B"<<" "<<l<<"\n";
		    	break;
		    }
		    else
		    la--;
		    
		  }
		  if(i>=3 && i%2!=0){
		    	 if(a>b && (a-b)>la)
		    {
		     flag=0;
		     cout<<"TEAM-A"<<" "<<l<<"\n";
		     break;
		    }
		    if(b>a && (b-a)>lb){
		    	flag=0;
		    	cout<<"TEAM-B"<<" "<<l<<"\n";
		    	break;
		    }
		    else
		    lb--;
		  }
		}
	    while((l+1)<20 && flag){
	    	a=a+(s[l]-'0');
	    	b=b+(s[l+1]-'0');
	    	l+=2;
	    	if(a>b){
	    	cout<<"TEAM-A"<<" "<<l<<"\n";
	    	flag = 0;
	    	break;
	    	}
	    	else if(b>a){
	    	 cout<<"TEAM-B"<<" "<<l<<"\n";
	    	 flag=0;
	    	 break;
	    	}
	    }
	    if(a==b && flag)
	    cout<<"TIE"<<"\n";
	    //cout<<a<<b<<"\n";
		
	}
	return 0;
}
 
