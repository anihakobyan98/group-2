#include <iostream>
int const max=10;
class Stack {
    private:
        int n;
        int arr[max];
    public:
        Stack() {
            n = -1;    
        }
        void push(int a) {
                if(n == max - 1) {
                    std::cout << "Stack is full!" << std::endl;
                    return;
                }
                arr[++n] = a;
        }
        int pop() {
            if(n == -1) {
                std::cout << "Stack is empty!" << std::endl;
            } else {
                std::cout << "Deleted the element " << arr[n] << std::endl; 
            }  
            n--;
        }
        bool isEmpty() {
            if(n == -1) {
                return true;    
            } else {
                return false;    
            }
        }
        int size() {
            for(int i=0; i<=n; i++) {
                return n+1;
            }     
        }
        void print () {
            for(int i=0; i<=n; i++) {
                std::cout << arr[i] << std::endl;
            }
            std::cout << "Is empty` " << isEmpty() << std::endl;
            std::cout << "Stack have " << size() << " element." << std::endl;
        }
};
int main()
{
  Stack obj;
  obj.push(2);
  obj.push(3);
  obj.push(1);
  obj.push(2);
  obj.push(2);
  obj.push(9);
  obj.push(4);
  obj.push(7);
  obj.push(8);
  obj.push(8);
  obj.push(8);
  obj.push(8);
  obj.pop();
  obj.pop();
  obj.push(5);
  obj.push(2);
  obj.pop();
  obj.pop();
  obj.pop();
  obj.push(0);
  obj.isEmpty();
  obj.print();
}
