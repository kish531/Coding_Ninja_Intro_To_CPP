int binarySearch(int *input, int n, int val){
    int start=0;
    int end=n-1;
    int mid=0;
    while(start<=end){
        mid=(start+end)/2;
        if(input[mid]==val){
            return mid;
        }else if (val>input[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }return -1;
}
