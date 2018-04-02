#include <iostream>

 int f(int n){

            if(n>0){

                if(n%2==0){

                 return f(n-2)*n;

                }else{

                    return f(n-2)*n;

                    }

            }return 1;

         }

int main()

{

            std::cout<<(f(8));
			return 0;
   }
