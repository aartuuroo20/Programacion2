#include <iostream>
using namespace std;

class Person{
public:
    Person(){

    }
    string getName() const{
        return name;
    }
    unsigned short int getAge() const{
        return age;
    }
    unsigned short int getWeight() const{
        return weight;
    }
    void setName(string const & _name){
        name = _name;
    }
    void setAge(unsigned short int _age){
        if (_age > 150){
            cout << "There must be a mistake, your age cannot be " << _age
                 << " . I'll set your age to 0"
                 << endl;
            age = 0;
        }else{
            age = _age;
        }
    }
    void setWeight(unsigned short int _weight){
        if (_weight > 200){
            cout << "There must be a mistake, your weight cannot be more than " << _weight
                 << " . I'll set your weight to 0"
                 << endl;
            weight = 0;
        }else{
            weight = _weight;
        }
    }
private:
    string name;
    unsigned short int age;
    unsigned short int weight;
};
int main()
{
    Person someBody;
        try{
            cout << "Please introduce your name: ";
            string name;
            cin >> name;
            someBody.setName(name);
            cout << "Please introduce your age: ";
            unsigned short int age;
            cin >> age;
            someBody.setAge(age);
            cout << "Please introduce your weight: ";
            unsigned short int weight;
            cin >> weight;
            someBody.setWeight(weight);
        }catch(string msg){//Corta el programa donde haya habido un error y no lo ejecuta
            cout << msg << "\n";
            return 1;
    }

        return 0;
}
