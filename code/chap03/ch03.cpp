#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <array>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <cstddef>
#include <iterator>
#include <cstring>

using std::array;
using std::bitset;
using std::cin;
using std::cout;
using std::endl;
using std::iterator;
using std::string;
using std::vector;

int base_String_init()
{
    string s1{"value"};
    string s2(s1);
    string s3 = s2;
    string s4{s2};
    string s5(10, 'h');
    string s6 = "hi how are you";
    cout << s1 << endl
         << s2 << endl
         << s3 << endl
         << s4 << endl
         << s5 << endl
         << s6 << endl;
    return 0;
}

int base_String_read()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << "\n"
         << s2 << endl;
    return 0;
}

int base_String_getline()
{
    string line;
    while (getline(cin, line))
        cout << line << "\n";
    return 0;
}

// exercise
int ex3_4()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1 > s2)
        cout << s1 << " is bigger than " << s2 << endl;
    else
        cout << s2 << " is bigger than " << s1 << endl;
    if (s1.size() > s2.size())
        cout << s1 << " is longer than " << s2 << endl;
    else
        cout << s1 << " is longer than " << s2 << endl;
    return 0;
}
int ex3_5()
{
    string s1, sum, flags{"quit"};
    while (getline(cin, s1))
    {
        if (flags == s1)
        {
            cout << sum << " " << s1 << endl;
            return 0;
        }
        else
            sum += (" " + s1);
    }
    return 0;
}
int ex3_2_3()
{
    string s("hello wprld");
    cout << s << endl;
    for (auto &c : s)
        c = 'X';
    cout << s << endl;
    for (char &c : s)
        c = 'B';
    cout << s << endl;
    decltype(s.size()) index = 0;
    while (index != s.size())
    {
        s[index] = 'C';
        ++index;
    }
    cout << s << endl;
    for (index = 0; index != s.size(); ++index)
        s[index] = 'D';
    cout << s << endl;

    string s2("hey,i'am fine. and you?");
    string s3;
    for (auto &c : s2)
    {
        if (!ispunct(c))
            s3 += c;
    }
    cout << s2 << endl
         << s3 << endl;

    return 0;
}

void ex3_3_2()
{
    vector<string> v1 = {"a", "hi", "hi"};
    vector<int> v2;
    vector<string> v3;
    int n{0};
    //while(cin>>n)
    //v2.push_back(n);
    string s;
    //while(getline(cin,s))
    //v3.push_back(s);

    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
            ++scores[grade / 10];
    }
}

void ex3_3_3()
{
    /*vector<string> vs;
    string s;
    while (cin >> s)
    {
        if (s == "quit")
            break;
        else
            vs.push_back(s);
    }
    for (auto &s : vs)
    {
        for (auto &c : s)
            c = toupper(c);
    }
    for (auto s : vs)
        cout << s << " \n";
    */
    /*
    vector<int> vI1(10,42);
    vector<int> vI2{42,42,42,42,42,42,42,42,42,42};
    vector<int> vI3;
    for(decltype(vI3.size()) i = 0; i<10;++i)
    vI3.push_back(42);
    for(decltype(vI3.size()) i = 0; i<10;++i)
    {
        cout<<vI1[i]<<endl;
        cout<<vI2[i]<<endl;
        cout<<vI3[i]<<endl;
    }
    */
    vector<int> vI;
    int I;
    while (cin >> I)
        vI.push_back(I);
    for (decltype(vI.size()) n = 0; n < vI.size() - 1; ++n)
        cout << vI[n] + vI[n + 1] << endl;
    for (decltype(vI.size()) n = 0; n < vI.size() / 2; ++n)
        cout << vI[n] + vI[vI.size() - 1 - n] << endl;
}

void ex3_4_1()
{
    vector<int> vI(5, 10);
    for (auto it = vI.cbegin(); it != vI.cend(); ++it)
        cout << *it << endl;
    for (auto it = vI.begin(); it != vI.end(); ++it)
        *it = (*it) * 2;
    for (vector<int>::const_iterator it = vI.begin(); it != vI.cend(); ++it)
        cout << *it << endl;

    vector<int>::difference_type it = vI.end() - vI.begin();
    int n = it;
    cout << it;
}

