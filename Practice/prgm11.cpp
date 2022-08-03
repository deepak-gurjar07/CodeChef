/*There are 33 hidden numbers A, B, CA,B,C.

You somehow found out the values of \min(A, B), \min(B, C),min(A,B),min(B,C), and \min(C, A)min(C,A).

Determine whether there exists any tuple (A, B, C)(A,B,C) that satisfies the given values of \min(A, B), \min(B, C), \min(C, A)min(A,B),min(B,C),min(C,A).*/


#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int min1= min(a,b);
	    int min2= min(b,c);
	    int min3= min(c,a);
	    if(min1==min2 && min2==min3){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
