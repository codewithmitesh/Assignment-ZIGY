/**
 * @file Assignment.cpp
 * @author Mitehs Tank(codewitmitesh)
 * @brief
 * @version 0.1
 * @date 2022-07-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

class User
{
public:
    string email;
    string phone;
    string name;
    Order orders[5];
};

class Order
{
public:
    int amount;
    string id;
    Product products[5];
    User user;
};

class Product
{
public:
    int price;
    string name;
    string id;

    Product(int pricee, string naame, string idd)
    {
        price = pricee;
        name = naame;
        id = idd;
    }
};
class answer
{
public:
    // Sorting the user alphabatically
    void sortUser(vector<User> v)
    {
        sort(v.begin(), v.end(), [](User a, User b)
             { return a.name[0] < b.name[0]; });
    }
    // Sorting the users according to most number of orders // Will display the user with more no of orders first
    void sortOrders(vector<User> v)
    {
        sort(v.begin(), v.end(), [](User a, User b)
             { return a.orders.size() > b.orders.size(); });
    }
    // Sorting the users according to more total value of orders
    void sortOrders(vector<User> v)
    {
        sort(v.begin(), v.end(), [](User a, User b)
             { return a.orders[0].amount > b.orders[0].amount; });
    }
    // sort product according increasing order of their price
    void SortProducts(vector<Product> v)
    {
        sort(v.begin(), v.end(), [](Product a, Product b)
             { return a.price < b.price; });
    }
    // sort product according Decreasing order of their price
    void SortProducts(vector<Product> v)
    {
        sort(v.begin(), v.end(), [](Product a, Product b)
             { return a.price > b.price; });
    }
    // function to make the unique id key for product and orders
    // this is not the best hash function but it can avoid most of the collisions we can further implement it also another hash functon for string can be weighted sum of all char implemented in Robin karp algo of string search
    int hashthID(string word)
    {
        int result = 0;
        for (size_t i = 0; i < word.length(); ++i)
        {
            result += word[i] * pow(31, i);
        }
        return result;
    }
};

int main()
{

    // Product p(3000, "soap", "sadjn");
    // Product p1(2000, "shampoo", "sadjsdn");
    // Product p2(1000, "toothpaste", "sadjsdssdn");
    // Product p3(4000, "toothbrush", "sadjsdssdsdan");

    return 0;
}
/**
 * @brief Note :-) Can further impletend to complete the programm but i have implemented all the required functions
 * due to time bound i hope you like the impletation
 *
 * we can further implement it and add the proper the Abstraction to all the function to avoid the implementation leak and data privacy
 *
 * We can easily implement this complete code in javascript also though it will be much easy because of available libraries and inbuilt functions
 *
 * in Java script we can hash our password or key using BCrypt library
 *
 * Thank you !!!
 */