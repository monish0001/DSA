
```cpp
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
```



# Bubble Sort

Bubble Sort is a simple comparison-based sorting algorithm. It works by repeatedly stepping through the list to be sorted, comparing adjacent elements, and swapping them if they are in the wrong order. This process is repeated until the list is sorted.

## Sorting Characteristics

### In-place
Bubble Sort is an **in-place** sorting algorithm. This means it requires only a constant amount of additional memory space apart from the input array. It sorts the array by modifying the positions of the elements within the original array itself.

### Internal
Bubble Sort is an **internal** sorting algorithm. It performs all its operations within the memory (RAM) of the system, and it requires that the entire array to be sorted is present in the main memory.

### External
Bubble Sort is not typically used as an **external** sorting algorithm. External sorting algorithms are used for handling massive amounts of data that do not fit into the main memory and rely on external storage, such as disk drives. Bubble Sort's performance characteristics make it impractical for such use cases.

### Stable
Bubble Sort is a **stable** sorting algorithm. Stability in sorting means that two equal elements will retain their relative order even after sorting. Bubble Sort preserves the relative order of equal elements because it only swaps elements when the preceding element is greater than the succeeding one.

### Time Complexity
Bubble Sort has a **time complexity** of:
- **O(n^2)** in the average and worst-case scenarios, where `n` is the number of elements in the array. This quadratic time complexity makes Bubble Sort inefficient for large datasets.
- **O(n)** in the best-case scenario, which occurs when the array is already sorted. This can be achieved if the implementation includes a flag to detect whether any swaps were made during a pass through the array.

### Space Complexity
Bubble Sort has a **space complexity** of **O(1)**. It requires a constant amount of extra space, independent of the input size, because it only uses a few additional variables for swapping elements.

### Adaptivity
Bubble Sort is **adaptive** to some extent.
