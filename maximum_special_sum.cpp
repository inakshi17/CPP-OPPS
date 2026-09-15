#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements\n";
    for(int i = 0; i < n; i++) {
        cout<<"enter element "<<i+1<< " : ";
        cin >> arr[i];
    }
    int maxSum = INT_MIN; 
    for(int i = 0; i < n; i++) {
        int sum = 0;
        int j = i;
        int count = 1;
        while(j + count <= n) {
            for(int k = 0; k < count; k++) {
                sum = sum + arr[j + k];
            }
            j = j + count;
            count++;
        }
        if(sum > maxSum) {
            maxSum = sum;
        }
    }
    cout << "maximum special sum is : ";
    cout << maxSum << endl;
    return 0;
}
