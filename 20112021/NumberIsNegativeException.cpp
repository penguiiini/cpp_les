#include "NumberIsNegativeException.h"

const char* NumberIsNegativeException::what() const noexcept
{
    return "Number is negative, please use number > 0";
}