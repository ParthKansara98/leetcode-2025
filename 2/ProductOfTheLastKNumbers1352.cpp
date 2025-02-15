#include <iostream>
#include <vector>

using namespace std;

class ProductOfNumbers {
private:
    vector<int> products;
public:
    ProductOfNumbers() {
        products = {1};
    }

    void add(int num) {
        if (num == 0) {
            products = {1};
        } else {
            products.push_back(products.back() * num);
        }
    }

    int getProduct(int k) {
        if (k >= products.size()) return 0;
        return products[products.size()-1] / products[products.size() - 1 - k];
    }
};

int main() {
    ProductOfNumbers productOfNumbers;
    productOfNumbers.add(3);
    productOfNumbers.add(0);
    productOfNumbers.add(2);
    productOfNumbers.add(5);
    productOfNumbers.add(4);
    cout << productOfNumbers.getProduct(2) << endl;
    cout << productOfNumbers.getProduct(3) << endl;
    cout << productOfNumbers.getProduct(4) << endl;
    productOfNumbers.add(8);
    cout << productOfNumbers.getProduct(2) << endl;
    return 0;
}
/*
g++ -o ProductOfTheLastKNumbers1352 ProductOfTheLastKNumbers1352.cpp;./ProductOfTheLastKNumbers1352
*/
