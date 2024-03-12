class SortingAlgorithm:
    def __init__(self):
        pass

    @staticmethod
    def selection_sort(arr):
        n = len(arr)

        for i in range(n - 1):
            min_index = i
            for j in range(i + 1, n):
                if arr[j] < arr[min_index]:
                    min_index = j

            arr[i], arr[min_index] = arr[min_index], arr[i]

        return arr

if __name__ == "__main__":
    sorting_algo = SortingAlgorithm()
    unsorted_list = [64, 34, 25, 12, 22, 11, 90]
    sorted_list = sorting_algo.selection_sort(unsorted_list)
    print("Original List:", unsorted_list)
    print("Sorted List:", sorted_list)
