#include <iostream>
#include <vector>
using namespace std;

struct s_data
{
    string name;
    int start, end, length;

    void input()
    { cin >> start >> end >> name >> length; }
};

struct c_data
{
    vector <string> name;

    void input(int size)
    {
        name.reserve(size);
        for (int i = 0; i < size; ++i)
        { cin >> name[i]; }
    }
};

int main()
{
    unsigned int D, I, S, C, P;
    cin >> D >> I >> S >> C >> P;

    vector <s_data> street(S);
    vector <c_data> car(C);

    for (int i = 0; i < S; ++i)
    { street[i].input(); }

    for (int i = 0, temp; i < C; ++i)
    {
        cin >> temp;
        car[i].input(temp);
    }

    return 0;
}
