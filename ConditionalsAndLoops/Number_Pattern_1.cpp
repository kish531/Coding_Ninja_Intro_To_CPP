Print the following pattern
Pattern for N = 4
1
23
345
4567

Input Format: N (Total no. of rows)
Output Format: Pattern in N lines

Sample Input 1: 3
Sample Output 1:
1
23
345
  
/**********SOLUTION**********/
  
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int val=i;
        int j=1;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
}
