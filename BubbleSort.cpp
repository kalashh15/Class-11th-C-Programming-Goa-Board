#include<iostream>
using namespace std;
class Bubble
{
    short unsigned int list[30];
    short unsigned int N;
    void sort();
    void show();
public:
    Bubble();
};

Bubble::Bubble()
{
    cout<<"Enter no. of elements in the array"<<endl;
    cin>>N;
    cout<<"Enter elements int the array"<<endl;
    for(int i=0;i<N;i++)
        cin>>list[i];
    sort();
    show();
}

void Bubble::sort()
{
    int temp;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(list[j]>list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
}
void Bubble::show()
{
    for(int i=0;i<N;i++)
        cout<<list[i]<<" ";
}
int main()
{
    Bubble Obj;
}
