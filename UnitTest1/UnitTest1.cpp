#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05_4/Lab05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = S0(10);
			double expected = 11.6905;
			double epsilon = 0.0001;   // Точність порівняння
			Assert::AreEqual(expected, t, epsilon);
		}
		TEST_METHOD(TestMethod2)
		{
			double t = S1(10, 10);
			double expected = 11.6905;
			double epsilon = 0.0001;   // Точність порівняння
			Assert::AreEqual(expected, t, epsilon);
		}
		TEST_METHOD(TestMethod3)
		{
			double t = S2(10, 19);
			double expected = 11.6905;
			double epsilon = 0.0001;   // Точність порівняння
			Assert::AreEqual(expected, t, epsilon);
		}
		TEST_METHOD(TestMethod4)
		{
			double t = S3(10, 10, 0);
			double expected = 11.6905;
			double epsilon = 0.0001;   // Точність порівняння
			Assert::AreEqual(expected, t, epsilon);
		}
		TEST_METHOD(TestMethod5)
		{
			double t = S4(10, 19, 0);
			double expected = 11.6905;
			double epsilon = 0.0001;   // Точність порівняння
			Assert::AreEqual(expected, t, epsilon);
		}
	};
}
