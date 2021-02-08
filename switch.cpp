//这是关于swtich语句的练习程序
//输入特定的数字可以输出不同的结果


#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();

int main()
{
    showmenu();
    int choice;
    cin>>choice;
    while(choice != 5)
    {
        switch (choice)
        {
        case 1: cout<<"\a\n";
                break;
        case 2: report();
                break;
        case 3: cout<<"the boss was in all day.\n";
                break;
        case 4: comfort();
                break;
        
        default:
            cout<<"That's not a choice!\n";
        }
        showmenu();
        cin>>choice;

        /*
        问题：  当输入为字符的时候会出错！！！
         解答：  因为输入时会敲下回车建，所以比如你输入p然后回车，
                在输入队列中就有p和回车，因为p的ascll码是1110000，
                所以p就被当作一个负数，从而显示error，然后又遇到cin>>a，
                所以输入队列中的回车就会遇上被输入到a里。由于回车不是int类型。
                所以相当与将空字符输进a里，但是回车还是留在输入队列中，永远跳不过去这个循环。
                可以使用cin.get()将输入队列中的回车丢弃。
        */
    }
    cout<<"Bye!\n";
    return 0;
}

void showmenu()
{
    cout<< "please enter 1,2,3,4,or 5:\n"
            "1) alarm       2) report\n"
            "3) alibi       4) comfort\n"
            "5) quit\n";
}

void report()
{
    cout<< "It's been an excellent week for business.\n"
            "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort()
{
    cout<< "Your employees think you are the finest CEO\n"
            "in the industry. The board of directors think\n"
            "you are the finest CEO in the industry.\n";

}