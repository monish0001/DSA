#include <iostream>

using namespace std;

// Function to print an array
void printArray(int arr[], int N)
{
  // Iterate through the array
  for (int i = 0; i < N; i++)
  {
    // Print each element followed by a space
    cout << arr[i] << " ";
  }
  // Print a newline at the end
  cout << endl;
}

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int N)
{
  // Outer loop to iterate over each element
  for (int i = 0; i < N - 1; i++)
  {
    // Inner loop for comparison and swapping
    for (int j = 0; j < N - i - 1; j++)
    {
      // If the current element is greater than the next element
      if (arr[j] > arr[j + 1])
        // Swap the elements
        swap(arr[j], arr[j + 1]);
    }
  }
}

int main()
{
  int N = 10;                                    // Size of the array
  int arr[] = {1, 55, 2, 3, 45, 4, 5, 6, 56, 7}; // Array to be sorted

  // Print the array before sorting
  cout << "Before Sorting: ";
  printArray(arr, N);

  // Sort the array using bubble sort
  bubbleSort(arr, N);

  // Print the array after sorting
  cout << "After Sorting: ";
  printArray(arr, N);

  return 0; // End of program
}
