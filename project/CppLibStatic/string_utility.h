/*
@file string_utility.h
@brief 文字列ユーティリティ
*/
#ifndef CPPLIB_STRING_UTILITY_H_
#define CPPLIB_STRING_UTILITY_H_

//------------------------------------------------------------------------------
// include
//------------------------------------------------------------------------------
// c++ header
#include <string>

/*
@namespace string_utility
@brief 文字列ユーティリティ
*/
namespace string_utility
{
	//! 書式指定変換した文字列返却
	std::string Format(const char* format, ...);
};
#endif // CPPLIB_STRING_UTILITY_H_
