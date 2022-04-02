#include <iostream>
#include<memory>
#include"Pair.h"
#include"Data.h"
#include"DB.h"
using namespace std;

int main()
{


           //Persona 1
           shared_ptr<Pair<string, string>> pair1 = make_shared<Pair<string, string>>(Pair<string,string>{"nombre", "Julian"});
           shared_ptr<Pair<string, string>> pair2 = make_shared<Pair<string, string>>(Pair<string,string>{"apellido", "Santurche"});
           shared_ptr<Pair<string, string>> pair3 = make_shared<Pair<string, string>>(Pair<string,string>{"telefono ", "32323232"});


           //Persona 2
           shared_ptr<Pair<string, string>> pair4 = make_shared<Pair<string, string>>(Pair<string,string>{"nombre: ", "Alberto"});
           shared_ptr<Pair<string, string>> pair5 = make_shared<Pair<string, string>>(Pair<string,string>{"apellido", "valero"});
           shared_ptr<Pair<string, string>> pair6 = make_shared<Pair<string, string>>(Pair<string,string>{"telefono", "12345644"});

           //Persona 3
           shared_ptr<Pair<string, string>> pair7 = make_shared<Pair<string, string>>(Pair<string,string>{"nombre: ", "Julian"});
           shared_ptr<Pair<string, string>> pair8 = make_shared<Pair<string, string>>(Pair<string,string>{"apellido", "Romeva"});
           shared_ptr<Pair<string, string>> pair9 = make_shared<Pair<string, string>>(Pair<string,string>{"telefono", "12345644"});
           shared_ptr<Pair<string, string>> pair10 = make_shared<Pair<string, string>>(Pair<string,string>{"DNI: ", "23232334J"});

           //Persona 4
           shared_ptr<Pair<string, string>> pair11 =make_shared<Pair<string, string>>(Pair<string,string>{"nombre", "Lucrecia"});
           shared_ptr<Pair<string, string>> pair12 = make_shared<Pair<string, string>>(Pair<string,string>{"apellido", "Aveces"});
           shared_ptr<Pair<string, string>> pair13 = make_shared<Pair<string, string>>(Pair<string,string>{"email", "lalucre@gmail.com"});

            shared_ptr<Data<std::string, std::string>>data1 = make_shared<Data<string,string>>(Data<std::string, std::string>{});
            data1->insert(pair1);
            data1->insert(pair2);
            data1->insert(pair3);

            shared_ptr<Data<std::string, std::string>>data2 = make_shared<Data<string,string>>(Data<std::string, std::string>{});
            data2->insert(pair4);
            data2->insert(pair5);
            data2->insert(pair6);

            shared_ptr<Data<std::string, std::string>>data3 = make_shared<Data<string,string>>(Data<std::string, std::string>{});
            data3->insert(pair7);
            data3->insert(pair8);
            data3->insert(pair9);
            data3->insert(pair10);

            shared_ptr<Data<std::string, std::string>>data4 = make_shared<Data<string,string>>(Data<std::string, std::string>{});
            data4->insert(pair11);
            data4->insert(pair12);
            data4->insert(pair13);

            DB<string, string> db;
            db.insert(data1);
            db.insert(data2);
            db.insert(data3);
            db.insert(data4);

            cout << db ;






        return 0;
    }
