#include <iostream>
#include <string>
#include <memory>
#include "node.h"

using namespace std;

int main()
{

    auto parada1 = make_shared<Node<string>>( Node<string>{ make_shared<string>("Pavones") } );
    auto parada2 = make_shared<Node<string>>( Node<string>{ make_shared<string>("Artilleros") } );
    auto parada3 = make_shared<Node<string>>( Node<string>{ make_shared<string>("Vinateros") } );
    auto parada4 = make_shared<Node<string>>( Node<string>{ make_shared<string>("Estrella") } );

    parada1->addNeighbour(parada2);
    parada2->addNeighbour(parada1);

    parada2->addNeighbour(parada3);
    parada3->addNeighbour(parada2);

    parada3->addNeighbour(parada4);
    parada4->addNeighbour(parada3);

    auto it = parada1;
    auto last = parada1;

    while(it){
        string este = *(it->getData());
        string anterior = *(last->getData());

        cout << este << " - ";
        auto neighbours = it->getNeighbours();

        for(auto const & elem: neighbours){
            if(*(elem->getData()) != anterior){
                last = it;
                it = elem;
                break;
            }
        }
        if(este == *(it->getData())) break;
    }

    std::cout << "\n";

    return 0;
}
