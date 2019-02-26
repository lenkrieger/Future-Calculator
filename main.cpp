#include <iostream>

using namespace std;

class A1{
    public: 
     float a1;
     float a2;
    
    void tail(){
        cout << "\nВведите два числа: ";
        cin >> a1 >> a2;
        }; 
    
};

class Dodavanie : public A1{
    public:
     float s;
     void summa(){
        cout << "-----Вы выбрали сумму-----";
        tail();
        s = a1 + a2;
        cout << "\n-----Ответ: " << s << " -----";
     };
    
};
