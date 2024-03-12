def bubble_sort(arr):
    n = len(arr)

    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
            
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

def main():
    n = int(input("Enter the size of the array: "))
    array = []

    for i in range(n):
        num = int(input("Enter the number: "))
        array.append(num)

    bubble_sort(array)

    print("Sorted array:")
    print(" ".join(map(str, array)))

if __name__ == "__main__":
    main()
