// CLASE
#include "Node.h"
#include <stdexcept>
using namespace std;

template <typename E>
class LinkedList {
	// Atributos Privados
	private:
	    Node<E>* head;
	    Node<E>* tail;
	    Node<E>* current;
	    int size;
	// CREA NODO
	Node<E>* searchPrevious(Node<E>* pNode)
	{
        if (current == head) {return NULL;}
        Node<E> *res = head;
        while (res->next != current) {res = res->next;}
        return res;
    }
	// Métodos Públicos
	public:
		// CONSTRUCTOR
	    LinkedList()
	    {
	        head = tail = current = new Node<E>();
	        size = 0;
	    }
	    // DESTRUCTOR
	    ~LinkedList()
	    {
	        clear();
	        delete head;
	    }
	    // CLEAR
	    void clear()
	    {
	        current = head;
	        while (head != NULL)
	        {
	            head = head->next;
	            delete current;
	            current = head;
	        }
	        head = tail = current = new Node<E>();
	        size = 0;
	    }
		// INSERT
		void insert(E pElement)
		{
			size++;
			current->next = new Node<E>(pElement, current->next);
			if (current == tail) {tail = tail->next;}
		}
	    //APPEND
	    void append(E pElement)
	    {
	        tail->next = new Node<E>(pElement);
	        tail = tail->next;
	        size++;
	    }
	    // GET ELEMENTS
	    E getElements() throw (runtime_error)
	    {
			if (size == 0){throw runtime_error ("Lista vacía");}
			if (current == tail){throw runtime_error ("No hay element");}

			return current->next->element;
		}
		// NEXT
		void next()
		{
			if (current->next != NULL)
				{
					current = current->next;
				}
		}
		// PREVIOUS
		void previous()
		{
			if(current != head)
			{
				Node<E>*temp = head;
				while (temp->next = current){temp = temp->next;}
				current = temp;
			}
		}
		// GoToStart()
		void goToStar(){current = head;}
		// GoToEnd()
		void goToEnd(){current = tail;}
		// Go To Pos(int pPos)
		void goToPos(int pPos) throw (runtime_error)
		{
			// Que la posición no sea mayor a la lista
			if (pPos < 0 || pPos > size){throw runtime_error("Posción inválida") ;}
			// Para que current = pPost tiene que
			current = head;
			for (int i = 0; i< pPos; i++){current = current->next;}
		}
		// int getSize()
		int getSize(){return size;}
		// int getPos()
		int getPos(){return current;}
};
