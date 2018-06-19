#include <iostream>

#include <std::string>

bool IsPalindrome(std::string word) {

     

    for(int i=0,j = word.length() - 1;i<j;++i,--j){

   

        if (word[i] != word[j])

        {

            return false;

        }

         

    }

   return true;

}

int main(){

    std::string word;

    std::cin>>word;

    std::cout<<IsPalindrome(word);
	return 0;
}
