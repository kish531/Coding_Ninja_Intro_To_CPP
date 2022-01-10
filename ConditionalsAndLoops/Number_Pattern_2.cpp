Print the following pattern
Pattern for N = 4
...1
..23
.345
4567
The dots represent spaces.

Input Format: N (Total no. of rows)
Output Format: Pattern in N lines

Sample Input: 5
Sample Output: 
....1
...23
..345
.4567
56789
The dots represent spaces.

/**********SOLUTION**********/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }int val=i;
        int j=1;
        while(j<=i){
            cout<<val;
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

