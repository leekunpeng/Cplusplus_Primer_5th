/*
*   chap02
*/
#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;
// practise
int base_zhunayi()
{
    cout << "输出测试转义序列\n";
    cout << "\"纵向制表符\" 李 \v 昆 \n";
    cout << "\"横向制表符\" 里 \t 昆\n";
    cout << "\"反斜线 + 回车\" \\ \'+\'\r \n";
    cout << "\"报警\" \a \n";

    return 0;
}

int base_Const()
{
    int i{0};
    int *const p1 = &i;
    const int ci{42};
    const int *p2 = &ci;
    const int *const p3 = p2;
    const int &r = ci;
    p2 = p3;
    p2 = &i;
    const int &r2 = i;
    constexpr int mf{20};
    constexpr int limit = mf + 1;
    return 0;
}

int base_Alias()
{
    typedef char *pstring;
    const pstring cstr = 0;
    const pstring *ps;
    using pt1 = char *;
    const pt1 sctr1 = nullptr;
    const pt1 *ps1 = nullptr;
    cout << typeid(cstr).name() << endl;
    cout << typeid(ps).name() << endl;
    cout << typeid(sctr1).name() << endl;
    cout << typeid(ps1).name() << endl;
    return 0;
}

int base_Auto()
{
    int i{0}, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    const auto &j = 42;
    return 0;
}
// exercise
int ex2_3()
{
    unsigned u{10}, u2{42};
    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i{10}, i2{42};
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;

    return 0;
}
int ex2_8()
{
    cout << "2\x4d\012";
    cout << "2\tM\n";
    return 0;
}
int ex2_18()
{
    int a{1988}, b{0101};
    int *pt = &a;
    cout << *pt << "\t" << pt << "\t" << sizeof(pt) << "\t" << sizeof(a);
    return 0;
}
int ex2_27()
{
    int dd{0};

    const int i = -1, &r = dd;
    return 0;
}

int ex2_35()
{
    const int i{42};
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    cout << typeid(i).name() << endl;
    cout << typeid(j).name() << endl;
    cout << typeid(k).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(j2).name() << endl;
    cout << typeid(k2).name() << endl;
    return 0;
}
// mian
double *globalPt;
int main()
{
    // ex2_3();
    // base_zhunayi();
    // ex2_8();
    /*extern int &ab;
    int ming{0};
    int &bai = ming;
    int &hong = ming;
    cout << ming << "\t" << bai << "\t" << hong << "\n";*/
    /*double *loaclPt;
    cout<<globalPt<<"\t"<<loaclPt<<"\n";
    cout<<sizeof(loaclPt);*/
    //ex2_18();
    int errNumb = 0;
    int *const curErr = &errNumb;
    const double pi = 3.14159;
    const double *const pip = &pi;
    // base_Alias();
    // ex2_35();
    return 0;
}