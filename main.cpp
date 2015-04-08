#include <iostream>
#include "IntStack.h"

using namespace std;

int main(void)
{
    IntStack intstack;
    intstack.init();
    cout << "this is a stack : " << endl;
    while(1){
        cout << "if you want to pop , please enter -1 .else please enter an integer : " <<endl;
        int tmp;
        cin >> tmp;
        if (tmp == -1){
            int height;
            cout << "please enter the height :" << endl;
            cin >> height;
            intstack.pop(height);
        }else{
            intstack.push(tmp);
        }
    }
    return 0;
}
