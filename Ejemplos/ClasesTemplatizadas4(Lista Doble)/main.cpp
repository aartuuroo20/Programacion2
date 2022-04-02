#include <iostream>
#include <memory>
#include <functional>
using namespace std;

template <typename T>
class ElemDoble{
    friend std::ostream & operator << (std::ostream & os, ElemDoble<T> c);
public:
    ElemDoble(T const & elem);
    T getData() const;
    void push_back(T const & e);

    shared_ptr<ElemDoble<T>> getNext() const;
    shared_ptr<ElemDoble<T>> setNext (shared_ptr <ElemDoble<T> > n);

    shared_ptr<ElemDoble<T>> getPrev() const;
    shared_ptr<ElemDoble<T>> setPrev (shared_ptr<ElemDoble<T>> n);
private:
    T elem;
    shared_ptr<ElemDoble<T>> next;
    shared_ptr<ElemDoble<T>> prev;

};
template <typename T>
std::ostream & operator << (std::ostream & os, ElemDoble<T> c){
    os << *c.elem << endl;
    return os;
}

template<typename T>
ElemDoble<T>::ElemDoble(const T &elem):elem{elem}{
    next = nullptr;
}

template<typename T>
T ElemDoble<T>::getData() const
{
    return elem;
}

template<typename T>
void ElemDoble<T>::push_back(const T &e)
{
    if(next==nullptr) next = make_shared<ElemDoble<T>>(e);
    else next->push_back(e);
}

template<typename T>
shared_ptr<ElemDoble<T> > ElemDoble<T>::getNext() const
{
    return next;
}

template<typename T>
shared_ptr<ElemDoble<T> > ElemDoble<T>::setNext(shared_ptr<ElemDoble<T> > n)
{
 next = n;
 return next;
}

template<typename T>
shared_ptr<ElemDoble<T> > ElemDoble<T>::getPrev() const
{
    return prev;
}

template<typename T>
shared_ptr<ElemDoble<T> > ElemDoble<T>::setPrev(shared_ptr<ElemDoble<T> > n)
{
    prev = n;
    return prev;
}

template <typename T>
void print(ElemDoble<T> e){
    cout << e.getData() << endl;
    if(e.getNext()) print <T>(*(e.getNext()));
}

template <typename T>
void print_reverse(ElemDoble<T> e){
    shared_ptr<ElemDoble<T>>last;

    if(e.getNext()){
        last=e.getPrev();
        cout << e.getPrev() << endl;
        print_reverse<T>(*(e.getPrev()));

    }


}
template <typename T>
void for_each(T const & v, function<void (const T &)> &action){
      auto iterator = v.getData();
      while(iterator != nullptr){
          action(iterator->dato);
          iterator = iterator->next;
      }
  }
int main(){
    /*Elem<int>lista1=Elem<int>{1};
       lista1.push_back(2);
       lista1.push_back(3);
       print(lista1);
       lista1.for_each(print1);*/

       ElemDoble<int> lista = ElemDoble<int>{1};
       lista.push_back(2);
       lista.push_back(3);
       print(lista);

       cout << "Reverse: " << endl;
       print_reverse(lista);
}

