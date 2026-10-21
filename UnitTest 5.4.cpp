#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 5.4/Project 5.4.cpp" // Підключення файлу з реалізацією функцій

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        // Тест 1: Перевірка S1 (рекурсивний підйом, i зростає)
        TEST_METHOD(Test_S1_RecUpAsc)
        {
            int K = 1, N = 1;
            double expected = (sin(10.0 * 1) + cos(10.0 / 1)) / sqrt(1.0);
            double actual = S1(K, N, K);
            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест 2: Перевірка S2 (рекурсивний підйом, i спадає)
        TEST_METHOD(Test_S2_RecUpDesc)
        {
            int K = 1, N = 1;
            double expected = (sin(10.0 * 1) + cos(10.0 / 1)) / sqrt(1.0);
            double actual = S2(K, N, N);
            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест 3: Перевірка S3 (рекурсивний спуск, i зростає)
        TEST_METHOD(Test_S3_RecDownAsc)
        {
            int K = 1, N = 1;
            double expected = (sin(10.0 * 1) + cos(10.0 / 1)) / sqrt(1.0);
            double actual = S3(K, N, K, 0.0);
            Assert::AreEqual(expected, actual, 0.0001);
        }

        // Тест 4: Перевірка S4 (рекурсивний спуск, i спадає)
        TEST_METHOD(Test_S4_RecDownDesc)
        {
            int K = 1, N = 1;
            double expected = (sin(10.0 * 1) + cos(10.0 / 1)) / sqrt(1.0);
            double actual = S4(K, N, N, 0.0);
            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}