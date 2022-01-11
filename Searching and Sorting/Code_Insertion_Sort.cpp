void insertionSort(int *input, int size){
    for(int i=1;i<size;i++){
        int j;
        int key=input[i];
        for(j=i-1;j>=0;j--){
            if(key<input[j]){
                input[j+1]=input[j];
            }else{
                break;
            }
        }input[j+1]=key;
    }
}
