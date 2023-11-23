#include <iostream>
#include <vector>
/*Muxtorov Abdulaziz,SSE3 20221500484*/
class Heap { 
private:
    std::vector<int> heapArray;

    // Function to swap two elements
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
    // Function to heapify the tree
    // This function runs in O(log(n)) time
    void maxHeapify(int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < heapArray.size() && heapArray[left] > heapArray[largest])
            largest = left;

        if (right < heapArray.size() && heapArray[right] > heapArray[largest])
            largest = right;

        if (largest != i) {
            swap(heapArray[i], heapArray[largest]);
            maxHeapify(largest);
        }
    }

public:
    // Function to build the max heap
    // This function runs in O(n) time
    void buildMaxHeap(std::vector<int> const &nums) {
        heapArray = nums;
        for (int i = heapArray.size() / 2 - 1; i >= 0; i--)
            maxHeapify(i);
    }

    // Function to perform heapsort
    // This function runs in O(n log(n)) time
    void heapsort() {
        for (int i = heapArray.size() - 1; i >= 0; i--) {
            swap(heapArray[0], heapArray[i]);
            maxHeapify(0);
        }
    }

    // Function to print the heap
    void printHeap() {
        for (int i : heapArray)
            std::cout << i << " ";
        std::cout << "\n";
    }
};

int task_9() {
    Heap heap;
    std::vector<int> nums = {12, 11, 13, 5, 6, 7};

    heap.buildMaxHeap(nums);
    std::cout << "Max Heap: ";
    heap.printHeap();

    heap.heapsort();
    std::cout << "Sorted array: ";
    heap.printHeap();

    return 0;
}

