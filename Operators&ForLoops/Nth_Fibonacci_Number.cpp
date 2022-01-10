Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

Input Format : The first line of each test case contains a real number ‘N’.
Output Format : For each test case, return its equivalent Fibonacci number.
Constraints: 1 <= N <= 10000 
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.
Time Limit: 1 second

Sample Input 1: 6
Sample Output 1: 8

/**********SOLUTION**********/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c;
    if(n==1 || n==2){
        c=1;
    }
    int a=1;
    int b=1;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
}
