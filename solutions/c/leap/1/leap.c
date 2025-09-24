#include "leap.h"
bool leap_year(int y)
{
    if (!(y % 400))
        return (true);
    if (y % 4 == 0 && !(y % 100 == 0))
        return (true);
    return (false);
}