#include<iostream>
using namespace std;

class Select
{
    short int list[30];
    short unsigned int N;
    void sort();
    void show();
public:
    Select();
};

Select::Select()
{
    cout << "Enter the number of elements in the array" << endl;
    cin >> N;
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> list[i];
    }
    sort();
    show();
}

void Select::sort()
{
    int min, index, temp;
    for (int i = 0; i < N; i++)
    {
        index = i;
        min = list[i];
        for (int j = i + 1; j < N; j++)
        {
            if (min > list[j])
            {
                min = list[j];
                index = j;
            }
        }
        temp = list[index];
        list[index] = list[i];
        list[i] = temp;
    }
}

void Select::show()
{
    cout << "The sorted array is:";
    for (int i = 0; i < N; i++)
    {
        cout << list[i] << " ";
    }
}

int main()
{
    Select S;
}
