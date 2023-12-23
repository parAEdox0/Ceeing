#include <iostream>
#include <string>
using namespace std;

class publication
{
private:
    int price;
    string name;

public:
    void getdata();
    void display();
};

void publication::getdata()
{
    cout << "Enter the name of the book without space : ";
    cin >> name;
    cout << "Enter price of the book : ";
    cin >> price;
}

void publication::display()
{
    cout << "Book name : " << name << endl;
    cout << "Book price : " << price << endl;
}

class copy_book : public publication
{
private:
    int number_of_pages;

public:
    void get_pages()
    {
        cout << "Enter number of Pages : ";
        cin >> number_of_pages;
    }
    void disaply_pages()
    {
        cout << "Number of Pages : " << number_of_pages << endl;
    }
};

class audio_book : public publication
{
private:
    int time;

public:
    void get_minutes()
    {
        cout << "Enter time in minutes : ";
        cin >> time;
    }
    void disaply_minutes()
    {
        cout << "Time : " << time << endl;
    }
};

int main()
{
    copy_book c1;
    audio_book a1;
    c1.getdata();
    c1.get_pages();
    cout << endl;
    a1.getdata();
    a1.get_minutes();
    cout << endl;
    c1.display();
    c1.disaply_pages();
    cout << endl;
    a1.display();
    a1.disaply_minutes();
    return 0;
}