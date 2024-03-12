#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& vec, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = vec[left + i];
    for (j = 0; j < n2; j++)
        R[j] = vec[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& vec, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(vec, left, mid);
        merge_sort(vec, mid + 1, right);

        merge(vec, left, mid, right);
    }
}

void print_vector(const vector<int>& vec) {
    for (int num : vec)
        cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {12, 4, 5, 6, 7, 3, 1, 15};

    cout << "Unsorted vector: \n";
    print_vector(vec);

    merge_sort(vec, 0, vec.size() - 1);

    cout << "Sorted vector: \n";
    print_vector(vec);

    return 0;
}
