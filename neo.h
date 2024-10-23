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

typedef int8_t i8;

i8 str_index_of_i8(const char*, char);

typedef int16_t i16;

i16 str_index_of_i16(const char*, char);

typedef int32_t i32;

i32 str_index_of_i32(const char*, char);

typedef int64_t i64;

i64 str_index_of_i64(const char*, char);

char* str_sub_str_u8(const char*, u8, u8);

char* str_sub_str_u16(const char*, u16, u16);

char* str_sub_str_u32(const char*, u32, u32);

char* str_sub_str_u64(const char*, u64, u64);
