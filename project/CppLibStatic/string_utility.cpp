/*
@file string_utility.cpp
@brief �����񃆁[�e�B���e�B
*/

//------------------------------------------------------------------------------
// include
//------------------------------------------------------------------------------
#include "string_utility.h"
// c header
#include <stdarg.h>

/*
@namespace string_utility
@brief �����񃆁[�e�B���e�B
*/
namespace string_utility
{
	/*
	@brief �����w��ϊ�����������ԋp
	@param[in] format �����w�蕶����
	@param[in] ... �ό���
	@retval �����w��ϊ�����������
	*/
	std::string Format(const char* format, ...)
	{
		char formatted_string[4096];
		va_list args;
		va_start(args, format);
		vsprintf_s(formatted_string, format, args);
		va_end(args);
		return formatted_string;
	}

};