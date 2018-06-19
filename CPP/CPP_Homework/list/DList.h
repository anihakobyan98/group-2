#ifndef LIST
#define LIST


class List {
    private:
        struct Node {
            int _value;
            Node* _next;
            Node* _prev;
        };

        Node* _head;
        Node* _tail;
        unsigned int _size;
        void* shiftTo(unsigned int);
    public:
        List();
        List(const List&);
        ~List();
        int& operator[](unsigned int); 
        int find(int);
        void insert(int, unsigned int);
        void pushFront(int value);
        void pushEnd(int value);
        int remove(unsigned int);
        int popFront();
        int popEnd();
}; //List

#endif  //LIST
