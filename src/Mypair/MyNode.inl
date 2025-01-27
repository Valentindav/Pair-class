#pragma once

template <typename T>
struct MyNode
{
	T value;
	MyNode<T>* next;
	MyNode<T>* prev;
	MyNode(const T& _value) : value(_value), next(nullptr), prev(nullptr) {}
};