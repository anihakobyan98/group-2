#include <iostream>
class A {
	public:
		A() {}
		~A() {}
		void foo() {
			std::cout << "A funtion!" << std::endl;
		}
		virtual void boo() {
			std::cout << "Virtual A funtion!" << std::endl; 
		}
};
class B:public A {
	public:
		B() {}
		~B() {}
		void foo() {
			std::cout << "B funtion!" << std::endl;
		}
		virtual void boo() {
			std::cout << "Virtual B funtion!" << std::endl; 
		}
};
int main() {
	B b;
	A* a=&b;
	a->foo();
	a->boo();
	return 0;
}
