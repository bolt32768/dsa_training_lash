#include <iterator>
template <typename T> StackL<T> StackL<T>::push(T a)
{
    data.push_back(a);
    return *this;
}

template <typename T> StackL<T> StackL<T>::pop()
{
    data.erase(--data.end());
    return *this;
}

template <typename T> T StackL<T>::top() const
{
    return *(data.rbegin());
}

template <typename T> bool StackL<T>::is_empty() const
{
    return data.empty();
}

template <typename T> int32_t StackL<T>::size() const
{
    return data.size();
}

template <typename T> void StackL<T>::print() const
{
    std::cout << "\ndeep to surface:\n\n";
    for (auto elem : data)
    {
        std::cout << elem << "\n";
    }
}
