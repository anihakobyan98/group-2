#include <iostream>
class Stack {
    private:
	int max;	
        int n;
        int arr[];
    public:
        Stack() {
		n = -1;
		max=10;    
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
			return -1;
		} else {
			int m=n;
			n--;
			return arr[m];
            }  
       }
        
        bool isEmpty() {
            return (n == -1) ? true:false; 
        }
        void print () {
		for(int i=0; i<=n; i++) {
                std::cout << arr[i] << std::endl;
            }
		std::cout << "Is empty` " << isEmpty() << std::endl;
		std::cout << "Stack have " << n+1 << " element." << std::endl;	
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
  obj.push(1);
  obj.push(3);
  obj.push(4);
  obj.pop();
  obj.pop();
  obj.pop();
  obj.pop();
  obj.push(2);
  obj.isEmpty();
  obj.print();
}

