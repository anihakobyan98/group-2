// Example program
#include <iostream>
#include <string>

int main()
{
  int n;
  std::cout << "Enter size of array: ";
  std::cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) {
        std::cin >> arr[i];
      }
    for(int i=0; i<n; i++) {
            std::cout << arr[i] << " " ;
        }
    int sn;
    std::cout << "Enter a searchable number: ";
    std::cin >> sn;
    int index=0;
    for(int i=0; arr[i]!=sn; index=i) {
            if(sn>arr[i]) {
                    i+=3;
                }
            if(sn<arr[i]) {
                    i-=2;
                }
            
            
            
        }std::cout << index+1;
        
}
