#include <iostream>

std::string drawCube(int n);

int main()
{   
    using namespace std;
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << drawCube(n);
    return 0;
}

std::string drawCube(int n)
{   
    using namespace std;
    string cube;
    if (n <= 0)
    {
        return cube;
    }
    else if (n == 1)
    {
        cube += "#";
        return cube;
    }
    else 
    {   
        //première ligne
        for(int x=0; x<n-1; x++) 
        {
            cube += " ";
        }
        for(int x=0; x<n; x++) 
        {
            cube += "#";
        }
        cube += "\n";

        //lignes jusque la face avant (ligne 2 à ligne n)
        for (int y=0; y<n-1; y++)
        {
            for (int x=0; x<n-y-2; x++)
            {
                cube += " ";
            }
            cube += "#";
            for (int x=0; x<n-2; x++)
            {
                if (y == n-2) //si la ligne = ligne n
                {
                    cube += "#";
                }
                else //intérieur face dessus
                {
                    cube += "*";
                }
            }
            cube += "#";
            for (int x=0; x<y; x++) //intérieur face côté
            {
                cube += "*";
            }
            cube += "#\n";
        }

        //face avant (ligne n+1 à ligne 2*n-2)
        for (int y=0; y<n-2; y++)
        {
            cube += "#";
            for (int x=0; x<n-2; x++) //intérieur face avant
            {
                cube += " ";
            }
            cube += "#";
            for (int x=0; x<n-y-3; x++) //intérieur face côté
            {
                cube += "*";
            }
            cube += "#\n";
        }

        //dernière ligne (ligne 2*n-1)
        for(int x=0; x<n; x++) 
        {
            cube += "#";
        }
        return cube;
    }
}