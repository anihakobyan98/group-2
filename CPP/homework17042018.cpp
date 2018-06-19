#include <iostream>
#include <cmath>
class Point {
	protected:
		float x,y;
	public:
		Point(float x=0, float y=0) {
			this->x=x;
			this->y=y;
			std::cout << "Point" << std::endl;
	}
		Point(const Point &p) {
			x=p.x;
			y=p.y;
			std::cout << "Copy Point" << std::endl;
	}
		~Point() {
			std::cout << "~ Point" << std::endl;
	}
		float getX() {
			return x;
	}		
		float getY() {
			return y;
	}
		void setX(float x) {
			this->x=x;
	}
		void setY(float y) {		
			this->y=y;
	}
		void print() {
			std::cout << "----------POINT----------" << std::endl;
			std::cout << "Point have this coordinates:" << std::endl;
			std::cout << "X = " << x << std::endl;
			std::cout << "Y = " << y << std::endl;
	}

};
class Rectangle: public Point{
	private:
		Point a;
	public:
		Rectangle(Point a, Point b):Point(b) {
			this->a=a;
			std::cout << "Rectangle" << std::endl;
	}
		Rectangle(const Rectangle &r) {
			std::cout << "Copy Rectangle" << std::endl;
	}
		~Rectangle() {
			std::cout << "~Rectangle" << std::endl;
	}
		Point getA() {
			return a;;
	}
		float getL() {
			return std::abs(a.getX()-Point::getX());
	}
		float getW() {
			return std::abs(a.getY()-Point::getY());
	}
		float getS() {
			return std::abs(getL()*getW());
	}
		float getP() {
			return 2*(std::abs(getL()+getW()));
	}

		void setAx(Point a) {
			this->x=a.getX();
	}
		void setAy(Point a) {
			this->y=a.getY();
	}
		void setBx(Point b){
			this->x=b.getX();
	}
		void setBy(Point b) {
			this->y=b.getY();
	}
		void print() {			
			std::cout << "----------RECTANGLE----------" << std::endl;
			std::cout << "Rectangle S = " << getS() << std::endl;
			std::cout << "Rectangle P = " << getP() << std::endl;
	}
};
class Triangle: public Point {
	private:  
		Point a,b;
	public:
		Triangle(Point a, Point b, Point c):Point(c) {
		this->a=a;
		this->b=b;
		std::cout << "Triangle" << std::endl; 
	}
		Triangle(const Triangle &t) {
		a=t.a;
		b=t.b;
		std::cout << "Copy Triangle" << std::endl;
	} 
		~Triangle() {
		std::cout << "~Triangle" << std::endl;
	}
		Point getA() {
			return a;
	}
		Point  getB() {
			return b;
	}
		void setAx(Point a) {
			this->x=a.getX();
	}
		void setBx(Point b) {
			this->x=b.getX();
	}
		void setAy(Point a) {
			this->y=a.getY();
	}
		void setBy(Point b) {
			this->y=b.getY();
	}	
		void setCx(Point c) {
			this->x=c.getX();
	}
		void setCy(Point c) {
			this->y=c.getY();
	}
		float getA1() {
			return sqrt(pow((a.getX()-b.getX()),2)+pow((a.getY()-b.getY()),2));
		}
		float getA2() {
			return sqrt(pow((b.getX()-Point::getX()),2)+pow((b.getY()-Point::getY()),2));		}
		float getA3() {
			return sqrt(pow((Point::getX()-a.getX()),2)+pow((Point::getY()-a.getY()),2)) ;		
	}
		float getP() {
			return getA1()+getA2()+getA3();
	}
		float getS() {
			float p = getP()/2;
			return sqrt(p*(p-getA1())*(p-getA2())*(p-getA3())); 
	}
	
		void print() {			
			std::cout << "----------TRIANGLE----------" << std::endl;
			std::cout << "L1 = " << getA1() << " L2 = " << getA2() << " L3 = " << getA3() << std::endl;
			std::cout << "Triangle P = " << getP() << std::endl;
			std::cout << "Triangle S = " << getS() << std::endl;
	}
};
class Line: public Point{
 	private:
		Point a;
	public:
		Line(Point a, Point b):Point(b) {
			this->x=a.getX();
			this->y=a.getY();
			std::cout << "Line" << std::endl;
	}	
		~Line() {
			std::cout << "~Line" << std::endl;
	}
		Point getA() {
			return a;
	}
		void setAx(Point a) {
			this->x=a.getX();
	}
		void setAy(Point a) {
			this->y=a.getY();
	}
		void setBx(Point b) {
			this->x=b.getX();
	}
		void setBy(Point b) {
			this->y=b.getY();
	}
		void print() {
			std::cout << "----------LINE----------" << std::endl;
			float k = std::abs((a.getY()-Point::getY())/(a.getX()-Point::getX()));
			float b = std::abs(a.getY()-a.getX()*k);
			std::cout << "K = " << k << ", B = " << b << std::endl;
			for(float i = a.getX()+1; i < Point::getX(); ++i) {
				std::cout << "(" << i << ", " << k*i+b << ")";			
		}
		std::cout << '\n';
	}

	
 };

int main() {
	Point p1(20,5);
	Point p2=(8,2);
	p1.Point::print();
	p2.Point::print();
	Rectangle r1(p1,p2);
	std::cout << "Length = " << r1.getL() << " ,  " << "Width = "<< r1.getW() << std::endl;
	r1.Rectangle::print();
	Point p3(6,3);
	Triangle t1(p1,p2,p3);
	t1.print();
	Line l1(p1,p2);
	l1.print();
	return 0;
}



