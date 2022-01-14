Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.

Input Format :String S
Output Format :Minimum length word
Constraints : 1 <= Length of String S <= 10^5

Sample Input 1 :this is test string
Sample Output 1 :is

Sample Input 2 : abc de ghihjk a uvw h j
Sample Output 2 : a

/**********SOLUTION**********/

#include<climits>
#include<cstring>
void minLengthWord(char input[], char output[]){
    int n=strlen(input);
    int minLen=INT_MAX, minIndex=0;
	  int space=0; 
    int alphabet=0;
    while(space<=n){
        if(space<n && input[space]!=' '){
          	space++;  
        }else{
            int len=space-alphabet;
            if(len<minLen){
                minLen=len;
                minIndex=alphabet;
            }space++;
            alphabet=space;
        }
    }
    for(int i=0;i<minLen;i++){
        output[i]=input[minIndex];
        minIndex++;
    }
}
