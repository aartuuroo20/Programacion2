#include <iostream>
#include <memory>

using namespace std;

struct Complejo{
    float real, im;
};
//Lista enlazada simple, templatizada
template <typename T>
class Elem{
public:
    Elem(T const & elem);
    T getData() const;
    shared_ptr<Elem<T>> getNext() const;
    shared_ptr<Elem<T>> setNext (shared_ptr <Elem <T> > n);
    T getModule();
private:
    T elem;
    shared_ptr<Elem<T>> next;
};

template <typename T>
Elem<T>::Elem(T const & elem): elem{elem}{
    next = nullptr;
}

template<typename T>
T Elem<T>::getData() const
{
    return elem;
}

template<typename T>
shared_ptr <Elem<T>> Elem<T>::getNext() const
{
    return next;
}

template<typename T>
shared_ptr< Elem<T>> Elem<T>::setNext(shared_ptr<Elem<T> > n)
{
    next = n;
    return next;
}





int main(){

    Elem<int> first = Elem<int>{1};
    auto last = first.setNext(make_shared<Elem<int>>(2)); //COn el last tienes la referencia al ultimo
    last = last->setNext(make_shared<Elem<int>>(3));
    last = last->setNext(make_shared<Elem<int>>(4));
    last = last->setNext(make_shared<Elem<int>>(5));

}
