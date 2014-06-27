/*
    Author: Richard Dominguez
    Created: June 25, 2014
 
    Sales Tax
    Write a program that will compute the total sales tax on a $52 
    purchase. Assume the state sales tax is 4 percent and the county 
    sales tax is 2 percent.

*/

//System Library
#include <iostream>
using namespace std;

int main()
{
    float total_sales_tax; //Holds the total sales tax
    const float state_sales_tax = 0.04; //State sales tax is fixed at 4%
    const float county_sales_tax = 0.02;//County sales tax is fixed at 2%
    float purchase = 52; //Purchase amount
    
    //Initialize total sales tax for state tax
    total_sales_tax = state_sales_tax * purchase;
    
    //Display total state sales tax
    cout << "Total state sales tax = " << total_sales_tax << endl;
    
    //Initialize total sales tax for county tax
    total_sales_tax = county_sales_tax * purchase;
    
    //Display total county sales tax
    cout << "Total county sales tax = " << total_sales_tax << endl;
    
return 0;
}