Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5
. . *
. * * *
* * * * *
. * * *
. . *
The dots represent spaces.

Input format : N (Total no. of rows and can only be odd)
Output format : Pattern in N lines
Constraints : 1 <= N <= 49

Sample Input 1: 5
Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2: 3
Sample Output 2:
  *
 ***
  *

/**********SOLUTION**********/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    int p=n/2+1;
    while(i<=p){
        int space=1;
        while(space<=n/2 - i + 1){
            cout<<" ";
            space++;
        }
        int star=1;
        while(star<=2*i-1){
            cout<<"*";
            star++;
        }
        cout<<endl;
        i++;
    }
    int x = p+1;
    while(x>p && x<=n){
        int space=1;
        while(space<=x-p){
            cout<<" ";
            space++;
        }
        int star=1;
        while(star<=2*(n-x+1) -1 ){
            cout<<"*";
            star++;
        }       
        cout<<endl;
        x++;
    }   
}
