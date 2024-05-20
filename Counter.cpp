#include "Counter.h"
#include <iostream>

Counter::Counter()
{
    
        this->counter = 1;
    
}

Counter::Counter(int counter)
{
    this->counter = counter;
}

void Counter::counterAdd()
{
    this->counter += 1;
}

void Counter::counterSub()
{
    this->counter -= this->counter > 0 ? 1 : 0;
}

void Counter::counterPrint()
{
    std::cout << "Counter: " << this->counter << '\n';
}
