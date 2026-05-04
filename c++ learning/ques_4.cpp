#include <iostream>
#include <vector>

using namespace std;

void selectionSortValueBased(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        // Step 1: Current position-er value-ke min_value dhore nilam
        int min_value = arr[i]; 
        //int min_index = i;

        // Step 2: Inner loop diye baki value-r sathe compare korchi
        for (int j = i + 1; j < n; j++) {
            // Sorasori value-r sathe value-r tulona
            if (arr[j] < min_value) { 
                min_value = arr[j];  // Noutun chhoto value cup-e rakhlam
               
            }
        }

    }
}

int main() {
    vector<int> numbers = {29, 10, 14, 37, 13};

    cout << "Before Sorting: ";
    for (int num : numbers) cout << num << " ";
    cout << endl;

    selectionSortValueBased(numbers);

    cout << "After Sorting:  ";
    for (int num : numbers) cout << num << " ";
    cout << endl;

    return 0;
}