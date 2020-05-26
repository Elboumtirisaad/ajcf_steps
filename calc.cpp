
#include "calc.hpp"
#include<chrono>
#include <iostream>
#include<date/date.h>

int mavar_globale;

int add(int i, int j)
{
    return i + i;
}

void print_current_date(){
    auto nombre_de_secondes_depuis_1970 = std::chrono::system_clock::now();
    auto jours = date::floor<date::days>(nombre_de_secondes_depuis_1970);
    auto data = date::year_month_day(jours);

    std::cout << data;
}