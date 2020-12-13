#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[] = "t.txt";
			int m = ProcessTXT(fname);
			Assert::AreEqual(m,0);
		}
	};
}
