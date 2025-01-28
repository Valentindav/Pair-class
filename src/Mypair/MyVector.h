#pragma once
#include "iterator.inl"
#include <iostream>

template <typename T>
class MyVector {
	MyNode<T>* Begin;
	MyNode<T>* End;
	size_t Count;

public:
	MyVector();
	void Push_Back(const T& value);
	size_t size() const;
	Iterator<T> begin() const;
	Iterator<T> end() const;
	const T& operator[](size_t index) const;
};
template <typename T>
MyVector<T>::MyVector() : Begin(nullptr), End(nullptr), Count(0) {}

template <typename T>
void MyVector<T>::Push_Back(const T& value) {
    MyNode<T>* newNode = new MyNode<T>(value);
    if (End == nullptr) { // Si le vecteur est vide
        Begin = End = newNode;
    }
    else {
        End->next = newNode;
        newNode->prev = End;
        End = newNode;
    }
    ++Count;
}

template <typename T>
size_t MyVector<T>::size() const {
    return Count;
}

template <typename T>
Iterator<T> MyVector<T>::begin() const {
    return Iterator<T>(Begin);
}

template <typename T>
Iterator<T> MyVector<T>::end() const {
    return Iterator<T>(nullptr); // Fin du vecteur (null)
}

template <typename T>
const T& MyVector<T>::operator[](size_t index) const {
    if (index >= Count) {
        std::cout << "out_of_range(Index hors limites)";
    }
    MyNode<T>* current = Begin;
    for (size_t i = 0; i < index; ++i) {
        current = current->next;
    }
    return current->value;
}