void ex3_4_3()
{
    /*vector<string> text;
    string s;
    while (getline(cin, s))
        text.push_back(s);
        // 两个迭代器访问
    for (auto it = text.begin(); it != text.end() && it->empty(); ++it)
        for (auto it2 = it->begin(); it2 != it->end(); ++it2)
        {
            *it2 = toupper(*it2);
            cout << *it2 << endl;
        }
        */
    vector<int> vInt;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        vInt.push_back(rand() % 10);
    }
    for (auto it = vInt.cbegin(); it != vInt.cend(); it++)
    {
        cout << *it << endl;
    }
    for (auto it = vInt.begin(); it != vInt.end(); it++)
    {
        *it = (*it) * 2;
        cout << *it << endl;
    }
}

void ex3_24_1()
{
    vector<int> vInt;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        vInt.push_back(rand() % 10);
    }
    for (auto it = vInt.cbegin(); it != vInt.cend(); it++)
    {
        cout << *it << " ";
    }
    for (auto it = vInt.cbegin(); it != vInt.cend(); it++)
    {
        cout << (*it + *(++it)) << " ";
        if ((it - vInt.cbegin() + 1) % 10 == 0)
            cout << endl;
    }
    if (vInt.size() % 2 != 0)
        cout << *(vInt.cend() - 1);
    int a[10];
    cout << sizeof(a) / sizeof(a[0]) << endl;
}

void ex3_5_2()
{
    int arr[10];
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
    }
    for (auto i : arr)
        cout << i << endl;
}

void ex3_5_3()
{
    int arr[] = {10, 10, 10, 9, 9, 9};
    auto a1(arr);
    decltype(arr) a2;
    cout << sizeof(a1) << endl
         << sizeof(a2) / sizeof(a2[0]) << endl;
    int *end = &arr[6];
    for (int *b = arr; b != end; ++b)
        cout << *b << endl;
    int *pbeg = std::begin(arr);
    int *pend = std::end(arr);
    while (pbeg != pend && *pbeg == 9)
        ++pbeg;
    cout << pbeg << endl;
}

void ex3_36()
{
    const int sz = 5;
    int a[sz], b[sz], i;
    srand((unsigned)time(NULL));
    for (i = 0; i < sz; i++)
        a[i] = rand() % 10;
    cout << "gernate complete\n";
    int uVal;
    for (i = 0; i < sz; i++)
    {
        if (cin >> uVal)
            b[i] = uVal;
    }
    cout << "sys gernate num is \n";
    for (auto val : a)
        cout << val << " ";
    cout << endl;
    cout << "your guess is \n";
    int *p = std::begin(a), *q = std::begin(b);
    while (p != std::end(a) && q != std::end(b))
    {
        if (*p != *q)
        {
            cout << "error wrong num\n";
            break;
        }
        p++;
        q++;
    }
    cout << "congratulations\n";
}

void ex3_36_vector()
{
    const int sz = 5;
    int i;
    vector<int> a, b;
    srand((unsigned)time(NULL));
    for (i = 0; i < sz; i++)
    {
        a.push_back(rand() % 10);
    }
    for (auto it : a)
    {
        cout << it << " ";
        it++;
    }
    cout << endl;
    int uVal;
    for (int i = 0; i < sz; i++)
    {
        if (cin >> uVal)
            b.push_back(uVal);
    }
    for (auto val : b)
        cout << val << " ";
    cout << endl;
    auto it1 = a.begin(), it2 = b.begin();
    while (it1 != a.end() && it2 != b.end())
    {
        if (*it1 != *it2)
        {
            cout << "guess wrong\n";
            break;
        }
        it1++;
        it2++;
    }
    cout << "congratulations\n";
}

void ex3_39_1()
{
    string str1, str2;
    cout << "please input two string\n";
    cin >> str1 >> str2;
    if (str1 > str2)
        cout << "str1 > str2\n";
    else if (str1 < str2)
        cout << "str1 < str2\n";
    else
        cout << "str1 = str2\n";
}

void ex3_39_2()
{
    char str1[80], str2[80];
    cin >> str1 >> str2;
    auto result = strcmp(str1, str2);
    switch (result)
    {
    case 0:
        cout << "str1 = str2";
        break;
    case -1:
        cout << "str1 < str2";
        break;
    case 1:
        cout << "str1 > str2";
        break;

    default:
        cout << "unknow result\n";
        break;
    }
}

