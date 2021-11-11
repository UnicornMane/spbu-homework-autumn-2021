#include <iostream>

template<typename any>
void my_swap(any& a, any& b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

template<typename any>
any min(any f, any s)
{
	if (f < s)
		return f;
	return s;
}

template<typename any>
any maxF(any f, any s)
{
	if (f > s)
		return f;
	return s;
}

template<typename any>
class dynamic_array
{
private:
	int m_size;
	int m_capacity;
	any* m_data;
public:
	dynamic_array()
	{
		m_size = 0;
		m_capacity = 0;
		m_data = nullptr;
	}
	dynamic_array(int n)
	{
		m_size = n;
		m_data = new any[n];
	}
	~dynamic_array()
	{
		if (m_data)
			delete[] m_data;
	}

	int size()
	{
		return m_size;
	}

	any& operator[] (int i)
	{
		return m_data[i];
	}

	void resize(int newsize)
	{
		if (newsize <= m_capacity)
		{
			m_size = newsize;
			return;
		}

		int newcapacity = maxF(newsize, m_size * 2);
		any* new_data = new any[newcapacity];
		int i;
		for (i = 0; i < min(m_size, newsize); ++i)
			new_data[i] = m_data[i];
		for (; i < newsize; ++i)
			new_data[i] = any();
		delete[] m_data;
		m_data = new_data;
		m_size = newsize;
		m_capacity = newcapacity;
	}

	void push_back(any val)
	{
		resize(m_size + 1);
		m_data[m_size - 1] = val;
	}

	void insert(int pos, any val)
	{
		resize(m_size + 1);
		for (int i = m_size - 1; i > pos; --i)
		{
			m_data[i] = m_data[i - 1];
		}
		m_data[pos] = val;
	}

	void pop_back()
	{
		m_data[m_size - 1] = any();
		m_size--;
	}

	void pop_front()
	{
		for (int i = 0; i < m_size - 1; ++i)
		{
			m_data[i] = m_data[i + 1];
		}
		m_size--;
	}

	void reverse()
	{
		for (int i = 0; i < m_size / 2; ++i)
		{
			my_swap(m_data[i], m_data[m_size - 1 - i]);
		}
	}
};

//void dynamic_array::max(dynamic_array& a)
template <typename any>
any max(dynamic_array<any>& a)
{
	int tmp = a[0];
	for (int i = 1; i < a.size(); ++i)
	{
		if (a[i] > tmp)
			tmp = a[i];
	}
	return tmp;
}

template<typename T>
void sort(dynamic_array<T>& a)
{
	for (int i = a.size(); i > 0; --i)
		for (int j = 1; j < i; ++j)
			if (a[j - 1] > a[j])
				std::swap(a[j - 1], a[j]);
}

template <typename any>
std::ostream& operator << (std::ostream& out, dynamic_array<any>& a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		out << a[i] << " ";
	}
	//out << std::endl;
	return out;
}

template <typename any>
dynamic_array<any>& operator + (dynamic_array<any>& a, dynamic_array<any>& b)
{
	int tmp = a.size();
	a.resize(a.size() + b.size());
	int i = 0;
	while (tmp != a.size())
	{
		a[tmp] = b[i];
		i++;
		tmp++;
	}
	return a;
}

template <typename T>
class Stack : public dynamic_array<T>
{
public:
	void push(T val)
	{
		this->push_back(val);
	}

	T top()
	{
		return (*this)[this->size() - 1];
	}

	void pop()
	{
		this->resize(this->size() - 1);
	}

	bool empty()
	{
		return this->size() == 0;
	}

};

int main(int argc, char* argv[])
{
	dynamic_array<int> f;
	int capacity = 0;
	int size = 0;


	while (true)
	{
		int com = 0;
		int tmp = 0;

		std::cin >> com;
		switch (com)
		{
		case 0:
			return EXIT_SUCCESS;

		case 1:
			std::cout << f;
			break;

		case 2:
			std::cin >> tmp;
			f.push_back(tmp);
			break;

		case 3:
			std::cin >> tmp;
			f.insert(0, tmp);
			break;

		case 4:
			f.pop_back();
			break;

		case 5:
			f.pop_front();
			break;

		case 6:
			f.reverse();
			break;

		default:
			return EXIT_SUCCESS;
		}
	}

	std::cout << std::endl;
}