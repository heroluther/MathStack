/*
    Program Name: MathStack
    Date: 10/31/2020
    Version: 1.0.0
    Description: Tests out mutliple functions with the Stack data structure using a double arry
*/
#include <stdio.h>
#include <iostream>
using namespace std;

class MathStack{
    private: 
        double arr[100];
    public:
        int top = 0;
        void push(double x){
            arr[top++] = x;
        }
        double Pop(){
            return arr[--top];
        }
        //Prints all contents of array
        void display(){
            cout << "Printing all contents:" << endl;
            for(int i = 0; i < top; i++){
                cout << arr[i] << " ";
            }
            cout << "\n" << endl;
        }
        //Pops the last two digits, multiplies them, and pushes the result into array
        void Mult(){
            push(Pop() * Pop());  
        }
        //Pops the last two digits, divides them, and pushes the result into array
        void Div(){
            push(Pop() / Pop());
        }
        //Pops all digits, add them, and pushes the result into array
        void addAll(){
            double sum = 0;
            int temp = top;
            for(int i = 0; i < temp; i++){
                sum+= Pop();
            }
            push(sum);
        }
        //Pops all digits, multiply them, and pushes the result into array
        void multAll(){
            double sum = 1;
            int temp = top;
            for(int i = 0; i < temp; i++){
                sum*= Pop();
            }
            push(sum);
        }
};
int main()
{
    MathStack stack;
    MathStack stack2;
    for(int i = 1; i < 10; i++){
        stack.push(i);
        stack2.push(i);
    }
    stack.display();
    
    //Testing Mult
    cout << "Testing Mult:" << endl;
    stack.Mult();
    stack.display();
    
    //Testing Div
    cout << "Testing Div:" << endl;
    stack.Div();
    stack.display();
    
    //Testing addAll
    cout << "Testing addAll:" << endl;
    stack.addAll();
    stack.display();
    
    //Testing multAll
    cout << "Testing multAll:" << endl;
    cout << "Original list:" << endl;
    stack2.display();
    stack2.multAll();
    cout << "List after multAll:" << endl;
    stack2.display();
    
    
    return 0;
}

