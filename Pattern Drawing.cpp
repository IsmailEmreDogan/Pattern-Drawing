#include <iostream>
using namespace std;
//Ýsmail Emre Doðan
//1316190011
//Date:1.12.2020
//Development  Enviroment: Visual Studio 2019


int rectangle1(int n);
int rectangle2(int n);
int rectangle3(int x);
int rectangle4(int x);

int rhomb(double x);
int Circle(double s);
int menu(); 


int main()
{
    double dimention = 0;
    int calc = 0;
    cout << "Enter Your Choice : \n1. Rectangle 1\n2. Rectangle 2\n3. Rectangle 3\n4. Rectangle 4\n5. Rhomb (Only Odd)\n6. Circle\n7. Close Application\nYour Choice:";
    cin >> calc;
    switch (calc)
    {
    case 1:
        cout << " enter dimention ";
        cin >> dimention;
        rectangle1(dimention);
        break;
    case 2:
        cout << " enter dimention ";
        cin >> dimention;
        rectangle2(dimention);
        break;
    case 3:
        cout << " enter dimention ";
        cin >> dimention;
        rectangle3(dimention);
        break;
    case 4:
        cout << "enter dimention ";
        cin >> dimention;
        rectangle4(dimention);
        break;
    case 5:
        cout << " enter dimention ";
        cin >> dimention;
        rhomb(dimention);
        break;
    case 6:            
        cout << "enter dimention: ";            
        cin >> dimention;            
        Circle(dimention - 1);
    
    case 7:
        system("exit");
    }
    return 0;
}


int menu() 
{
    int push_button;
    cin >> push_button;
    switch (push_button)
    {
    default:
        system("cls");
    }
    return main();
}




 int rectangle1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
    return menu();
}

 int rectangle2(int n)
     
{
     ;
     for (int i = n; i >= 1; --i)
     {
         for (int j = 1; j <= i; ++j)
         {
             cout << "* ";
         }
         cout << endl;
     }
     return menu();
	}

    


 int rectangle3(int x)
{
     for (int i = 1; i <= x; i++)
     {
         for (int y = x - i; y > 0; y--)
         {
             cout << " ";
         }
         for (int z = 1; z <= i; z++)
         {
             cout << "*";
         }
         cout << endl;
     }
     return menu();
    
}

  int rectangle4(int x)

 {
      for (int i = 1; i <= (x / 2) + 1; i++)
      {
          for (int y = i; y <= (x / 2) + 1; y++) 
          {
              cout << " ";
          }
          for (int z = 1; z <= (2 * i) - 1; z++) 
          {
              cout << "*";
          }
          
          cout << endl;
      }
      return menu();
 }

    
    int rhomb(double x)
    {
        for (int i = 1; i <= (x / 2); i++)
        {
            for (int y = i; y <= x / 2; y++)
            {
                cout << " ";
            }
            for (int z = 1; z <= (2 * i) - 1; z++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = (x / 2); i < x; i++)
        {
            for (int y = i; y > (x / 2); y--)
            {
                cout << " ";
            }
            for (int z = 2 * i; z < (2 *x) - 1; z++)
            {
                cout << "*";
            }
            cout << endl;
        }
        return menu();

    }

    int Circle(double s) {
        double yaricap = s / 2;
        double kontrol = 0;
        for (double y = (s / 2); y >= -(s / 2); y--)
        {
            for (double x = -(s / 2); x <= (s / 2); x++)
            {
                
                kontrol = pow(x, 2) + pow(y, 2) - pow(yaricap, 2);
                if (fabs(kontrol) >= 1.25*yaricap)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
        return menu();
    }

    