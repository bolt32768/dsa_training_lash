#include <iterator>
template <typename T> QueueL<T> QueueL<T>::enqueue(T a)
{
    data.push_back(a);
    return *this;
}

template <typename T> QueueL<T> QueueL<T>::dequeue()
{
    data.erase(data.begin());
    return *this;
}

template <typename T> T QueueL<T>::front() const
{
    return *(data.begin());
}

template <typename T> bool QueueL<T>::is_empty() const
{
    return data.empty();
}

template <typename T> int32_t QueueL<T>::size() const
{
    return data.size();
}

template <typename T> void QueueL<T>::print() const
{
    std::cout << "\nstart to end:\n\n";
    for (auto elem : data)
    {
        std::cout << elem << "\n";
    }
}
