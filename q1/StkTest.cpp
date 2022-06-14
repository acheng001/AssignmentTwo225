
#include "Stack.h"

#include <iostream>

using namespace std;


int main () {
    Stack stk;
    // push 1, 2, 3, 4, 5
    for (int i = 1; i <= 5; i++) {
        stk.push(i);
        cout << "push " << i << endl;
    }

    // pop top two
    for (int i = 0; i < 2; i++) {
        // Called the pop function in line 20
        int x = stk.pop();
        // Peek at the next number
        int y = stk.peek();
        cout << "pop " << x << ", top " << y << endl;
    }


    // push 6, 7, 8, 9, 10
    for (int i = 6; i <= 10; i++) {
        stk.push(i);
        cout << "push " << i << endl;
    }
    stk.push(100);

    // pop all
    while (!stk.isEmpty()) {
        int x = stk.pop();
        cout << "pop " << x << endl;
    }
    //stk.pop();
    return 0;
}

