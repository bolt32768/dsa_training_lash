#include <iostream>
#include <vector>

template <typename T> class StackL {
    public:
        /*! Public methods */
        StackL push(T a);
        StackL pop();
        int32_t size() const;
        bool is_empty() const;
        T top() const;
        void print() const;

    private:
        /*! Private members */
        std::vector<T> data;
};

#include "stack_local_impl.h"
