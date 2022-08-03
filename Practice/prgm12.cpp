/*Chef is making a dish that consists of exactly two ingredients. He has four ingredients A, B, CA,B,C and DD with tastiness a, b, c,a,b,c, and dd respectively. He can use either AA or BB as the first ingredient and either CC or DD as the second ingredient.

The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int max1= max(a,b);
	    int max2= max(c,d);
	    cout<<(max1+max2)<<endl;
	}
	return 0;
}

