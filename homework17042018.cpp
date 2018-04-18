#include <iostream>
#include <cmath>
class Point {
	protected:
		float x,y;
	public:
		Point(float x=0, float y=0) {
			this->x=x;
			this->y=y;
			std::cout << "Constructor of Point" << std::endl;
	}
		Point(const Point &p) {
			x=p.x;
			y=p.y;
			std::cout << "Copy constuctor of Rectangle" << std::endl;
	}
		~Point() {
			std::cout << "Destructor of Point" << std::endl;
	}
		float getX() {
			return x;
	}		
		float getY() {
			return y;
	}
		void set(float x, float y) {
			this->x=x;
			this->y=y;
	}
		void print() {
			std::cout << "Point have this coordinates:" << std::endl;
			std::cout << "X = " << x << std::endl;
			std::cout << "Y = " << y << std::endl;
	}

};
class Rectangle: public Point{
	private:
		unsigned int length, width;
	public:
		Rectangle(unsigned int length, unsigned int width, float x=0, float y=0) {
			this->length=length;
			this->width=width;
			Point::set(x,y);
			std::cout << "Constructor of Rectangle" << std::endl;
	}
		Rectangle(const Rectangle &r) {
			length=r.length;
			width=r.width;
			std::cout << "Copy constructor of Rectangle" << std::endl;
	}
		~Rectangle() {
			std::cout << "Destructor of Rectangle" << std::endl;
	}
		unsigned int getL() {
			return length;
	}
		unsigned int getW() {
			return width;
	}
		void set(unsigned int length, unsigned int width) {
			this->length=length;
			this->width=width;
	}
		float s() {
			return length*width;
	}
		float p() {
			return 2*(length+width);
	}
		void print() {
			std::cout << "The surface of Rectangle is:\n S = " << s() << std::endl;
			std::cout << "The perimeter of Rectangle is:\n P = " << p() << std::endl;
	}
};
class Triangle: public Point {
	private:  
		unsigned int a;
		unsigned int b;
		unsigned int c;
	public:
		Triangle(unsigned int a,unsigned int b, unsigned int c) {
		std::cout << "Constructor of Triangle" << std::endl; 
	}
		Triangle(const Triangle &t) {
		a=t.a;
		b=t.b;
		c=t.c;
		std::cout << "Copy constructor of Triangle" << std::endl;
	} 
		~Triangle() {
		std::cout << "Destructor of Triangle" << std::endl;
	}
		unsigned int getA() {
			return a;
	}
		unsigned int getB() {
			return b;
	}
		unsigned int getC() {
			return c;
	}
		void set(unsigned int a,unsigned int b,unsigned int c) {
			this->a=a;
			this->b=b;
			this->c=c;
	}
		float p() {
			return a+b+c;		
	}
		float s() {
			if(a==b && b==c) {
				return a*a*sqrt(3)/4;
		} else {
				float p=(a+b+c)/2;
				return sqrt(p*(p-a)*(p-b)*(p-c)); 
		}
	}
		void print() {
			std::cout << "Perimeter of Triangle is: P = " << p() << std::endl;
			std::cout << "Surfay of triangle is : S = " << s() << std::endl;
	}
};
class Line: public Point{
 	private:
		float x1, y1;
	public:
		Line(float x1, float y1, float x=0, float y=0) {
			this->x1=x1;
			this->y1=y1;
			Point::set(x,y);
			std::cout << "Constructor of Line" << std::endl;
	}	
		~Line() {
			std::cout << "Destructor of Line" << std::endl;
	}
		float getX1() {
			return x1;
	}
		float getY1() {
			return y1;
	}
		void set(float x1, float y1) {
			this->x1=x1;
			this->y1=y1;
	}
		float foo() {
			double k;
			k=x/y;
			for(float i = x; i < x1; i++) {
				y1=k*i;
				std::cout << "(" << i  << "," << y1 << ")";			
		}
		std::cout << '\n';
	}
 };

int main() {
		
	std::cout << "----------Point-----------" << std::endl;
	Point p1(0,0);
	p1.Point::set(5,6); 
	Point p=p1;
	p.Point::print();
	std::cout << "----------Rectangle-----------" << std::endl;
	Rectangle r1(0,0);
	Rectangle r=r1;
	unsigned int l, w;
	std::cout << "Enter a length for Rectangle: ";
	std::cin >> l;
	std::cout << "Enter a width for Rectangle: ";
	std::cin >> w;
	r1.Rectangle::set(l,w);
	r1.Rectangle::print();
	std::cout << "----------Coordinates-----------" << std::endl;
	float number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	Line obj(number,0,8,3);
	obj.foo();
	std::cout << "---------Triangles-------------" << std::endl;
	Triangle t(0,0,0);
	t.set(3,4,5);
	t.print();	
	return 0;
}



