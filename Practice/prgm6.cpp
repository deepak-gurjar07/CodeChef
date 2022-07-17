/*Alice wrote an exam containing NN true or false questions (i.e. questions whose answer is either true or false). Each question is worth 11 mark and there is no negative marking in the examination. Alice scored KK marks out of NN.

Bob wrote the same exam but he marked each and every question as the opposite of what Alice did, i.e, for whichever questions Alice marked true, Bob marked false and for whichever questions Alice marked false, Bob marked true.

Determine the score of Bob.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    cout<<n-k<<endl;
	}
	
	return 0;
}
