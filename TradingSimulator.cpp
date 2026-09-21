#include <iostream>
#include <iomanip>
using namespace std;

class Stock {
public:
    string name;
    double price;

    Stock(string n, double p) : name(n), price(p) {}

    void display() {
        cout << "Stock: " << name
             << " Price: " << price << endl;
    }
};

class Portfolio {
public:
    double cash;
    int aaplShares;
    int nvdaShares;
    int tslaShares;

    Portfolio() {
        cash = 10000;
        aaplShares = nvdaShares = tslaShares = 0;
    }

    void display() {
        cout << fixed << setprecision(2);
        cout << "\nCash: " << cash << endl;
        cout << "AAPL shares: " << aaplShares << endl;
        cout << "NVDA shares: " << nvdaShares << endl;
        cout << "TSLA shares: " << tslaShares << endl;
    }
};

int main() {
    Stock t1("AAPL", 295.63);
    Stock t2("NVDA", 204.87);
    Stock t3("TSLA", 399.15);

    t1.display();
    t2.display();
    t3.display();

    Portfolio portfolio;
    portfolio.display();

    getchar();


    return 0;
}