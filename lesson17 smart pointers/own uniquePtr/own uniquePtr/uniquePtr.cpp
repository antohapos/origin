#include <iostream>
template <typename T>
class UniquePtr {
public:
    explicit UniquePtr(T* ptr) : ptr_(ptr) {}
    UniquePtr& operator=(const UniquePtr& other) = delete;
    UniquePtr(const UniquePtr& other) = delete;
    T* operator*() const { return ptr_; }
    T* release() {
        T* temp = ptr_;
        ptr_ = nullptr;
        return temp;
    }
    ~UniquePtr() {
        if (ptr_ != nullptr) {
            delete ptr_;
        }
    }
private:
    T* ptr_;
};
int main() {
    UniquePtr<int> ptr(new int(10));
    std::cout << "Значение: " << *ptr << std::endl;
    int* rawPtr = ptr.release();
    std::cout << "UniquePtr владеет объектом: " << (ptr.release() == nullptr)
        << std::endl;
    delete rawPtr;
    return 0;
}