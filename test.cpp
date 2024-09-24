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

#include <iostream>
#include "Dish.hpp"
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

int main()
{
    Dish def_parameter;
    def_parameter.setName("UNKNOWN");
    def_parameter.getName();
    def_parameter.setIngredients(std::vector<std::string> {});
    def_parameter.getIngredients();
    def_parameter.setPrepTime(30);
    def_parameter.getPrepTime();
    def_parameter.setPrice(9.99);
    def_parameter.getPrice();
    def_parameter.setCuisineType(Dish::OTHER);
    def_parameter.getCuisineType();

    def_parameter.display();
    

    std::vector<std::string> full_ingredients = {"Pasta", "Eggs", "Pancetta", "Parmesan", "Pepper"};

    Dish parameterized("Pasta Carbonara", full_ingredients, 20, 12.50, Dish::ITALIAN);
    parameterized.display();

    

    return 0;
}

