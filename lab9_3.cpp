#include <iostream>
#include <string>
using namespace std;

   
int main(){
    int age, Height, money;
    string sum;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> Height;

            if(Height < 100){
                sum = "Chopper";

            }else if(Height < 180){
                sum = "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> money;

                if(money > 1100000000){
                    sum = "Zoro";
                }else{
                    sum = "Sanji";
                }
            }
    }else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> money;

        if(money > 500000000){
            sum = "Jinbe";
        }else{
            sum = "Franky";
        }

    }else{
         sum = "Brook";
    }


cout << "Your character = " << sum;
}


