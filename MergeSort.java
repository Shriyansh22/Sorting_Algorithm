import java.util.Arrays;

public class MergeSort {

    public static void merge(int[] array, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

    
        int[] leftArray = Arrays.copyOfRange(array, left, left + n1);
        int[] rightArray = Arrays.copyOfRange(array, mid + 1, mid + 1 + n2);

        
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (leftArray[i] <= rightArray[j]) {
                array[k] = leftArray[i];
                i++;
            } else {
                array[k] = rightArray[j];
                j++;
            }
            k++;
        }

        
        while (i < n1) {
            array[k] = leftArray[i];
            i++;
            k++;
        }

        
        while (j < n2) {
            array[k] = rightArray[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int[] array, int left, int right) {
        if (left < right) {
            
            int mid = left + (right - left) / 2;

            
            mergeSort(array, left, mid);
            mergeSort(array, mid + 1, right);

        
            merge(array, left, mid, right);
        }
    }

    public static void main(String[] args) {
        int[] array = {12, 4, 5, 6, 7, 3, 1, 15};

        System.out.println("Unsorted array: " + Arrays.toString(array));

    
        mergeSort(array, 0, array.length - 1);

        System.out.println("Sorted array: " + Arrays.toString(array));
    }
}
