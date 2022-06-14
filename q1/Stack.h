

// We CANT alter a static array as the size is fixed
// Desc:  Implementation of an int sequence with push/pop in a LIFO order
class Stack {

    private:

        // Desc:  arr = static array of capacity STACKCAP
        //        size = the number of elements presently in the stack
        //  Inv:  Follows the A2 Spec, namely that the stack elements 
        //        are in order within A[0..size-1], where the top of
        //        the stack is A[0].
        // We CANNOT change a constant int
        static const unsigned STACKCAP = 8;
        int arr[STACKCAP];
        unsigned size;

    public:

        // Desc:  The constructor of the stack where we initalize all our elements
        // Post:  Should assign size to be zero and initalize the array
        Stack();


        // Desc:  Insert element x to the top of the stack.
        //  Pre:  Has to be an integer
        // Post:  
        void push(int x);


        // Desc:  Remove and return element at the top of the stack.
        //  Pre:  
        // Post:  
        int pop();


        // Desc:  Return the topmost element of the stack.
        //  Pre:  
        // Post:  
        int peek() const;


        // Desc:  
        // Post:  
        bool isEmpty() const;

};


