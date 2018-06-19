#include <iostream>
#include <string>

int main()
{
  int arr[5][5]; //={{1,2,3,4,5},{3,6,5,8,7},{1,1,4,2,1},{5,1,2,7,3},{3,2,1,5,6}} ;
  std::cout << "Enter a number between 0 and 20" << std::endl;
  for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            std::cout << "Enter a number: arr[" << i << "][" << j << "] = "  ;
            std::cin >> arr[i][j];
    }
  } 
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    int sum1=0, sum2=0;
    for(int i=0; i<5; i++) {
          for(static int j=0; j==i; j++) {
                sum1+=arr[i][j];
              }   
        }
        std::cout << "Sum1 = " << sum1 << std::endl;
    for(int i=0; i<5; i++) {
          static int j=4;
            sum2+=arr[i][j];
            j--;
        }
        std::cout << "Sum2 = " << sum2 << std::endl;

    int sumsup1=0, a=0;
    for(int i=0; i<4; i++) {
          for(int j=4; j>a; j--) {
                sumsup1 += arr[i][j];
              }  
              a++;
        }
         std::cout << "Sup_Sum1 = " << sumsup1 << std::endl;
    int sumsub1=0, b=4;
    for(int i=4; i>0; i--) {
            for(int j=0; j<b; j++) {
                    sumsub1 += arr[i][j];
                }
            b--;
        }
    std::cout << "Sub_Sum1 = " << sumsub1 << std::endl;
     
      int sumsup2=0;
     int n=4;
    for(int i=0; i<4; i++) {
            for(int j=0; j<n; j++) {
                    sumsup2 += arr[i][j]; 
                }
                n--;
        } 
    std::cout << "Sup_Sum2 = " << sumsup2 << std::endl;
    int sumsub2=0, m=0;
   for(int i=4; i>0; i--) {
        for(int j=4; j>m; j-- ) {
                sumsub2 += arr[i][j];
            }
            m++;
       }
     std::cout << "Sub_Sum2 = " << sumsub2 << std::endl;   

}
