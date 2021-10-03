#include <iostream>
#include <stack>


using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;
    cin >> x;

    stack<int> st;

    for (int i = 1; i * i <= x; i++)
    {
        if (i * i == x)
        {
            cout << i << " ";
        }
        else if ((x % i) == 0)
        {
            cout << i << " ";
            st.push(x / i);
        }
    }

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return EXIT_SUCCESS;
}