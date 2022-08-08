/*Alice buys a toy with a selling price of 100100 rupees. There is a discount of xx percent on the toy. Find the amount Alice needs to pay for it.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    cout<<(100-x)<<endl;
	}
	return 0;
}
