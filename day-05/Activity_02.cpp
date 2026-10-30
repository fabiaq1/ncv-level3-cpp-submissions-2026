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
/*
 * function
 * */
 void getProductData(Product &p){
	 string nm;
	 double pr;
	 int qn;
	 
	 cout<<"Enter product name: ";
	 cin>>nm;
	 cout<<"Enter product price: ";
	 cin>>pr;
	 cout<<"Enter quantity: ";
	 cin>>qn;
	 
	 p.setProduct(nm,pr,qn);
	 
 }
 void displayProduct(Product &pr){
	 cout<<"Product Name: "<<pr.getProdName()<<endl;
	 cout<<"Product Price: R"<<pr.getPrice()<<endl;
	 cout<<"Product Quantity: "<<pr.getQuantity()<<endl; 
 }
 
 void prodCompare(Product &pr1, Product &pr2){
	 string name1 = pr1.getProdName();
	 string name2 = pr2.getProdName();
	 
	 cout<<"Enter product 01: ";
	 cin>>name1;
	 	 
	 cout<<"Enter product 02: ";
	 cin>>name2;
	 
	 if(name1.at(0)== name2.at(0)){
			
		 cout<<"The two products starts with the same character."<<endl;
	 }else{
		 cout<<"The two products DO NOT start with the same character."<<endl;
 }
 }
 
int main(){
	Product product1;
	Product product2;
	
	//getProductData(product1);
	cout<<" "<<endl;
	//displayProduct(product1);
	prodCompare(product1,product2);
	_getch();
return 0;
}
