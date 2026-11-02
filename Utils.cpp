#include "Utils.h"
#include "Stack.h"

#include <iostream>

void reverse(int* nums, unsigned int size)
{
    if (nums == 0 || size == 0)
    {
        return;
    }

    Stack stack;
    initStack(&stack);

    for (unsigned int i = 0; i < size; i++)
    {
        push(&stack, static_cast<unsigned int>(nums[i]));
    }

    for (unsigned int i = 0; i < size; i++)
    {
        nums[i] = pop(&stack);
    }

    cleanStack(&stack);
}

int* reverse10()
{
    int* numbers = new int[10];

    std::cout << "Please enter 10 integers:" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> numbers[i];
    }

    reverse(numbers, 10);

    return numbers;
}
