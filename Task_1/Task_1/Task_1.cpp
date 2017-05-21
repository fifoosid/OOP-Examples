﻿// Task_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;




int main()
{
    return 0;
}


/*Задача 1. Създайте софтуер за управление на денонощен магазин в Студентски град.
Имайте предвид, че оборота в Студентски град е много голям и системата ви трябва
да е възможно най-стабилна. Магазинът е само за цигари и алкохол и също така има
ограничен капацитет.
Всеки продукт трябва да има цена, парите които ще получим при продаването му, и да
поддържа следната функционалност:
● Метод, който връща идентификатор на типа на продукта
● Метод за извеждане на характеристиките на продукта.
Тъй като софтуера е за магазин предлагащ само цигари и алкохол то имаме само два
наследника на Продукт и това са Цигари и Алкохол.
Всяка кутия цигари се характеризира с име, представено чрез символен низ с
фиксирана дължина, и съдържание на никотин. За този клас реализирайте:
● конструктор с параметри
● методите наследени от Продукт
Всеки вид алкохол се характеризира с име, представено чрез символен низ с
фиксирана дължина, и алкохолно съдържание. За този клас реализирайте:
● конструктор с параметри
● методите наследени от Продукт
Всеки магазин трябва да знае с какви продукти разполага, запазени в масив от
продукти с фиксирана дължина, и да поддържа следната функционалност:
● Оператор += за добавяне на продукт в магазина. Оператора има следният
формат: <Магазин> += <Продукт>.
● Оператор -= за премахване на продукт от магазина. Оператора има следният
формат: <Магазин> -= <Продукт>.
● Метод за пресмятане на теоретичния оборот т.е. сумата която ще спечели
магазина ако всички налични стоки се продадът.
● Метод за намиране на цигарите с най-ниско съдържание на никотин.
● Метод за намиране на алкохола с най-високо съдържание на алкохол.*/