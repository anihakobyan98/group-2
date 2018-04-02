#include <iostream>

#include <math.h>



bool parztiv(int n){

    for (int i = 2; i<=sqrt(n); i++) 

        if (n % i == 0){ 

            return false;  

	} return true; 

}

int main()

{

         int m;

            std::cin>>m;

            std::cout<<(parztiv(m));

  			return 0;   
}
