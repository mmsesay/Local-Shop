#include <iostream>

using namespace std;

int main(){

    // products array variables
    int productsId[3];
    string productsName[3];
    int buyingPrice[3];
    int sellingPrices[3];
    int profit[3];

    // other input variables
    string pdName;
    int bPrice;

    // loop through the array of productsName
    for(int i = 1; i < 4; i++){
        // propmt the user and request for his/her input
        cout<<"Please enter "<<i<<" product name: ";
        cin>>pdName;
        cout<<"Please enter "<<i<<" buying price: ";
        cin>>bPrice;
        cout<<"------------------------------"<<endl;

        // assign the values to the array
        productsId[i] = i;
        productsName[i] = pdName;
        buyingPrice[i] = bPrice;

        // buying price condition to get the selling price
        if(bPrice == 25 || bPrice < 25){
            // calculate the selling price
            sellingPrices[i] = buyingPrice[i] * 0.20;

            // calculate the profit
            profit[i] = sellingPrices[i] - buyingPrice[i];
        }else{
            // calculate the selling price
            sellingPrices[i] = buyingPrice[i] * 0.10;

             // calculate the profit
            profit[i] = sellingPrices[i] - buyingPrice[i];
        }
    } 
    
    // loop through to display the message with each product detail
    for(int i = 1; i < 4; i++){
        cout<<"ProductID: "<<productsId[i]<<endl;
        cout<<"Product Name: "<<productsName[i]<<endl;
        cout<<"Buying Price: "<<buyingPrice[i]<<endl;
        cout<<"Selling Price: "<<sellingPrices[i]<<endl;
        cout<<"Profit: "<<profit[i]<<endl;
        cout<<"----------PRODUCT"<<i<<"DETAIL----------"<<endl;
    }

    return 0;

}