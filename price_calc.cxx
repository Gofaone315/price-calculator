// price milestone calculator
//::@Gofaone315
//::https://github.com/Gofaone315
#include<iostream>
using namespace std;

int main()
{
    float child_meal;
    float adult_meal;
    int child_number;
    int adult_number;
    cout<<"What's the price of children's meal?"<<endl;
    cin>>child_meal;
    cout<<"What's the price of adults meal?"<<endl;
    cin>>adult_meal;
    cout<<"How many children are there?"<<endl;
    cin>>child_number;
    cout<<"How many adults are there?"<<endl;
    cin>>adult_number;
    float child_cost;
    float adult_cost;
    child_cost = child_number * child_meal;
    adult_cost = adult_number * adult_meal;
    float subtotal;
    subtotal = child_cost + adult_cost;
    cout<<"subtotal: "<<subtotal<<endl;
    float sales_tax_rate;
    cout<<"What is the sales tax rate?"<<endl;
    cin>>sales_tax_rate;
    float sales_tax;
    sales_tax = (subtotal*sales_tax_rate)/100;
    cout<<"Sales Tax: "<<sales_tax<<endl;
    float total_price;
    total_price = sales_tax + subtotal;
    cout<<"Total Price: "<<total_price<<endl;
    float payment;
    cout<<"What's the payment amount?"<<endl;
    cin>>payment;
    float change;
    change = payment - total_price;
    if (change == 0)
    {
        cout<<"Thank you for buying at our shop, Goodbye!";
    }
    else if (change < 0)
    {
        cout<<"Money short with: "<<change/-1<<endl;
    }
    else
    {
        cout<<"change: "<<change;
    }
}