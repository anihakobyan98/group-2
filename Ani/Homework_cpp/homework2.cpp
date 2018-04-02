#include <iostream>


void func(int n) 

{

    if(n>1){

        func(n-1);

    std::cout<< n <<" ";
}
}

 

int main()

{

    int n;

    std::cout<<"Nermucir N tivy 1-N tvery tpelu hamar: ";

    std::cin>>n;

    func(n);

	return 0;
}
