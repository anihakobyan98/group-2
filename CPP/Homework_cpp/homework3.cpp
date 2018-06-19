#include <iostream>

int f(int n,int a){

            if(n==0){

                return a;

            }

            return f(n/10,a*10+n%10);

        }

int main()

{

            std::cout<<(f(125625959,0));

      
}
