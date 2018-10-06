#ifndef STACK_H
#define STACK_H



class Stack
{
    public:
        typedef int Item;
        static const int CAPACITY = 100;
        //CONTRUCTOR
        Stack(){used=0;}  // Inline Constructor

        //MODIFICATION MEMBER FUNCTIONS
        void push(Item entry);
        int pop();
        int apply(char optr, Item operand1, Item operand2);


        //CONSTANT MEMBER FUNCTION
        bool empty()const{return used==0;} // Inline function





    private:
      Item data[CAPACITY];
      int used;
};

#endif // STACK_H
