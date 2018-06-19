#include <iostream>

int f(int a,int n){

            if(n==0){

                return 1;

            }

            return f(a, n-1)*a;

        }

int main()

{
            std::cout<<(f(10, 3));
			
			return 0;
        }
