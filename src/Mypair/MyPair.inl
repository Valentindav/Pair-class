#pragma once
#include <iostream>

template <typename T,typename U>
class MyPair {

T ValueOne;
U ValueTwo;

public:
	MyPair(const T& _ValueOne, const U& _ValueTwo);
const T& getValueOne() const;
const U& getValueTwo() const;
};

template <typename T, typename U>
MyPair<T, U>::MyPair(const T& _ValueOne, const U& _ValueTwo) : ValueOne(_ValueOne), ValueTwo(_ValueTwo) {

}

template <typename T, typename U>
const T& MyPair<T,U>::getValueOne() const {
	std::cout << ValueOne << std::endl;
	return ValueOne;
}

template <typename T, typename U>
const U& MyPair<T,U>::getValueTwo() const {
	std::cout << ValueTwo << std::endl;
	return ValueTwo;
}



