/*There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 4 candies are available.

Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	int x,n;
	cin>>n>>x;
	float a=float(n);
	float b=float(x);
	if(x>n){
		cout<<"0"<<endl;
	}
	else{
		cout<<ceil((a-b)/4)<<endl;
	}
	}
	return 0;
}
