#ifndef INTSTACK_H
#define INTSTACK_H
#include "StackNode.h"
class IntStack
{
    public:
        IntStack();
        void init(void);
        void pop(int height);
        void push(int nu);
    protected:
    private:
        StackNode* top;
        StackNode* now;
};

#endif // INTSTACK_H
