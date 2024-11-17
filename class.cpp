#include <iostream>
using namespace std;

class Car
{
public:
    string Company;
    string Name;
    int Price;

    Car(string company, string name, int price)
    {
        Company = company;
        Name = name;
        Price = price;
    }

    void start()
    {
        cout << "Your Car " << Company << "-" << Name << " Is Ready To Drive" << endl;
    }
    void accelarate(int value = 10)
    {
        cout << "Speed Increase By " << value << " Kmph" << endl;
    }
    void deAccelarate(int value = 10)
    {
        cout << "Speed Decrease By " << value << " Kmph" << endl;
    }
    void stop()
    {
        cout << "Your Car Is Stopped Now" << endl;
    }
};

int main()
{
    Car audi = Car("Audi", "A6", 6000000);
    cout << "Name Of The Company : " << audi.Company << endl;
    cout << "Name Of The Model : " << audi.Name << endl;
    cout << "Price Of The Car : " << audi.Price << endl;

    audi.start();
    audi.accelarate(15);
    audi.deAccelarate(5);
    audi.stop();

    return 0;
}