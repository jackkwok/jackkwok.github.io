#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct CoffeeOrder
{
    // TODO:
    // Add four member variables:
    // customerName
    // drinkName
    // quantity
    // pricePerDrink


    // Returns the total order cost
    double getTotal()
    {
        // TODO
    }

    // Displays info about a single order, must include customer name and total costs for the order at minimum.
    void display()
    {
        // TODO
    }
};

int main()
{
    CoffeeOrder order1;

    order1.customerName = ;
    order1.drinkName = ;
    order1.quantity = ;
    order1.pricePerDrink = ;

    CoffeeOrder order2;

    order2.customerName = ;
    order2.drinkName = ;
    order2.quantity = ;
    order2.pricePerDrink = ;

    vector<CoffeeOrder> orders;

    orders.push_back(order1);
    orders.push_back(order2);

    cout << "Today's Orders\n";
    cout << "--------------\n";

    // TODO using a loop, call display() on each CoffeeOrder in the vector


    // TODO compute the total revenue of the coffee shop.
    return 0;
}
