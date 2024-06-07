#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;

    while (ss >> word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (isalpha(word[i]) && !isalpha(word[i + 1]))
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}

//this is also (accepted)
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string arr;
//     getline(cin, arr);
//     int count = 0;
//     int flag = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // if (arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z')
//         if (isalpha(arr[i])) // just reduced the code size
//         {
//             flag = 1;
//         }
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (flag == 0)
//         {
//             count = 0;

//             break;
//         }

//         if (isalpha(arr[i]))
//         {
//             continue;
//         }
//         else
//         {
//             if (isalpha(arr[i + 1]))
//             {
//                 count++;
//             }
//         }
//     }
//     if (isalpha(arr[0]))
//         cout << count + 1;
//     else
//         cout << count;

//     return 0;
// }

// copied from the instructor
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     bool inside_word = false;
//     int cnt = 0;
//     for (char c : s)
//     {
//         if (isalpha(c))
//         {
//             if (inside_word == false)
//             {
//                 cnt++;
//             }
//             inside_word = true;
//         }
//         else
//         {
//             inside_word = false;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }

// logic did not match(my code)
//  #include <bits/stdc++.h>
//  using namespace std;

// int main()
// {
//     string nme;
//     getline(cin, nme);
//     stringstream ss(nme);
//     string word;
//     int count = 0;
//     while (ss >> word)
//     {
//         int flag = 0;
//         for (int i = 0; i < word.size(); i++)
//         {
//             if (word[i] >= 'A' && word[i] <= 'Z' || word[i] >= 'a' && word[i] <= 'z')
//             {
//                 flag = 1;
//             }
//         }
//         if (flag == 1)
//             count++;
//     }
//     cout << count;

//     return 0;
// }