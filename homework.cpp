#include <iostream>

class Shape {
    public:
        virtual float getS() = 0;
        virtual float getP() = 0;
	virtual void boo() = 0;
	void foo();

};

class Point: public Shape {
    public:
        virtual float  getS() {
            	std::cout << "A point doesn't have a surface area!" << std::endl;
		return 0;
        }
        virtual float getP() {
            	std::cout << "A point doesn't have a perimeter!" << std::endl;
		return 0;
        }
		virtual void boo() {
			std::cout << "I'm Virtual Point" << std::endl; 
		}
		void foo() {
			std::cout << "I'm Point" << std::endl;
		}
};
class Rectangle: public Shape {
	public:
		virtual float getS() {
			return 20;			
		}
		virtual float getP() {
			return 15;
		}
		virtual void boo() {
			std::cout << "I'm Virtual Rectangle" << std::endl; 
		}
		void foo() {
			std::cout << "I'm Rectangle" << std::endl;
		}
};
class Triangle: public Shape {
	public:
		virtual float getS() {
			return 21;	
		}
		virtual float getP() {
			return 14;
		}
		virtual void boo() {
			std::cout << "I'm Virtual Triangle" << std::endl; 
		}
		void foo() {
			std::cout << "I'm Triangle" << std::endl;
		}
};
class Line:public Shape {
	public:
		Line() {}
		~Line() {}
		virtual float getS() {
			std::cout << "Line doesn't have a surface area!" << std::endl; 
			return 0;
		}
		virtual float getP() {
			std::cout << "Line doesn't have a perimeter! " << std::endl;
			return 0;
		}
		virtual void boo() {
			std::cout << "I'm a Line!" << std::endl;
		}
		void foo() {
			std::cout << "I'm a Virtual Line" << std::endl;
		}
};

void printS(Shape* obj) {
    std::cout << "S = " <<  obj->getS() << std::endl;;
}

void printP(Shape* obj) {
    std::cout << "P = " << obj->getP() << std::endl;
}

int main() {
	Point P;
	Point* p = &P;
	p->foo();
	p->boo();
    printS(&P);
    printP(&P);
	Rectangle R;
	Rectangle* r = &R;
	r->foo();
	r->boo();
	printS(&R);
	printP(&R);
	Triangle T;
	Triangle* t = &T;
	t->foo();
	t->boo();
	printS(&T);
	printP(&T);
	Line L;
	Line* l = &L;
	l->foo();
	l->boo();
	printS(&L);
	printP(&L);
    return 0;
}
