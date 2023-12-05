#include <hw01.h>
#include <cmath>

int hw01(int start, int end)
{
    int sum = 0;

    if(!is_two_digit(start) || !is_two_digit(end)) return -1;

    for(int i = start; i <= end; ++i)
    {
        if(is_prime(i))
        {
            sum += i % 10;
            sum += i / 10 % 10;
        }
    }

    return sum;
}

bool is_two_digit(int x)
{
    return (x >= 10) && (x < 100);
}

bool is_prime(int x)
{
    for(int i = 2; i <= sqrt(x); ++i)
    {
        if(x % i == 0)
            return false;
    }
    
    return true;
}



// Задание №1
// Реализовать программу (по сути функцию), которая считает сумму цифр для простых двузначных чисел, содержащихся в заданном диапазоне ( [start ... end] )
// Замечания:
// 1. start и end - двузначные числа
// 2. если start или end не двузначное число, то возвращаем -1
// 3. сумма цифр считается только для двузначных простых чисел
// 4. Реализация кода должна находиться в функции hw01 (путь к файлу hw01/src/hw01.cpp)

// Примеры:
// 1. hw01(2, 5) => return -1
// 2. hw01(11, 15) => return 6
// 3. hw01(2, 11) => return -1
// 4. hw01(10, 40) => return 54
