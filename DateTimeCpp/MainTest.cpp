// DateTimeCpp.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "DateTime.h"
#include <iostream>
using namespace std;


int main()
{
	auto d1 = DateTime::Now();
	auto d2 = d1.AddMilliseconds(99);
	auto d3 = d1.AddYears(-10).AddHours(10).AddMilliseconds(10);
	cout << d1.ToString(yyyy_MM_dd_hh_mm_ss_ms) << endl;
	cout << d2.ToString(yyyy_MM_dd_hh_mm_ss_ms) << endl;
	cout << d3.ToString(yyyy_MM_dd_hh_mm_ss_ms) << endl;
	cout << DateTime::Now().ToString() << endl;
	cout << "--------------" << endl;
	//
	for (int i = 0; i < 24; i++)
	{
		cout << d1.AddMonths(i).ToString(yyyy_MM_dd_hh_mm_ss) << endl;
	}
	cout << "--------------" << endl;
	for (int i = 0; i < 24; i++)
	{
		cout << d1.AddMonths(-i).ToString(yyyy_MM_dd_hh_mm_ss) << endl;
	}
	//
	cout << "--------------" << endl;
	cout << DateTime::NowWithMicroseconds().ToString(yyyy_MM_dd_hh_mm_ss_ms_us_ns) << endl;;
	cout << DateTime::NowWithNanoseconds().ToString(yyyy_MM_dd_hh_mm_ss_ms_us_ns) << endl;
	cin.get();
	return 0;
}

