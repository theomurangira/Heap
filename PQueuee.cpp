#include <iostream>
#include <vector>
#include <stdexcept> // For std::out_of_range

template<typename T>
class PriorityQueue {
private:
    std::vector<T> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[parent(index)] < heap[index]) {
            std::swap(heap[parent(index)], heap[index]);
            index = parent(index);
        }
    }

    void heapifyDown(int index) {
        int largest = index;
        int leftChildIdx = leftChild(index);
        int rightChildIdx = rightChild(index);

        if (leftChildIdx < heap.size() && heap[leftChildIdx] > heap[largest]) {
            largest = leftChildIdx;
        }

        if (rightChildIdx < heap.size() && heap[rightChildIdx] > heap[largest]) {
            largest = rightChildIdx;
        }

        if (largest != index) {
            std::swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

    int parent(int index) { return (index - 1) / 2; }
    int leftChild(int index) { return 2 * index + 1; }
    int rightChild(int index) { return 2 * index + 2; }

public:
   //Default constructor
    PriorityQueue() {}
 /* Implement this function
   Put the value at the back  of the vector
   Then call HeapifyUp
   */
    void insert(const T& value) {
        //Your code goes here
    }

/* Implement this function
  Swap the largest element with the last element of 
  the vector, delete the last element, call heapifyDown
  and return the value of the deleted element
*/
    T extractMax() {
        
        //your code goes here
    }

    bool isEmpty() const {
        return heap.empty();
    }
};

// Example usage
int main() {
    PriorityQueue<int> pq;
    pq.insert(30);
    pq.insert(20);
    pq.insert(15);
    pq.insert(5);
    pq.insert(10);
    pq.insert(12);
    pq.insert(6);

    std::cout << "Extracting max: " << pq.extractMax() << std::endl;
    std::cout << "Extracting max: " << pq.extractMax() << std::endl;

    return 0;
}
