#include "pch.h"
#include "CppUnitTest.h"
#include "../pr_08_1_string/pr_08_1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestContainsWhileLetters)
		{
			Assert::IsTrue(ContainsWhileLetters("whi le"));
			Assert::IsFalse(ContainsWhileLetters("hello"));
			Assert::IsFalse(ContainsWhileLetters(""));
			Assert::IsFalse(ContainsWhileLetters("hwi"));
		}
		TEST_METHOD(TestReplaceWhile)
		{
			string str = "while x while y while";
			string result = ReplaceWhile(str);
			Assert::AreEqual(string("** x ** y **"), result);
		}
	};
}
