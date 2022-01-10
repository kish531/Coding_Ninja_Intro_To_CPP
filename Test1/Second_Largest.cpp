Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :
Line 1 : Total number of elements (n)
Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1: 3

Sample Input 2 :
 2
 4 4
Sample Output 2: -2147483648

/**********SOLUTION**********/

#include<iostream>
using namespace std;
#include <climits>

int main(){
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    int max=prev;
    int secondMax=INT_MIN;
    for(int i=1;i<n;i++){
        int curr;
        cin>>curr;
        if(curr>max){
    		secondMax=max;
            max=curr;
        }else if (curr>secondMax && curr!=max){
            secondMax=curr;
        }
    }
    cout<<secondMax;
}
