#include "pch.h"
#include "CppUnitTest.h"
#include "..\Application\Application.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			CoolClass coolClass;
			Assert::AreEqual(2, coolClass.Calc(1, 2));
		}

		TEST_METHOD(TestMethod2)
		{

			CoolClass coolClass;
			Assert::AreEqual(5, coolClass.Calc(3, 2));
		}

		TEST_METHOD(TestMethod3)
		{

			CoolClass coolClass;
			Assert::IsTrue(coolClass.Calc(3, 2) > 0);
		}

		TEST_METHOD(TestMethod4)
		{

			CoolClass coolClass;
			Assert::AreEqual(5, coolClass.Calc(3, 2));
		}

		TEST_METHOD(TestMethod5)
		{

			CoolClass coolClass;
			Assert::AreEqual(5, coolClass.Ming(3, 2));
		}
	};
}
