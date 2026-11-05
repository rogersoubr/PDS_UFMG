#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <string>

class InvalidSizeException {
public:
    std::string name = "InvalidSizeException";
};

class QueueFullException {
public:
    std::string name = "QueueFullException";
};

class QueueEmptyException {
public:
    std::string name = "QueueEmptyException";
};

class ItemNotFoundException {
public:
    std::string name = "ItemNotFoundException";
};

#endif
