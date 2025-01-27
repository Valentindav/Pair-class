#include "pch.h"
#include "main.h"
#include "MyPair.inl"
#include "MyNode.inl"
#include "iterator.inl"
#include "MyVector.h"

int main()
{
	//std::pair <std::string, float> Père("Carrote", 2.3);
	//std::cout << Père.first << " " << Père.second << std::endl;
	//Père.swap(Père);
	//MyPair<std::string ,int> pair(" this is my pair class", 6);
	//pair.getValueOne();
	//pair.getValueTwo();

	MyNode<int> strs(10);
	MyNode<int> strs2(6);
	MyNode<int> strs3(13);

	strs.next = &strs2;

	strs2.prev = &strs;
	strs2.next = &strs3;

	strs3.prev = &strs2;

	for (MyNode<int>* t = &strs; t != nullptr; t = t->next) {
		std::cout << t->value << std::endl;
	}

	Iterator ite(&strs);
	std::cout << *ite << std::endl;
	++ite;
	std::cout << *ite << std::endl;
	++ite;
	std::cout << *ite << std::endl;
	--ite;
	std::cout << *ite << std::endl;

	MyVector<int> vec;
	vec.Push_Back(10);
	vec.Push_Back(20);
	vec.Push_Back(30);
	std::cout << "Vector size: " << vec.size() << std::endl;

	for (Iterator<int> it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return 0;
}
