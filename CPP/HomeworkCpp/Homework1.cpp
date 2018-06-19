#include <iostream>
int main()
{
  int n;
  std::cout << "Enter size of array: ";
  std::cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) {
        arr[i]=1+rand()%100;
        std::cout << arr[i] << " ";
      }
     std::cout << '\n';
     int num, notf=0;
    std::cout << "Enter a searchable number: ";
    std::cin >> num;
    for(int i=0; i<n; i++) {
            if(arr[i] == num) {
                    std::cout << "The index of searchable number is: " << i+1 << " " << std::endl;
                } else {
                     notf++;   
                    }
        }
   if(notf==n){
        std::cout << "Not found!";
       }
}
