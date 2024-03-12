class SortingAlgorithm {
    static selectionSort(arr) {
        const n = arr.length;

        for (let i = 0; i < n - 1; i++) {
            let minIndex = i;
            for (let j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]];
        }
    }
}

const unsortedArray = [64, 34, 25, 12, 22, 11, 90];
SortingAlgorithm.selectionSort(unsortedArray);
console.log("Original Array:", unsortedArray);
