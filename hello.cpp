#include "iostream"
using namespace std;
int main()
{
    static int s=0;
    cout<<"hello world";
    s= (int) getchar();
    printf("%d",s);
    getchar();
    getchar();
    return 0;
}