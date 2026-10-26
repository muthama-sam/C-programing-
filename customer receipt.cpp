#include <iostream>
#include <string>
using namespace std;

int main (){
    string Customername,Phonemodelbought;
    int Quantity;
    double Priceperphone,Totalsalesamount;
    
    cout <<"Enter Customername:";
    getline(cin,Customername);
    
    cout <<"Enter the phonemodelbought:";
    getline(cin,Phonemodelbought);
    
    cout <<"Enter Quantity:";
    cin >>Quantity;
    
    cout <<"Enter Priceperphone:";
    cin >>Priceperphone;
    
    Totalsalesamount = Quantity * Priceperphone;
    
    cout <<"========================\n";
    cout <<"CUSTOMER RECEIPT::"<<endl;
    
    cout <<"Customername:" <<Customername<<endl;
    cout <<"Phonemodelbought:" <<Phonemodelbought<<endl;
    cout <<"Quantity:" <<Quantity<<endl;
    cout <<"Priceperphone:" <<Priceperphone<<endl;
    cout <<"Totalsalesamount:" <<Totalsalesamount<<endl;

return 0;
}