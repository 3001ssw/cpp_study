#include "pch.h"          // 1순위: 미리 컴파일된 헤더 (여기에 MFC 헤더가 포함되어야 함)
#include <afx.h>          // 2순위: MFC 기본 헤더
#include <afxdialogex.h>
#include "gtest/gtest.h"  // 3순위: GTest 헤더는 MFC 다음에 위치
#include "Macros.h"
#include "../MFCApplication1/MFCApplication1Dlg.h"

TEST(TestCaseName, TestName1) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2)
{
    CMFCApplication1Dlg dlg;
    if (dlg.DoModal() == IDOK)
    {
        TRACE(_T("DoModal Return IDOK\n"));
    }
}