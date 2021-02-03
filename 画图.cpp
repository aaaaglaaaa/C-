#include<iostream>
  using namespace std;
  void input(int x1, int y1, int x2, int y2,int a[100][100])    //给数组赋值（染色）
  {
      for (int i = x1; i < x2; i++)
      {
          for (int j = y1; j < y2; j++)
              a[i][j]++;
      }
 }
 
 int main()
 {
     static int a[100][100];
     int n, x1, y1, x2, y2;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
         cin >> x1 >> y1 >> x2 >> y2;
         input(x1, y1, x2, y2, a);
     }
     n = 0;
     //检索不为0的数目
     for (int i = 0; i < 100; i++)
     {
         for (int j = 0; j < 100; j++)
         {
             if (a[i][j] != 0)
                 n++;
         }
     }
     cout << n << endl;
     system("pause");
     return 0;
 }