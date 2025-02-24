#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <list>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct product
{
    int productId;
    string name;
    string category;
};

struct Order
{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main()
{
    vector<product> products = {
        {101, "Laptop", "Electronic"},
        {102, "Smartphone", "Electronic"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"}};

    deque<string> recenCustomer = {"C001", "C002", "C003"};
    recenCustomer.push_back("C004");
    recenCustomer.push_front("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 10, "C001", time(0)});
    orderHistory.push_back({2, 102, 12, "C002", time(0)});
    orderHistory.push_back({3, 103, 2, "C003", time(0)});

    set<string> categories;

    for (const auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 11},
        {103, 20},
        {104, 14},
        {105, 30},
    };

    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory)
    {
        customerOrders.insert({order.customerId, order});
    };

    unordered_map<string, string> customerData {
        {"C001" , "Alice"},
        {"C002" , "Raj"},
        {"C003" , "Sidama"},
        {"C004" , "Kalu"},
        {"C005" , "Kari"},

    };

    unordered_set<int>  uniqueProductIds;
    for(const product &product : products){
        uniqueProductIds.insert(product.productId);
    }



    return 0;
}