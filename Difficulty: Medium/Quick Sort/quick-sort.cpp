//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(const vector<int>& arr) {
    for (int num : arr)
        printf("%d ", num);
    printf("\n");
}


// } Driver Code Ends

class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        if(low<high){
            
            int parti=partition(arr,low,high);
            quickSort(arr,low,parti-1);
            quickSort(arr,parti+1,high);
        }
        
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int x=low;
        int y=high;
        int pivot=arr[low];
        while(x<y){
            while(x<=high-1 && arr[x]<=pivot){
                x++;
            }
            while(y>=low && arr[y]>pivot){
                y--;
            }
            if(x<y){
                swap(arr[x],arr[y]);
                
            }
        }
        swap(arr[low],arr[y]);
        return y;
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    scanf("%d", &T);
    getchar(); // to consume newline after T

    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.quickSort(arr, 0, arr.size() - 1);
        printArray(arr);
    }

    return 0;
}

// } Driver Code Ends