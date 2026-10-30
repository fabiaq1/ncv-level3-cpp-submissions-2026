#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void getNumbers(int nums[], int sz);
int evenNumbers(int nums[], int sz);
void oddNumbers(int nums[], int sz);
void sortAscending(int nums[], int sz);

const int SIZE = 5 ;
int main()
{
	int numbers[SIZE];
	getNumbers(numbers,SIZE);
	oddNumbers(numbers,SIZE);
	sortAscending(numbers, SIZE);
    cout<<"Number of even numbers: "<<evenNumbers(numbers,SIZE)<<endl;

    _getch();

    return 0;

}

void getNumbers(int nums[], int sz){
	for (int i = 0; i < sz; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> nums[i];
	}
}

int evenNumbers(int nums[], int sz){
	int count = 0;
		for(int x = 0; x < sz; x++)
		{
			if(nums[x] % 2 == 0){
				count +=1;
			}
				
		}
return count;
} 

void oddNumbers(int nums[], int sz){
	cout<<"Odd numbers: ";
		for(int x = 0; x < sz; x++)
		{
			if(nums[x] % 2 == 1){
				cout<<nums[x]<<" ";
			}		
		}
		cout<<" "<<endl;
} 

void sortAscending(int nums[], int sz){
	  // Bubble Sort Algorithm
    for (int i = 0; i < sz - 1; i++) {
        // Track if a swap happened to optimize the loop
        bool swapped = false; 
        
        for (int j = 0; j < sz - i - 1; j++) {
            // To sort in descending order, change '>' to '<'
            if (nums[j] > nums[j + 1]) {
                // Swap elements using a temporary variable
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                
                swapped = true;
            }
        }
        
        // If no two elements were swapped by the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < sz; i++) {
        cout << nums[i] << " ";
    }
    cout<<" "<<endl;
} 

