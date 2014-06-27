/*
 
 Author: Richard Dominguez
 Created on June 25, 2014
 
    Sales Prediction
 
    The East Coast sales division of a company generates 62 percent of 
    total sales. Based on that percentage, write a program that will 
    predict how much the East Coast division will generate if the company 
    has $4.6 million in sales this year.
 
 */

//System Library
#include <iostream>
using namespace std;

int main()
{
    const float ttlSale = 4.6; //Total sells in millions.
    const float percent = 0.62; // Percent of total sells.
    
    float eastSales;
    
    eastSales = ttlSale * percent;
    
    cout << eastSales << endl;
    
    return 0;
}

















