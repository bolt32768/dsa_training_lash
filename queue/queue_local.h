#include <iostream>
#include <vector>

template <typename T> class QueueL {
    public:
        /*! Public methods */
        QueueL enqueue(T a);
        QueueL dequeue();
        int32_t size() const;
        bool is_empty() const;
        T front() const;
        void print() const;

    private:
        /*! Private members */
        std::vector<T> data;
};

#include "queue_local_impl.h"
