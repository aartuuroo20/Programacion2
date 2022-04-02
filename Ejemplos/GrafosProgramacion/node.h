#ifndef NODE_H
#define NODE_H


#include <memory>
#include <set>
using namespace std;

template<class T>
class Node
{
public:
    Node(shared_ptr<T> data):data{data}{};
    shared_ptr<T> getData() const;
    void setData(shared_ptr<T> d);
    void addNeighbour(shared_ptr<Node<T>> n);
    set<shared_ptr<Node<T>>> getNeighbours() const;

private:
    shared_ptr<T> data;
    set<shared_ptr<Node<T> > > neighbours;
};

template<class T>
std::shared_ptr<T> Node<T>::getData() const
{
    return data;
}

template<class T>
void Node<T>::setData(std::shared_ptr<T> d)
{
    data = d;
}

template<class T>
void Node<T>::addNeighbour(std::shared_ptr<Node<T> > n)
{
    neighbours.insert(n);
}

template<class T>
std::set<std::shared_ptr<Node<T> > > Node<T>::getNeighbours() const
{
    return neighbours;
}


#endif // NODE_H
