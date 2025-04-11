#include <iostream>
using namespace std;

template<typename T>
class MyVector {
private:
    T* data;
    int capacity;
    int length;

    void resize() {
        capacity *= 2;
        T* new_data = new T[capacity];
        for (int i = 0; i < length; i++) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
    }

public:
    MyVector() {
        capacity = 2;
        length = 0;
        data = new T[capacity];
    }

    void push_back(const T& value) {
        if (length == capacity)
            resize();
        data[length++] = value;
    }

    T& operator[](int index) {
        return data[index];  // no bounds check here for simplicity
    }

    int size() const {
        return length;
    }

    ~MyVector() {
        delete[] data;
    }
};



int main() {
    MyVector<int> nums;
    nums.push_back(5);
    nums.push_back(10);
    nums.push_back(15);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    MyVector<string> names;
    names.push_back("Amar");
    names.push_back("Ravi");

    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " ";
    }

    return 0;
}
