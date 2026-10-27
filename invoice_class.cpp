#include <iostream>
#include <string>

using namespace std;

class invoice {
private:
    string partnumber;
    string description;
    int quantity;
    double price;
public:
    invoice(string pn, string d, int q, double p) {
        partnumber = pn;
        description = d;
        setquantity(q);
        setprice(p);
    }
    void setpartnumber(string pn) {
        partnumber = pn;
    }
    void setdescription(string d) {
        description = d;
    }
    void setquantity(int q) {
        if (q < 0) {
            quantity = 0;
        } else {
            quantity = q;
        }
    }
    void setprice(double p) {
        if (p < 0) {
            price = 0.0;
        } else {
            price = p;
        }
    }

    string getpartnumber() {
        return partnumber;
    }
    string getdescription() {
        return description;
    }
    int getquantity() {
        return quantity;
    }
    double getprice() {
        return price;
    }

    double getinvoiceamount() {
        return quantity * price;
    }
};

int main() {
    invoice item1("jhhdsj", "ajb", 5, 12.55);
    invoice item2("jbdj", "bsj", -3, 43.56);

    cout << "Item description : " << item1.getdescription() << "\n";
    cout << "Quantity         : " << item1.getquantity() << "\n";
    cout << "Price            : " << item1.getprice() << "\n";
    cout << "Total Invoice    : " << item1.getinvoiceamount() << "\n";

    cout << "\n-----------------\n";
    
    cout << "Item 2 (Testing negative quantity validation):\n";
    cout << "Quantity (should be 0) : " << item2.getquantity() << "\n";

    return 0;
}
