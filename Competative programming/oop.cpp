#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int age;
    int wheel;
    Car(string name, int age, int wheel){
        this->name = name;
        this->age =age;
        this->wheel = wheel;
    }
    int get(){
        return age--;
    }
};
void changeCar(Car c){
    c.age =10;
}
void print(Car c){
    cout << c.name <<" " << c.age << " " << c.wheel << "\n";
}
int main(){
    Car c1("name",11,23);
    Car *a = &c1;



    print(c1);
    cout << c1.get();
    print(c1);


    


    return 0;
}