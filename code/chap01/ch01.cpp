/*
* 第一章 chap01
*/

#include <iostream>

using namespace std;

void base_IO()
{
    cout << "Enter two numbers: \n";
    int v1{0}, v2{0};
    cin >> v1 >> v2;
    cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
}
void base_While(int cnt_begin = 1, int cnt_end = 10, bool is_print = false)
{
    int sum{0}, val{cnt_begin};
    while (val <= cnt_end)
    {
        sum += val;
        if (true == is_print)
            cout << val << endl;
        ++val;
    }
    if (false == is_print)
        cout << "sum of " << cnt_begin << "to" << cnt_end << " is : " << sum << "\n";
}
void base_For(int cnt_begin = 1, int cnt_end = 10, bool is_print = false)
{
    int sum{0}, val{cnt_begin};
    for (int i = val; i <= cnt_end; ++i)
    {
        sum += val;
        if (true == is_print)
            cout << i;
    }
    if (false == is_print)
        cout << "sum of " << cnt_begin << "to" << cnt_end << " is : " << sum << "\n";
}
void cin_unknow()
{
    int sum{0}, value{0};
    while (cin >> value)
    {
        sum += value;
    }
    cout << "Sum is : " << sum << "\n";
}
void base_If()
{
    int currVal{0}, val{0};
    if (cin >> currVal)
    {
        int cnt{1};
        while (cin >> val)
        {
            if (currVal == val)
                ++cnt;
            else
            {
                cout << currVal << " occurs " << cnt << " times/n";
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times/n";
    }
}
// include sales_item hpp
#include "Sales_item.h"

void base_Sales_Item()
{
    Sales_item book;
    cin >> book;
    cout << book;
}

void base_Sales_Item_plus()
{
    Sales_item item1, item2;
    cin >> item1 >> item2;
    cout << item1 + item2 << endl;
}
void ex1_3(string s = "hello world")
{
    cout << s << endl;
}
void ex1_4()
{
    cout << "Enter two numbers: \n";
    int v1{0}, v2{0};
    cin >> v1 >> v2;
    cout << "the product of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
}
void ex1_5()
{
    cout << "Enter two numbers: \n";
    int v1{0}, v2{0};
    cin >> v1;
    cin >> v2;
    cout << "the product of ";
    cout << v1;
    cout << " and ";
    cout << v2;
    cout << " is ";
    cout << v1 * v2;
    cout << endl;
}
void ex1_9()
{
    base_While(50, 100);
}
void ex1_10()
{
    int v1{0}, v2{0};
    cout << "please input two nums: \n";
    cin >> v1 >> v2;
    if (v1 > v2)
        swap(v1, v2);
    base_While(v1, v2, true);
}
void ex1_13()
{
    int v1{0}, v2{0};
    cout << "please input two nums: \n";
    cin >> v1 >> v2;
    if (v1 > v2)
        swap(v1, v2);
    base_For(50, 100);
    base_For(v1, v2, true);
}
void ex1_16()
{
    cin_unknow();
}

void ex1_20()
{
    for (Sales_item item; cin >> item; cout << item)
        ;
}
void ex1_21()
{
    Sales_item item1{}, item2{};
    cout << " plesae input two isbn record /n";
    cin >> item1 >> item2;
    if (compareIsbn(item1, item2))
        cout << "sum of sale items is " << item1 + item2 << endl;
    else
        cout << "isbn id different /n"
             << item1 << endl
             << item2 << endl;
}
int ex1_22()
{
    Sales_item total{}, trans{};
    cout << " plesae input two isbn record /n";
    if (cin >> total)
    {
        while (cin >> trans)
        {
            if (compareIsbn(total, trans))
                total += trans;
            else
            {
                cout << "different isbn\n";
                return -1;
            }
        }
        cout << "汇总信息： ISBN、售出本数、销售额、平均售价为/n"
             << total << endl;
    }
    else
    {
        cout << "没有数据\n";
        return -1;
    }
    return 0;
}
int ex1_24()
{
    Sales_item trans1{}, trans2{};
    int num{1};
    cout << " plesae input isbn record \n";
    if (cin >> trans1)
    {
        while (cin >> trans2)
        {
            if (compareIsbn(trans1, trans2))
                num++;
            else
            {
                cout << trans1.isbn() << " 共有 "
                     << num << " 条销售记录\n";
                trans1 = trans2;
                num = 1;
            }
        }
        cout << trans1.isbn() << " 共有 "
             << num << " 条销售记录\n";
    }
    else
    {
        cout << "没有数据\n";
        return -1;
    }
    return 0;
}
// mian fun
int main()
{
    // base_IO();
    // ex1_3();
    // /* 正常注释 /* 嵌套注释 */ 正常注释 */
    // base_While();
    // ex1_9();
    // ex1_10();
    // ex1_16();
    // base_Sales_Item_plus();
    // ex1_22();
    ex1_24();
    return 0;
}