#include "pch.h"
#include "gtest/gtest.h"

int main(int argc, char** argv)
{
    // 1. Google Test 프레임워크 초기화 (명령줄 인자 전달 가능)
    printf("Running main() from gtest_main.cpp\n");
    testing::InitGoogleTest(&argc, argv);

    // 2. 등록된 모든 테스트 케이스를 실행
    // RUN_ALL_TESTS()는 모든 파일의 TEST()를 자동으로 찾아 실행합니다.
    return RUN_ALL_TESTS();
}