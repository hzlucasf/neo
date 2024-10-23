#include "neo.h"

#include <stdlib.h>

u8 str_len_u8(const char* str)
{
    if (str == NULL)
    {
        return 0;
    }

    u8 len = 0;

    while (str[len] != '\0')
    {
        len += 1;
    }

    return len;
}

u16 str_len_u16(const char* str)
{
    if (str == NULL)
    {
        return 0;
    }

    u16 len = 0;

    while (str[len] != '\0')
    {
        len += 1;
    }

    return len;
}

u32 str_len_u32(const char* str)
{
    if (str == NULL)
    {
        return 0;
    }

    u32 len = 0;

    while (str[len] != '\0')
    {
        len += 1;
    }

    return len;
}

u64 str_len_u64(const char* str)
{
    if (str == NULL)
    {
        return 0;
    }

    u64 len = 0;

    while (str[len] != '\0')
    {
        len += 1;
    }

    return len;
}
