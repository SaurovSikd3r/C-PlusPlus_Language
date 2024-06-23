#include<iostream>
using namespace std;
class Addition{
    private:
    int n1, n2;
    public:
    //setter
    void setvalue (int x, int y)
    {
        n1 = x;
        n2 = y;
    }
    //getter
    int getvalue()
    {
        return 0;
    }
};
int main(){
    int a, b;
    cout << "Enter Values:" << endl;
    cin >>a>>b;
    Addition sum;
    sum.setvalue(a,b);
    sum.getvalue();
    cout<<sum.getvalue();

};
