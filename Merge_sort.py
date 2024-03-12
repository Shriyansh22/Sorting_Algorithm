class MergeSortADT:
    def sort(self, data):
        
        if len(data) > 1:
            
            mid = len(data) // 2

            
            left_half = data[:mid]
            right_half = data[mid:]

        
            self.sort(left_half)
            self.sort(right_half)

            
            i = j = k = 0
            while i < len(left_half) and j < len(right_half):
                if left_half[i] < right_half[j]:
                    data[k] = left_half[i]
                    i += 1
                else:
                    data[k] = right_half[j]
                    j += 1
                k += 1

            
            while i < len(left_half):
                data[k] = left_half[i]
                i += 1
                k += 1

            
            while j < len(right_half):
                data[k] = right_half[j]
                j += 1
                k += 1


if __name__ == "__main__":
    
    merge_sort_adt = MergeSortADT()

    
    unsorted_data = [12, 4, 5, 6, 7, 3, 1, 15]

    print("Unsorted Data:", unsorted_data)


    merge_sort_adt.sort(unsorted_data)

    print("Sorted Data:", unsorted_data)
