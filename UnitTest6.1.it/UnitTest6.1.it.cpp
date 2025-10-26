#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1.it/lab6.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { -5, -3, -8, 2, 6, -9, -2, 0, 3, -7 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int expectedCount = 4;
			int expectedSum = -22;

			Assert::AreEqual(expectedCount, countNegNot3(arr, size));
			Assert::AreEqual(expectedSum, sumNegNot3(arr, size));
		}
	};
}
