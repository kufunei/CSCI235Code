/******************************************************************************
Title : project1-kufunei
Author : Kun Feng Wei
Created on : September 5th, 2024
Description : As the main chef and manager, you are tasked with creating a variety of dishes for the
restaurant, each with its own unique set of ingredients, preparation time, and pricing.
Participants of your simulation will be able to interact with various dishes, allowing them to
explore different flavors, cooking methods, and culinary styles
Purpose : Each dish will have specific attributes that define its preparation process, the ingredients used,
and its price. The goal of this project is to refresh your knowledge of basic Object-Oriented
Programming (OOP) concepts by implementing the Dish class, which will be the foundation of
your restaurant simulation.
******************************************************************************/

#include "Dish.hpp"
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

/**
* Default constructor.
* Initializes all private members with default values:
* - name: "UNKNOWN"
* - ingredients: Empty list
* - prep_time: 0
* - price: 0.0
* - cuisine_type: OTHER
*/
Dish::Dish()
{
    this->name_ = "UNKNOWN";
    this->ingredients_ = std::vector<std::string>{};
    this->prep_time_ = 0;
    this->price_ = 0.0;
    this->cuisine_type_ = OTHER;
}

/**
* Parameterized constructor.
* @param name A reference to the name of the dish.
* @param ingredients A reference to a list of ingredients (default is
empty list).
* @param prep_time The preparation time in minutes (default is 0).
* @param price The price of the dish (default is 0.0).
* @param cuisine_type The cuisine type of the dish (a CuisineType enum)
with default value OTHER.
Accessors and Mutators:
* @post The private members are set to the values of the corresponding
parameters.
*/
Dish::Dish(const std::string& name, const std::vector<std::string>& ingredients, const int prep_time, const double price, const CuisineType cuisine_type)
{
    this->name_ = name;
    this->ingredients_ = ingredients;
    this->prep_time_ = prep_time;
    this->price_ = price;
    this->cuisine_type_ = cuisine_type;
}

/**
* Sets the name of the dish.
* @param name A reference to the new name of the dish.
* @post Sets the private member `name_` to the value of the parameter.
*/
void Dish::setName(const std::string& name_)
{
    this->name_ = name_;
}

/**
* @return The name of the dish.
*/
std::string Dish::getName() const
{
    return this->name_;
}

/**
* Sets the list of ingredients.
* @param ingredients A reference to the new list of ingredients.
* @post Sets the private member `ingredients_` to the value of the
parameter.
*/
void Dish::setIngredients(const std::vector<std::string>& ingredients_)
{
    this->ingredients_ = ingredients_;
}

/**
* @return The list of ingredients used in the dish.
*/
std::vector<std::string> Dish::getIngredients() const
{
    return this->ingredients_;
}

/**
* Sets the preparation time.
* @param prep_time The new preparation time in minutes.
* @post Sets the private member `prep_time_` to the value of the
parameter.
*/
void Dish::setPrepTime(const int prep_time_)
{
    this->prep_time_ = prep_time_;
}

/**
* @return The preparation time in minutes.
*/
int Dish::getPrepTime() const
{
    return this->prep_time_;
}

/**
* Sets the price of the dish.
* @param price The new price of the dish.
* @post Sets the private member `price_` to the value of the parameter.
*/
void Dish::setPrice(const double price_)
{
    this->price_ = price_;
}

/**
* @return The price of the dish.
*/
double Dish::getPrice() const
{
    return this->price_;
}

/**
* Sets the cuisine type of the dish.
* @param cuisine_type The new cuisine type of the dish (a CuisineType
enum).
* @post Sets the private member `cuisine_type_` to the value of the
parameter.
*/
void Dish::setCuisineType(const CuisineType cuisine_type_)
{
    this->cuisine_type_ = cuisine_type_;
}

/**
* @return The cuisine type of the dish in string form.
*/
std::string Dish::getCuisineType() const
{
    switch (cuisine_type_)
    {
        case Dish::ITALIAN:
            return "ITALIAN";
        case Dish::MEXICAN:
            return "MEXICAN";
        case Dish::CHINESE:
            return "CHINESE";
        case Dish::INDIAN:
            return "INDIAN";
        case Dish::AMERICAN:
            return "AMERICAN";
        case Dish::FRENCH:
            return "FRENCH";
        case Dish::OTHER:
            return "OTHER";
        default:
            return "UNKNOWN";
    }
}

/**
* Displays the details of the dish.
* @post Outputs the dish's details, including name, ingredients,
preparation time, price, and cuisine type, to the standard output.
* The information must be displayed in the following format:
*
* Dish Name: [Name of the dish]
* Ingredients: [Comma-separated list of ingredients]
* Preparation Time: [Preparation time] minutes
* Price: $[Price, formatted to two decimal places]
* Cuisine Type: [Cuisine type]
*/
void Dish::display() const
{
    std::string name = getName();
    std::cout << "Dish Name: " << getName() << std::endl;

    std::vector<std::string> ingredients = getIngredients();
    std::cout << "Ingredients: ";
    for (size_t i = 0; i < ingredients.size(); i++)
    {
        std::cout << ingredients[i];
        if (i < ingredients.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    std::cout << "Preparation Time: " << getPrepTime() << " minutes" << std::endl;
    std::cout << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << "" << std::endl;
    std::cout << "Cuisine Type: " << getCuisineType() << std::endl;
    std::cout << std::endl;
}

