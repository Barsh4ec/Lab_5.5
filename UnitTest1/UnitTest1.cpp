#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 4;
			int n = 5;
			double s = n & (n - 1);
			actual = s;
			Assert::AreEqual(actual, expected);
		}
	};
}
