#include<windows.h>
/* change the color of the whole thing by using the system command
First number = background, second number = foreground

system("color 1F"); 

Colors are as follows:
       0 = black           8 = gray
       1 = dark blue       9 = light blue
       2 = dark green      A = light green
       3 = dark aqua       B = light aqua
       4 = dark red        C = light red
       5 = dark purple     D = light purple
       6 = dark yellow     E = light yellow
       7 = dark white      F = bright white

This changes the background of the entire document. If you want to change the color
of 1 particular line of code use the code below.

*/

// use this function to choose exactly which color number you want to use.
// the background of the color choice should match the background of your file
// i.e. you have a dark aqua file, you must choose on in the range of aqua.
void ChoosingColorFunction()
{
     for(int x = 0; x < 256; x++)
     {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
         cout << "This is the color at number " << x << endl;
     }
}


/* Included are some functions to change colors to standard colors. Remember that
   you have to change the color BACK to normal right after you display the thing
   with the different colors. These functions only work correctly if you have
   a black background to begin with. 
   
   If you have a different background color, change the number to the appropriate
   value to match your background color after running the function above. */
   
void DkBlue()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
}

void DkGreen()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
}

void DkAqua()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
}

void DkRed()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
}

void DkPurple()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
}

void DkYellow()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
}

void Normal()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void Gray()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
}

void LtBlue()
{
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
}

void LtGreen()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
}

void LtAqua()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
}

void LtRed()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
}

void LtPurple()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
}

void LtYellow()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
}

void BrtWhite()
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}


// use the function below to test out the colors
void ExampleFunction()
{
     Normal();
     cout << "Normal text...\n\n";
     
     LtRed();
     cout << "Red text...\n\n";
     
     LtGreen();
     cout << "Green text...\n\n";
     
     Normal();
     cout << "Back to normal for the rest of the program...\n\n";
}
