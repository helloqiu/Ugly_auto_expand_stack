#include "StackNode.h"
#include <iostream>
using namespace std;
StackNode::StackNode()
{
    //ctor
}
StackNode *StackNode::createNode(int nu){
    num = nu;
    next = NULL;
}
