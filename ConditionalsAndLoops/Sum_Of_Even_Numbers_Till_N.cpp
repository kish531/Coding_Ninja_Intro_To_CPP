Given a number N, print sum of all even numbers from 1 to N.
 
Input Format: Integer N
Output Format: Required Sum 

Sample Input 1: 6
Sample Output 1: 12
  
/**********SOLUTION**********/
  
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0, sum=0;
    while(num<=n){
        if(num%2==0){
            sum+=num;
        }num+=2;
    }
    cout<<sum;
}
