#ifndef TOY_H
#define TOY_H

#include <string>

struct Toy
{
public:
    int _age = 0;
    double _price = 0;
    std::string _name = "";
    bool _isForChildern = true;
};

#endif // TOY_H
