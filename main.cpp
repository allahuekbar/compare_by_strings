#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string s1, s2;

    ifstream file1("/home/gerdon/Desktop/mgtu/второй семестр/технологии и методы программирования/files/file1.txt~");
    ifstream file2("/home/gerdon/Desktop/mgtu/второй семестр/технологии и методы программирования/files/file2.txt");

    while(getline(file1, s1)&&getline(file2, s2)) /// важный момент не || а &&
    {


        if(!s1.compare(s2))
        {
            cout << "I catch you" << endl;
        }
        else
        {
            cout << "houston we have a problem" << endl;
        }
    }
    file1.close();
    file2.close();
    return 0;
}