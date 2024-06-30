#include "pch.h"
#include "CppUnitTest.h"
#include "../Gromov_MathTask/Gromov_MathTask.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GromovMathTaskClassLibraryTests
{
	TEST_CLASS(GromovMathTaskTests)
	
	
	{
	public:
		
		TEST_METHOD(RectangleArea_3and5_15returned) {

			int a = 3;
			int b = 5;

			int expected = 25;

			int actual = CalcRectangleArea(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
		//тест, проверяющий отсев пустых значений
		TEST_METHOD(Check_UserInput_Empty) {

			// исходные данные
			string str = "";
			// ожидаемое значение результата работы функции UserInput
			bool expected = false;
			// получение значения с помощью тестируемого метода
			bool actual = UserInput(str);
			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}

		//тест, проверяющий отсев нецифровых символов
		TEST_METHOD(Check_UserInput_Letter) {
			// исходные данные
			string str = "a";
			// ожидаемое значение результата работы функции UserInput
			bool expected = false;
			// получение значения с помощью тестируемого метода
			bool actual = UserInput(str);
			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		//тест, проверяющий отсев отрицательных значений
		TEST_METHOD(Check_UserInput_NegativeValue) {

			// исходные данные
			string str = "-5";
			// ожидаемое значение результата работы функции UserInput
			bool expected = false;
			// получение значения с помощью тестируемого метода
			bool actual = UserInput(str);
			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
	};
}
