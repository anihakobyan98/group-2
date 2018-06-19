#include <iostream>

 int f(int n){

            if(n>0){

                 return f(n-1)*n;
         
            }return 1;           

        }

int main()
{
      
           std::cout<<(f(5)) << std::endl;
			
			return 0;
}


