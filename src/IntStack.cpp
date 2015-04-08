#include "IntStack.h"
#include <iostream>

using namespace std;
IntStack::IntStack()
{

}
void IntStack::init(void){
        top = NULL;
        now = NULL;
    }
void IntStack::pop(int height){
    StackNode* tmp = top;
    int tmpint = height;
    if (tmp == NULL){
        cout << "the stack is empty!" << endl;
        return;
    }
    while ((tmp != NULL) && (tmpint > 0)){
        cout << tmp -> num << endl;
        tmp = tmp -> next;
        tmpint --;
    }
    return;
}
void IntStack::push(int nu){
    if ((now == NULL)){
        top = new StackNode;
        top->createNode(nu);
        now = top;
        return;
    }

    now -> next = new StackNode;
    now -> next -> createNode(nu);
    now = now -> next;
    return;
}

