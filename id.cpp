//��ʵ�����ʵ�ּ�¼������ϢȻ������������صĹ��ܣ�����������Ϣд��(id.txt)�ļ���
//�Ժ�����޸��ļ������Զ�����Ϊ������Ϊ�ļ�����


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
    cout << "Year: " << year << " ��" << endl;
    cout << "Month: " << month << " ��" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Nowdays weight: " << a_weight << " kg" << endl;
    cout << "Ideal weight: " << b_weight << " kg" << endl;

    //write the same information in the outFile
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Your name: " << name << endl;
    outFile << "Year: " << year << " ��" << endl;
    outFile << "Month: " << month << " ��" << endl;
    outFile << "Height: " << height << " cm" << endl;
    outFile << "Nowdays weight: " << a_weight << " kg" << endl;
    outFile << "Ideal weight: " << b_weight << " kg" << endl;

    outFile.close();
    getchar();
    getchar();
    return 0;
}