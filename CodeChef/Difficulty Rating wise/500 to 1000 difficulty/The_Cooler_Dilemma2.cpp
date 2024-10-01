#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>=y)    cout<<0<<endl;
	    else{
	        int rem= y%x;
	        if(rem==0) rem = -1;
	        else rem = 0;
	        cout<<(y/x)+rem<<endl;
	    }
	}

}
