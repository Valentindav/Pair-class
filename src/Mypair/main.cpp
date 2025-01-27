#include "pch.h"
#include "main.h"
#include "MyPair.inl"
#include "MyNode.inl"
#include "iterator.inl"
#include "MyVector.h"

int main()
{
	//std::pair <std::string, float> P�re("Carrote", 2.3);
	//std::cout << P�re.first << " " << P�re.second << std::endl;
	//P�re.swap(P�re);
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
	MyVector vec;
	

	return 0;
}
