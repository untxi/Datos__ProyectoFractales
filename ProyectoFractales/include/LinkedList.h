#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <Node.h>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <sstream>
#include <iostream>

using namespace std;
template <typename E>
class LinkedList{
    private:
        Node<E> *head;
        Node<E> *tail;
        Node<E> *current;
        int size;
    public:
        LinkedList(){
            head = new Node<E>;
            tail = head;
            current = head;
            size = 0;
        }
        virtual ~LinkedList(){
            clear();
            delete head;
        }
        void insert(E pElement){
            current->next = new Node<E>(pElement, current->next);
            if(current == tail){
                tail = tail->next;
            }
            size++;
        }
        void append(E pElement){
            tail->next = new Node<E>(pElement);
            tail = tail->next;
            size++;
        }
        E remove() throw (runtime_error){
            if(size == 0){
                throw runtime_error("Lista vacia");
            }
            if(current==tail){
                throw runtime_error("Tiene una posicion erronea");
            }
            E res = current->next->element;
            Node<E> *temp = current->next;
            current->next = current->next->next;
            if(temp == tail) {
                tail = current;
            }
            delete temp;
            size--;
            return res;
        }
        void clear(){
            while (head->next != NULL){
                current = head->next;
                head->next = head->next->next;
                delete current;
            }
            tail = current = head;
            size = 0;
        }
        E getElement() throw (runtime_error){
            if(size==0){
                throw runtime_error("Lista vacia"); }
            if(current == tail){
                throw runtime_error("No hay elementos"); }
            std::cout << current->next->element;
            return current->next->element;
        }
        void goToStart(){
            current = head;
        }
        void goToEnd(){
            current = tail;
        }
        void goToPos(int pPos) throw (runtime_error){
            if(pPos<0 || pPos > size){
                throw runtime_error("Posicion invalida");
            }
            current = head;
            for(int i = 0; i < pPos; i++){
                current = current->next;
            }
        }
        void next(){
            if(current->next != NULL){
                current = current->next;
            }
        }
        void previous(){
            if (current != head){
                Node<E> *temp = head;
                while(temp->next != current){
                    temp = temp->next;
                }
                current = temp;
            }
        }
        int getPos(){
            int pos = 0;
            Node <E> *temp = head;
            while(temp != current){
                pos++;
                temp = temp->next;
            }
            return pos;
        }
        int getSize(){
            return size;
        }
};


#endif // LINKEDLIST_H
