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
	TEST_METHOD(TestMethod6)
        {
            CoolClass coolClass;
            float array[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
            Assert::AreEqual(3.0f, coolClass.Average(array, 5));
        }

        TEST_METHOD(TestMethod7)
        {
            CoolClass coolClass;
            Assert::AreEqual(25, coolClass.Square(5));
        }

        TEST_METHOD(TestMethod8)
        {
            CoolClass coolClass;
            Assert::IsTrue(coolClass.IsPrime(7));
        }

        TEST_METHOD(TestMethod9)
        {
            CoolClass coolClass;
            Assert::IsFalse(coolClass.IsPrime(6));
        }
    };
}