void ex3_40_1()
{
    char str1[] = "hello ";
    char str2[] = "C++, i love you! ";
    const int length = strlen(str1) + strlen(str2) - 1;
    char *ptRes = new char[length];
    memset(ptRes, 0, sizeof(char) * length);
    strcpy(ptRes, str1);
    strcat(ptRes, str2);
    cout << length << "\t" << sizeof(ptRes) / sizeof(char) << endl;
    cout << ptRes << endl;
    delete[] ptRes;
}

void ex3_41()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    vector<int> vInt(std::begin(arr), std::end(arr));
    for (auto vI : vInt)
        cout << vI << endl;
    int i = 0;
    if (sizeof(arr) / sizeof(int) >= vInt.size())
    {
        for (auto vi : vInt)
        {
            arr[i] = vi;
            i++;
        }
    }
    for (auto ar : arr)
        cout << ar << " ";
}

void ex3_41_2()
{
    const int sz = 10;
    vector<int> vInt;
    srand((unsigned)time(NULL));
    for (int i = 0; i < sz; i++)
    {
        vInt.push_back(rand() % 100);
        cout << vInt[i] << " ";
    }
    cout << endl;
    auto it = vInt.cbegin();
    int a[vInt.size()];
    for (auto &val : a)
    {
        val = *it;
        cout << val << " ";
        it++;
    }
}

void mutiArray()
{
    constexpr size_t rowCnt = 3, cloCnt = 4;
    int ia[rowCnt][cloCnt];
    for (size_t i = 0; i != rowCnt; ++i)
        for (size_t j = 0; j != cloCnt; ++j)
            ia[i][j] = i * rowCnt + j;

    // range for
    int ib[rowCnt][cloCnt];
    size_t cnt = 0;
    for (auto &row : ib)
        for (auto &col : row)
        {
            col = cnt;
            ++cnt;
        }

    for (const auto &row : ib)
        for (auto col : row)
            cout << col << endl;

    for (auto p = ib; p != ib + 3; ++p)
        for (auto q = *p; q != *p + 4; ++q)
            cout << *q << endl;

    // begin & and version
    for (auto p = std::begin(ib); p != std::end(ia); ++p)
        for (auto q = std::begin(*p); q != std::end(*p); ++q)
            cout << *q << endl;
}

void ex3_6()
{
    // version1
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int(&row)[4] : ia)
    {
        for (int &col : row)
            cout << col << " ";
        cout << endl;
    }
    // version2
    for (int i = 0; i != 3; i++)
    {
        for (int j = 0; j != 4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    // version3
    for (int(*p)[4] = ia; p != ia + 3; p++)
    {
        for (int *q = *p; q != *p + 4; q++)
            cout << *q << " ";
        cout << endl;
    }
}

void ex3_6_2()
{
    using int_array = int[4]; 
    // version1
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int_array &row : ia)
    {
        for (int &col : row)
            cout << col << " ";
        cout << endl;
    }
    // version2
    for (int i = 0; i != 3; i++)
    {
        for (int j = 0; j != 4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    // version3
    for (int_array *p = ia; p != ia + 3; p++)
    {
        for (int *q = *p; q != *p + 4; q++)
            cout << *q << " ";
        cout << endl;
    }
}

int main()
{
    //base_String_getline();
    //ex3_5();
    string str("some thing");
    for (auto e : str)
        cout << e << endl;

    string s("hello world!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt << " punctuation characters in " << s << endl;

    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;

    string s1("some string");
    for (decltype(s1.size()) index = 0; index != s1.size() && !isspace(s1[index]); ++index)
        s1[index] = toupper(s1[index]);
    cout << s1 << endl;

    /*const string hexdigits{"0123456789ABCDEF"};
    cout << "Enter a series of numbers beteween 0 and 15"
         << " spearate by space. Hit ENTER when finish:"
         << endl;
    string result;
    string::size_type n;
    while (cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];
    cout << "hex number is:" << result << endl;*/
    //ex3_2_3();
    //ex3_3_2();
    //ex3_4_1();
    //ex3_4_3();
    //ex3_24_1();
    //ex3_5_2();
    //ex3_5_3();
    //ex3_36();
    //ex3_36_vector();
    //ex3_39_1();
    //ex3_39_2();
    //ex3_40_1();
    //ex3_41();
    //ex3_41_2();
    ex3_6();
    ex3_6_2();
    cin.get();
    return 0;
}