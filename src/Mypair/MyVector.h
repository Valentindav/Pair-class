#pragma once
#include "iterator.inl"

template <typename T>
class MyVector
{
	MyNode<T>* current;
	Iterator<T> Begin;
	Iterator<T> End;
public : 
	MyVector();
	void Push_Back(MyNode<T>* _current);
	float size();
	int begin();
	//const MyVector<T>& operator[] ();
};

template <typename T>
MyVector<T>::MyVector() {

}

template <typename T>
void MyVector<T>::Push_Back(MyNode<T>* _current) {
	if (Begin == nullptr) {
		Begin == _current;
	}
	else {

	}
}

template <typename T>
float MyVector<T>::size() {
	int size = End * T;
	std::cout<< size
}

template <typename T>
int MyVector<T>::begin() {

}

/*template <typename T>
const MyVector<T>& MyVector<T>::operator[] () {

}*/

