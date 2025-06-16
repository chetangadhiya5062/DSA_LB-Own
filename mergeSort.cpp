#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = s + (e-s)/2;
    // length of left and right at each stage
    int lenL = mid - s + 1;
    int lenR = e - mid; // e - (mid+1) + 1

    //allocating heap memory of length 
    //lenL and lenR at each stage to left and right array.

    int *lArr = new int[lenL];
    int *rArr = new int[lenR]; 

    // for each stage starting index K for left 
    //for copy data to each stage.
    int k = s;

    //coping data from main arr to left array at each stage.

    for (int i = 0 ; i < lenL ; i++){
        lArr[i] = arr[k];
        k++;
    }

    //copying data from main arr to right array at each stage.
    k = mid+1;//start index for copy into right.
    for (int i = 0 ; i < lenR ; i++){
        rArr[i] = arr[k];
        k++;
    }

    //actual merge begins here.
    int indexL = 0;
    int indexR = 0;
    //mistake area.
    int indexMainArr = s;

    //if you not want to add below added two more cases then instead
    //of writing &&, you can write || and that's it.

    while (indexL < lenL && indexR < lenR){
        if(lArr[indexL] <= rArr[indexR]){
            arr[indexMainArr] = lArr[indexL];
            indexMainArr ++;
            indexL ++;
        }
        else {
            arr[indexMainArr] = rArr[indexR];  
            indexMainArr ++;
            indexR ++;
        }
    }
    // 2 more cases.

    //1st case :  left array exhausted and right has elements.
    while (indexL < lenL){
        arr[indexMainArr] = lArr[indexL];
            indexMainArr ++;
            indexL ++;
    }

    //2nd case : right array exhausted and left has elements.
    while (indexR < lenR) {
        arr[indexMainArr] = rArr[indexR];  
            indexMainArr ++;
            indexR ++; 
    }

    // final step.

    // de allocation of the memory.

    delete[] lArr;
    delete[] rArr;
}
void mergeSort(int arr[], int s, int e){

    //base case
    //it is very imp to stop the recursion.. means
    //when only single element is remaining in left or right.
    if(s>=e){
        // n==o for empty array
        //s>e for start greater than end.invalid
        //s==e for single element. 
        return;
    }
    
    //break into two.
    int mid = s + (e-s)/2 ;
    // recursion call
    
    // left ma : s to mid
    mergeSort(arr, s, mid);
    // right ma : mid+1 to e
    mergeSort(arr, mid+1, e);
    // merge them
    merge(arr, s, e);

}
int main(){

    int arr[] = {2,4,1,13,3,54,12,45,32};

    int s = 0;//start
    int n = sizeof(arr)/ sizeof(arr[0]);
    int e = n-1;//end
    

    cout << "Before Merge Sort : " << endl;
    for (auto item : arr){
        cout << item << " ";
    }
    cout << endl;
    
    mergeSort(arr, s, e);
    
    cout << "After Merge Sort : " << endl;
    for (auto item : arr){
        cout << item << " ";
    }
    


    return 0;
}