#include <iostream>
#include <string>
struct person {
	std::string firstname;
    std::string lastname;
    int age;
    std::string gender;
    bool status;
};
void printinfo(struct person obj) {
    std::cout << obj.firstname << " " << obj.lastname << " " << obj.age << " " << obj.gender << " " << obj.status << std::endl; 
        }
int main() {
    std::cout << "This is a list of traing students:" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    
  person obj[]={person{"Arpine", "Harutyunyan", 23, "Female",  },
  person{"Nvard", "Harutyunyan", 19, "Female", "student"},
  person{"Ani", "Hakobyan", 19, "Female", "student"},
  person{"Mariam", "Karapetyan", 20, "Female", "student"},
  person{"Lilit", "Melkumyan", 19, "Female", "student"},
  person{"Nona", "Muasaelyan", 19, "Female", "student"},
  person{"Sasha", "Avagyan", 19, "Male", "student"},
  person{"Artur", "Gasparyan", 25, "Male", },
  person{"Hrach", "Gevorgyan", 21, "Male", "student"},
  person{"Tigran", "Hovhannisyan", 21, "Male", "student"},
  person{"Michael", "Sargsyan", 17, "Male", "student"},
  person{"Armen", "Abrahamyan", 21, "Male", "student"},
  person{"Edgar", "Grigoryan", 17, "Male", "student"}
  };
  
  for(int i=0; i<13; i++) {
        std::cout << obj[i].firstname << " " << obj[i].lastname << std::endl;
      }
  
  std::string name;
  std::cout << "--------------------------------------------------------" << std::endl;
  std::cout << "If you want to know more about someone, you may enter his/her name here:  ";
  std::cin >> name;
  for(int i=0; i<13; i++) {
        if(name==obj[i].firstname) {
                printinfo(obj[i]);
            }
      }
  
}
