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

char* str_dup_u8(const char* str)
{
    if (str == NULL)
    {
        return NULL;
    }

    u8 len = str_len_u8(str);

    char* result = malloc(len + 1);

    if (result == NULL)
    {
        return NULL;
    }

    for (u8 i = 0; i < len + 1; i += 1)
    {
        result[i] = str[i];
    }

    return result;
}

char* str_dup_u16(const char* str)
{
    if (str == NULL)
    {
        return NULL;
    }

    u16 len = str_len_u16(str);

    char* result = malloc(len + 1);

    if (result == NULL)
    {
        return NULL;
    }

    for (u16 i = 0; i < len + 1; i += 1)
    {
        result[i] = str[i];
    }

    return result;
}

char* str_dup_u32(const char* str)
{
    if (str == NULL)
    {
        return NULL;
    }

    u32 len = str_len_u32(str);

    char* result = malloc(len + 1);

    if (result == NULL)
    {
        return NULL;
    }

    for (u32 i = 0; i < len + 1; i += 1)
    {
        result[i] = str[i];
    }

    return result;
}

char* str_dup_u64(const char* str)
{
    if (str == NULL)
    {
        return NULL;
    }

    u64 len = str_len_u64(str);

    char* result = malloc(len + 1);

    if (result == NULL)
    {
        return NULL;
    }

    for (u64 i = 0; i < len + 1; i += 1)
    {
        result[i] = str[i];
    }

    return result;
}

i8 str_index_of_i8(const char* str, char c)
{
    if (str == NULL)
    {
        return -1;
    }

    u8 len = str_len_u8(str);

    for (u8 i = 0; i < len; i += 1)
    {
        if (str[i] == c)
        {
            return i;
        }
    }

    return -1;
}

i16 str_index_of_i16(const char* str, char c)
{
    if (str == NULL)
    {
        return -1;
    }

    u16 len = str_len_u16(str);

    for (u16 i = 0; i < len; i += 1)
    {
        if (str[i] == c)
        {
            return i;
        }
    }

    return -1;
}

i32 str_index_of_i32(const char* str, char c)
{
    if (str == NULL)
    {
        return -1;
    }

    u32 len = str_len_u32(str);

    for (u32 i = 0; i < len; i += 1)
    {
        if (str[i] == c)
        {
            return i;
        }
    }

    return -1;
}

i64 str_index_of_i64(const char* str, char c)
{
    if (str == NULL)
    {
        return -1;
    }

    u64 len = str_len_u64(str);

    for (u64 i = 0; i < len; i += 1)
    {
        if (str[i] == c)
        {
            return i;
        }
    }

    return -1;
}
