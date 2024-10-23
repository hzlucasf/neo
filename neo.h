#pragma once

#include <stdint.h>

typedef uint8_t u8;

u8 str_len_u8(const char*);

typedef uint16_t u16;

u16 str_len_u16(const char*);

typedef uint32_t u32;

u32 str_len_u32(const char*);

typedef uint64_t u64;

u64 str_len_u64(const char*);

char* str_dup_u8(const char*);

char* str_dup_u16(const char*);

char* str_dup_u32(const char*);

char* str_dup_u64(const char*);
