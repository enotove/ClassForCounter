#pragma once
class Counter
{
    
    public:
        Counter();
        Counter(int counter);
        void counterAdd();
        void counterSub();
        void counterPrint();
    private:
        int counter = 0;

   
};

