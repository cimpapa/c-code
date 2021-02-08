//本实验可以实现记录个人信息然后求出理想体重的功能，并将个人信息写入(id.txt)文件中
//以后可以修改文件名，自动保存为以姓名为文件名。


#include <iostream>
#include <fstream>

int main()
{
    using namespace std;

    char name[50];
    int year,month;
    double a_weight, b_weight,height;

    ofstream outFile;
    outFile.open("id.txt");

    cout << "Enter your name: \n";
    cin.getline(name,50);
    cout << "enter your birth year: \n";
    cin >> year;
    cout << "Enter your birth month: \n";
    cin >> month;
    cout << "Enter your weight: \n";
    cin >> a_weight;
    cout << "Enter your height(cm): \n";
    cin >> height;
    b_weight = 0.7 * (height-80);

    //display the information on the screen with cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "name: " << name << endl;
    cout << "Year: " << year << " 年" << endl;
    cout << "Month: " << month << " 月" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Nowdays weight: " << a_weight << " kg" << endl;
    cout << "Ideal weight: " << b_weight << " kg" << endl;

    //write the same information in the outFile
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Your name: " << name << endl;
    outFile << "Year: " << year << " 年" << endl;
    outFile << "Month: " << month << " 月" << endl;
    outFile << "Height: " << height << " cm" << endl;
    outFile << "Nowdays weight: " << a_weight << " kg" << endl;
    outFile << "Ideal weight: " << b_weight << " kg" << endl;

    outFile.close();
    getchar();
    getchar();
    return 0;
}