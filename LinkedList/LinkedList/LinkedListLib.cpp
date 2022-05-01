#include "LinkedListLib.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	/*
	Node* newhead = new Node();
	newhead->data = element;
	newhead->next = this->head;
	head = newhead;
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;*/
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

void LinkedList::insert(int element, int index)
{
	if (index == count)
	{
		return pushTail(element);
	}
	if (index == 0)
	{
		return pushHead(element);
	}
	//move pointer at the element with index - 1
	Node* temp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		temp = temp->next;
	}

	temp->next = new Node(element, temp->next);
	++count;
}

int LinkedList::extract(int index)
{
	if (index == 0)
	{
		return popHead();
	}
	if (index == count)
	{
		return popTail();
	}

	Node* temp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		temp = temp->next;
	}
	Node* k = temp->next;
	int toReturn = k->data;
	temp->next = k->next;
	k->~Node();
	--count;
	return toReturn;
}

void LinkedList::swap(int index1, int index2)
{
	Node *tmp1 = (*this)[index1];
	Node *tmp2 = (*this)[index2];
	int val = tmp1->data;
	tmp1->data = tmp2->data;
	tmp2->data = val;
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}

Node*& LinkedList::operator[](int pos)
{
	Node* temp = this->head;
	for (int i = 0; i < pos; ++i)
	{
		temp = temp->next;
	}
	return temp;
}
