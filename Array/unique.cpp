#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
    	cout<<"Enter the number: ";
        cin >> arr[i];
        for(int j=0; j<i-1; j++){
        	if(arr[i] == arr[j]){
        		cout<<"Allready Entered!" << arr[j] <<endl;
        		break;
			}
//			cout<<"Unique Elements: " << arr[j] << endl;
		}
		cout<<endl;
    }

    return 0;
}

