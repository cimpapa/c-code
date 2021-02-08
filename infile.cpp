//本实验可以顺利按照顺序读取文本文档中的数据，并进行一定的数值计算，可以根据文件名来检索
//主要用到几种判断语句
//第一判断是否能都打开文件
//第二判断是否到结尾
//第三判断是否是由于类型不匹配导致失败

#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "Please enter the filename: \n";
    cin.getline(filename,SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        getchar();
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while (inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
        else if (inFile.fail())
        cout << "Input terminated by input dismatch.\n";
        if (count == 0)
        cout << "No data processed.\n";
        else
        {
            cout << "Iterms read: " << count << endl;
            cout << "Sum: " << sum << endl;
            cout << "Average: " << sum/count << endl;
        }
        inFile.close();
        getchar();
        return 0;
        
}