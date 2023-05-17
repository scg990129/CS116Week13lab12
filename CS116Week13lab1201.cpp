//CS116Week13lab1201
//20230516
//Shun Hoi Yeung
//900494756

// This program uses the selection sort algorithm to sort an 
// array in ascending order.

//#include <iomanip>
//#include <vector>
#include <iostream> 

using namespace std;

// Function prototypes 

void selectionSort(int[], int);
void showArray(const int[], int);

int main() {

    // Define an array with unsorted values 
    const int SIZE = 6;
    int values[SIZE] = { 5, 7, 2, 8, 9, 1 };

    // Display the values. 
    cout << "The unsorted values are\n";
    showArray(values, SIZE);

    // Sort the values.
    selectionSort(values, SIZE);

    // Display the values again. 
    cout << "The sorted values are\n";
    showArray(values, SIZE);

    return 0;
}

//***************************************************************
// Definition of function selectionsort.                        *
// This function performs an ascending order selection sort on  *
// array. size is the number of elements in the array.          *
//***************************************************************

void selectionSort(int array[], int size) {
    int startscan, minIndex, minValue;

    for (startscan = 0; startscan < (size - 1); startscan++) {
        minIndex = startscan;
        minValue = array[startscan];

        for (int index = startscan + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }

        array[minIndex] = array[startscan];
        array[startscan] = minValue;
    }

}

//***************************************************************
// Definition of function showArray.                            *
// This function displays the contents of array. size is the    *
// number of elements.                                          *
//***************************************************************

void showArray(const int array[], int size) {
    for (int count = 0; count < size; count++) {
        cout << array[count] << " ";
        cout << endl;
    }
}