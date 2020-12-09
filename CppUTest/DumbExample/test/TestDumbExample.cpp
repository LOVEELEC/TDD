#include "CppUTest/TestHarness.h"

extern "C"
{
#include "../src/DumbExample.h"
}

TEST_GROUP(DumbExample)
{
	// 在这里定义测试组成员可以访问的数据
	
	void setup()
	{
		// 每个TEST之前都会执行的初始化步骤
	}
	
	void teardown()
	{
		// 每个TEST之后都会执行的清理步骤
	}
};

TEST(DumbExample, AverageThreeBytes)
{
	BYTES_EQUAL(40, AverageThreeBytes(30, 40, 50));
	BYTES_EQUAL(40, AverageThreeBytes(10, 70, 40));
	BYTES_EQUAL(33, AverageThreeBytes(33, 33, 33));
}

/*
void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(30, 40, 50));
TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(10, 70, 40));
TEST_ASSERT_EQUAL_HEX8(33, AverageThreeBytes(33, 33, 33));
}

void test_AverageThreeBytes_should_AverageHighValues(void)
{
TEST_ASSERT_EQUAL_HEX8(80, AverageThreeBytes(70, 80, 90));
TEST_ASSERT_EQUAL_HEX8(127, AverageThreeBytes(127, 127, 127));
TEST_ASSERT_EQUAL_HEX8(84, AverageThreeBytes(0, 126, 126));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
RUN_TEST(test_AverageThreeBytes_should_AverageHighValues);
return UNITY_END();
}
*/
