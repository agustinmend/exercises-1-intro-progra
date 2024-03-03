#include <excercises.h>
#include <gtest/gtest.h>

TEST(EquationTest, TestAllNumbers) {
  testing::internal::CaptureStdout();

  exercise_2(2, 5, 2);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "-0.5 -2\n");
}

TEST(EquationTest, TestAllNumbersOneRoot) {
  testing::internal::CaptureStdout();

  exercise_2(2, 4, 2);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "-1\n");
}

TEST(EquationTest, TestAllNumbersNoRoot) {
  testing::internal::CaptureStdout();

  exercise_2(2, 1, 2);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "");
}

TEST(EquationTest, TestAllNumbersOneNegRoot) {
  testing::internal::CaptureStdout();

  exercise_2(0, 4, 10);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "-2.5\n");
}

TEST(EquationTest, HandlesLargeCoefficients) {
  testing::internal::CaptureStdout();

  exercise_2(10000, -50000, 25000);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "4.43649 0.563508\n");
}

TEST(EquationTest, HandlesZeroCoefficients) {
  testing::internal::CaptureStdout();

  exercise_2(0, 0, 4);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "");
}

TEST(EquationTest, HandlesNegativeDiscriminant) {
  testing::internal::CaptureStdout();

  exercise_2(2, 5, 6);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "");
}

TEST(EquationTest, HandlesFloatingPointValues) {
  testing::internal::CaptureStdout();

  exercise_2(1.5, -3.4, 2.1);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}