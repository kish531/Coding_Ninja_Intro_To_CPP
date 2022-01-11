bool checkPalindrome(char str[]) {
    int n=strlen(str);
    int i=0, j=n-1;
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        i++, j--;
    }return true;
}
