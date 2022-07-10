/*Chef is trying to solve a problem having T test cases, where, for each test case he is given a single integer N.

Chef has an algorithm which takes exactly N2 iterations for a test case with value N.

The constraints of the problem are as follows:

1≤T≤maxT
1≤N≤maxN
Sum of N over all test cases does not exceed sumN.
Given the values maxT,maxN, and sumN, determine the maximum number of iterations Chef's algorithm can take for any valid input file satisfying all the constraints.*/

#include<iostream>
using namespace std;

int main(){
	int t1;
	cin>>t1;
	while(t1--){
		int t,n,s;
		cin>>t>>n>>s;
		int k= s/n;
		int r= s%n;
		if(t<=k){
			cout<<n*n*t<<endl;
		}
		else{
			cout<<n*n*k+r*r<<endl;
		}
	}
	return 0;
}
