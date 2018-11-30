#include "stdafx.h"
#include "CppUnitTest.h"

#include "string_utility.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace string_utility;
using namespace std;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: テスト コードをここに挿入します
			string string1 = "hoge";
			string string2 = Format("%s", string1.c_str());
			Assert::AreEqual(string1, string2);
		}

	};
}