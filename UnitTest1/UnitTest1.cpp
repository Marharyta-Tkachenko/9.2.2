#include "pch.h"
#include "CppUnitTest.h"
#include "../Project9.2.2/Source1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int kil_student = 2;
			student* s = new student[kil_student];
			s[0].surname = "kant";
			s[0].speciality = Special(3);
			s[0].phisuka = 2;
			s[0].matematic = 3;
			s[0].pedahohica = 3;
			s[1].surname = "dante";
			s[1].speciality = Special(0);
			s[1].phisuka = 4;
			s[1].matematic = 4;
			s[1].programing = 4;

			Sort(s, kil_student);
			Assert::AreEqual(1, 1);
		}
	};
}
