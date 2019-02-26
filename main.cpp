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

class Otnimanie : public A1{
    public:
     float m;
     void minus(){
        cout << "-----Вы выбрали разницу-----"; 
        tail();
        m = a1 - a2;
        cout << "\n-----Ответ: " << m << " -----";
     };
    
};
class Umnizenie : public A1{
    public:
     float p;
     void umn(){
        cout << "-----Вы выбрали умножение-----";
        tail();
        p = a1 * a2;
        cout << "\n-----Ответ: " << p << " -----";
     };
    
class Srednia : public A1{
    public:
     float k;
     void sre(){
        cout << "-----Вы выбрали деление-----";
        tail();
        k = (a1 + a2)/2;
        cout << "\n-----Ответ: " << k << " -----";
     };
    
};
    
class Delenie : public A1{
    public:
     float i;
     void del(){
        cout << "-----Вы выбрали деление-----";
        tail();
        i = a1 / a2;
        cout << "\n-----Ответ: " << i << " -----";
     };
    
};

int main()
{   int o1;

Dodavanie Dod;
Otnimanie Otn;
Umnizenie Umn;
Delenie Del;
Srednia Ser;



    cout << "Канкулятор\n";
    cout << "-----MENU-----\n";
    cout << "1.Сумма\n";
    cout << "2.Разница\n";
    cout << "3.Умножение\n";
    cout << "4.Деление\n";
    cout << "5.Среднее двух чисел\n";
    cout << "0.Выйти из программы\n\n";
    
    cin >> o1;

switch(o1)
    {
        case 1:
           Dod.summa();
            break;
        case 2:
           Otn.minus();
            break;
        case 3:
           Umn.umn();
            break;
        case 4:
           Del.del();
            break;
        case 5:
           Ser.sre();
            break;
        case 0:
            break;
            
        default: 
           cout << "Данная опция отсутствует...\n";
            break;
    }

    return 0;
}
