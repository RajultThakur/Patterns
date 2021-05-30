// program for printing different patterns
#include <iostream>
#include <stdlib.h>
using namespace std;
void rectangle(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void hollowRectangle(int row, int col)
{
    int i, j;
    i = j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0 || i == row)
                cout << "* ";
            else if (j == 0 || j == col)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void inverted_half_pyramid(int hei)
{
    int i, j;
    i = j = 0;
    for (i = 0; i < hei; i++)
    {
        for (j = hei; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void inverted180(int hei)
{
    int i, j;
    i = j = 0;
    for (i = hei; i >0; i--)
    {
        for (j = 1; j <= hei; j++)
        {
            if (j < i)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}
void numberInverted(int hei)
{
    int i, j;
    i = j = 0;
    for (i = 1; i <= hei; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << i << "  ";
        }
        cout << endl;
    }
}
void floyd(int hei)
{
    int i, j;
    i = j = 0;
    int x = 1;
    for (i = 1; i <= hei; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << x++ << "  ";
        }
        cout << endl;
    }
}
void butterFlyPattern(int hei)
{
    int i, j;
    i = j = 0;
    for (i = 1; i <= hei; i++)
    {

        // for printing stars
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        //for printing space
        int space = 2 * hei - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        // for printing stars
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //  for lower pattern
    for (i = hei; i > 0; i--)
    {

        // for printing stars
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        //for printing space
        int space = 2 * hei - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }

        // for printing stars
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void invertedPatterns(int row)
{
    int i = 0;
    int j = 0;
    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void ZeroOnePattern(int row)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            temp = (i + j) % 2;
            if (temp == 0)
            {
                cout << "1"
                     << " ";
            }
            else
                cout << "0"
                     << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void rhombusPattern(int row)
{
    int i, j;
    i = j = 0;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i ; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= row; j++)
        {
            cout << " *";
        }
        cout<<endl;
    }
}
void numberPattern(int row)
{
    int i, j;
    i = j = 0;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i ; j++)
        {
            cout << " ";
        }
        for (j = 1; j <=i; j++)
        {
            cout <<j<<" ";
        }
        cout<<endl;
    }
}
void palendromicPattern(int row){
    int i,j,k;
    i=j=k=0;
    for(i=1;i<=row;i++){
        for(j=row;j>i;j--)
        cout<<"  ";

        for(j=i;j>=1;j--)
        cout<<j<<" ";

        for(k=2;k<=i;k++)
        cout<<k<<" ";

        cout<<endl;

    }
}

void diamondStarPattern(int row){
     int i,j,k;
    i=j=k=0;
    for(i=1;i<=row;i++){
        for(j=row;j>i;j--)
        cout<<"  ";

        for(j=i;j>=1;j--)
        cout<<"*"<<" ";

        for(k=2;k<=i;k++)
        cout<<"*"<<" ";

        cout<<endl;
    }
    for(i=row;i>=1;i--){
        for(j=row;j>i;j--)
        cout<<"  ";

        for(j=i;j>=1;j--)
        cout<<"*"<<" ";

        for(k=2;k<=i;k++)
        cout<<"*"<<" ";

        cout<<endl;
    }
    
}
void ZigZag(int row,int col){
    int i,j;
    j=i=0;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            int temp=(i+j)%4;
            if(temp==0 ||(i%2==0 && j%4==0)){
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}



int main()
{
    int row, col;
    int height;
    int i, j, x;
    i = j = x = 0;
    int option = 0;

    do
    {
        cout << "MENU FOR PRINTING DIFFERENT PATTERNS.." << endl;
        cout << "1. for simple rectangle" << endl;
        cout << "2. for hollow rectangle" << endl;
        cout << "3. for inverted half pyramid" << endl;
        cout << "4. for for inverted half pyramid (180 deg. ritetion)" << endl;
        cout << "5. for inverted half pyramid using numbers" << endl;
        cout << "6. for floyd's pyramid" << endl;
        cout << "7. for butterfly patterns" << endl;
        cout << "8. for inverted patterns" << endl;
        cout << "9. for 0-1 patterns" << endl;
        cout << "10. for rhombus patterns" << endl;
        cout << "11. for number pattern in pyramid shap" << endl;
        cout << "12. for palindromic  pattern" << endl;
        cout << "13. for star patterns" << endl;
        cout << "14. for zig-zag patterns" << endl;
        cout << "0. for exit.." << endl;
        cout<<"111 for clear screen"<<endl;

        cout << "\noption : ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "enter row number : ";
            cin >> row;
            cout << "enter colum number : ";
            cin >> col;

            // this is for rectangle
            rectangle(row, col);
            break;

        case 2:
            cout << "enter row number : ";
            cin >> row;
            cout << "enter colum number : ";
            cin >> col;

            // this is for hollow rectangle
            hollowRectangle(row, col);
            break;

        case 3:
            // inverted half pyramid

            cout << "enter height of pyramid : ";
            cin >> height;

            cout << "INVERTED HALF PYRAMID " << endl;
            inverted_half_pyramid(height);

            break;

        case 4:

            // INVERTED HALF PYRAMID AFTER 180 DEGREE ROTETION
            cout << "enter height of pyramid : ";
            cin >> height;
            inverted180(height);

            break;

        case 5:

            //    INVERTED HALF PYRAMID USING NUMBERS
            cout << "enter height of pyramid : ";
            cin >> height;
            numberInverted(height);

            break;

        case 6:

            //  FLOYD'S PYRAMID
            cout << "enter height of pyramid : ";
            cin >> height;
            floyd(height);

            break;

        case 7:

            // butterfly pattern
            cout << "enter height of pyramid : ";
            cin >> height;

            butterFlyPattern(height);

            break;

        case 8:
            cout << "enter row number : ";
            cin >> row;
            invertedPatterns(row);
            break;

        case 9:
            cout << "enter row number : ";
            cin >> row;
            ZeroOnePattern(row);
            break;

        case 10:
            cout << "enter row number : ";
            cin >> row;
            rhombusPattern(row);
            break;
        case 11:
            cout << "enter row number : ";
            cin >> row;
            numberPattern(row);
            break;
        case 12:
            cout << "enter row number : ";
            cin >> row;
            palendromicPattern(row);
            break;
            break;
        case 13:
            cout << "enter row number : ";
            cin >> row;
            diamondStarPattern(row);
            break;
        case 14:
            cout << "enter row number : ";
            cin >> row;
            cout << "enter column number : ";
            cin >> col;
            ZigZag(row,col);
            break;

        case 111:
            system("CLS");
            break;

            
        default:
            cout << "enter valid option........" << endl;
        }
    } while (option);

    return 0;
}

