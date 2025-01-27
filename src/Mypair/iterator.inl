#pragma once
#include "MyNode.inl"

template <typename T>
class Iterator {
	MyNode<T>* current;
public : 
	Iterator(MyNode<T>* _current);
	const Iterator<T>& operator ++();
	const Iterator<T>& operator --();
	const T& operator *() const;
	bool operator==(const Iterator<T>& other) const;
	bool operator!=(const Iterator<T>& other) const;
};

template <typename T>
Iterator<T>::Iterator(MyNode<T>* _current) : current(_current) {

}

template <typename T>
const Iterator<T>& Iterator<T>::operator ++() {
	current = current->next;
	return *this;
	//std::cout << current << std::endl;
}

template <typename T>
const Iterator<T>& Iterator<T>::operator--() {
	current = current->prev;
	return *this;
}

template <typename T>
const T& Iterator<T>::operator*() const{
	return current->value;
}

template <typename T>
bool Iterator<T>::operator==(const Iterator<T>& other) const {
	return this->current == other.current;
}

template <typename T>
bool Iterator<T>::operator!=(const Iterator<T>& other) const {
	return this->current != other.current;
}
