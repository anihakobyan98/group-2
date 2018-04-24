#ifndef VECTOR
#define VECTOR
class Vector{
	private:
		unsigned int length;
		unsigned int index;
		int arr[];
	public:
		Vector();
		int insert(int);
		int remove(int);
		int erace(int);
		int resize(int);
		int find(int);
		int operator[](int);
		bool isEmpty();
		void print();
};
#endif
