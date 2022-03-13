#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int ascii_end = 126;
const int ascii_start = 33;


namespace ariel
{
    
    string mat(int m, int n, char b, char c)
    {

      if (b < ascii_start || b > ascii_end)
    {
        throw std::invalid_argument("First Symbol are not  valid ");
    }

    if (c < ascii_start || c > ascii_end)
    {
        throw std::invalid_argument("Second Symbol are not valid ");
    }

        if (m < 0 || n < 0)
        {
            throw std::invalid_argument( "Invalid negative value" );
        }

        if (m % 2 == 0 || n % 2 == 0)
        {
             throw std::invalid_argument( "Invalid even value" );
        }



//build vec 
        vector<vector<int>> vec(n, vector<int>(m));


        int k = 0;

        for (int i = 0; i < n && k < m; i++)
        {
            for (int j = k; j < m; j++)
            {
                vec[i][j] = i;
            }

            for (int j = i; j < n; j++)
            {
                vec[j][k] = i;
            }
            k++;
        }

//build vec reserve
      vector<vector<int>> vec_reverse(n, vector<int>(m));


        int a = 0;
        int tmp1 = n - 1;
        int tmp2 = m - 1;


        for (int i = tmp1; i >= 0 && a < m; i--)
        {
            for (int j = tmp2 - (tmp1 - i); j >= 0; j--)
            {
                vec_reverse[i][j] = a;
            }

            for (int j = i; j >= 0; j--)
            {
                vec_reverse[j][tmp2 - (tmp1 - i)] = a;
            }
            a++;
        }


//minimum between vec and vec_reverse
        vector<vector<int>> final_vec(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vec[i][j] <= vec_reverse[i][j])
                {
                    final_vec[i][j] = vec[i][j];
                }
                else
                {
                    final_vec[i][j] = vec_reverse[i][j];
                }
            }
        }
//minimum vec mod 2

        for (int d = 0; d < n; d++)
        {
            for (int b = 0; b < m; b++)
            {

                final_vec[d][b] = final_vec[d][b] % 2;
            }
        }

//convert final_vec to char_vec

        vector<vector<char>> char_vec(n, vector<char>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (final_vec[i][j] == 0)
                {

                    char_vec[i][j] = b;
                }
                else
                {
                    char_vec[i][j] = c;
                }
            }
        }


// print the vec_char
         for(int d = 0; d < n; d++)
     {
        for(int b = 0; b < m; b++)
        {
            cout << char_vec[d][b] << " ";
         }
         cout << endl;
     }

// convert char vec to string

        string bar;
        bar = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                bar += char_vec[i][j];
            }
        }

        return bar;
    }
}


     
   


        
    