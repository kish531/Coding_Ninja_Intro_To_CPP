void bubbleSort(int *input, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(input[j]>input[j+1]){
                //swap 
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
}
