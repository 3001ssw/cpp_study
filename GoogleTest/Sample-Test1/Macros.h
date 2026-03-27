#pragma once
#include <windows.h>
#define EXPECT_NO_CRASH(functionCall) \
    ( [&]() -> bool { \
        bool bRes = true; \
        [&]() { \
            __try { functionCall; } \
            __except (EXCEPTION_EXECUTE_HANDLER) { bRes = false; } \
        }(); \
        if (!bRes) { \
            ADD_FAILURE() << "크래시 발생: " << #functionCall; \
        } \
        return bRes; \
    }() )