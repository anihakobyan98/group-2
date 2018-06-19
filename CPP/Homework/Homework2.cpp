#include <iostream>
#include <string>

int main()
{
  int arr[10], zsum=0, ksum=0;
  for(int i=0; i<10; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
      }
   for(int i=0; i<10; i++) {
       if(arr[i]%2==0){
            zsum+=arr[i];
           } else {
                ksum+=arr[i];
               }
        std::cout << arr[i] << " ";
   }
   int max=arr[0], min=arr[0];
    for(int i=1; i<10; i++) {
        if(arr[i]>=max){
                max=arr[i];
            } 
        if(arr[i]<=min){
                min=arr[i];
            }
       }
       std::cout << '\n';
       std::cout << "Zuygeri gumary = " << zsum << std::endl;
       std::cout << "Kenteri gumary = " << ksum << std::endl;
       std::cout << "Max = " << max << std::endl;
       std::cout << "Min = " << min << std::endl;
    
  
}
