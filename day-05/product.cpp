#include <iostream>
#include <conio.h> //required for _getch()
#include <string>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantity;
public:
    Product();
    Product(string pName, double pr, int quan);
    void setProduct(string pName, double pr, int quan);
    string getProdName();
    double getPrice();
    int getQuantity();
};

Product::Product()
{
	productName = "";
	price = 0;
	quantity = 0;
}

Product:: Product(string pName, double pr, int quan)
{
	setProduct(pName, pr ,quan);
}

void Product::setProduct(string pName, double pr, int quan)
{
    productName = pName;
    
    if(pName!=" " )
		productName = pName;
	else
		productName = "Fish";
		
	if (quan >= 0) quantity = quan;
    else quan = 0;
    
    if (pr >= 0) price = pr;
    else pr = 0;
    
}

string Product::getProdName(){return productName; }
double Product::getPrice() {return price; }
int Product::getQuantity() {return quantity;}

int main(){
	Product prod1;
	prod1.setProduct("Wireless Mouse", 249.99, 15);
	
	Product prod2;
	prod2.setProduct("Cisco Catalyst 4000-Series 24-port Switch", 18589.95, 1);
	
	cout<<"Product Name: "<<prod1.getProdName()<<endl;
	cout<<"Price: R"<<prod1.getPrice()<<endl;
	cout<<"Quantity: "<<prod1.getQuantity()<<endl;
	cout<<""<<endl;
	cout<<"Product Name: "<<prod2.getProdName()<<endl;
	cout<<"Price: R"<<prod2.getPrice()<<endl;
	cout<<"Quantity: "<<prod2.getQuantity()<<endl;

	//prod1.setProduct("Flash Drive 16GB", 200, 2);  //invalid age is rejected
	//cout<<prod1.getProdName() <<", "<<prod1.getPrice()<<endl;
	
	_getch();
return 0;
}
