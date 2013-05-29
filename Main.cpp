//-----------------------------------------------------------------------------------
//                                                                                   
// Created by: Andrew MacFarlane                                                      
// (c) copyright Andrew Macfarlane <andrew-macfarlane at live dot com>                                                                              *
//                                                                                
//-----------------------------------------------------------------------------------
#include<iostream>
#include<windows.h>
#include<ctime>
#include<cstdlib>

using namespace std;
#include "formulas.h"
#include "ChangingColors.h"
int main()
{
    restart:
    int area;
    BrtWhite();
    cout << "Choose your area \n\n";
    LtBlue();
    cout << "\t1. Physics \n";
    LtRed();
    cout << "\t2. Math \n";
    LtAqua();
    cout << "\t3. Constants and information \n\n";
    BrtWhite();
    cout << "Choose one: ";
    Normal();
    cin >> area;
    // Physics Area ****************
    if (area == 1)
        {
            system("cls");
            int choice;
            
            chooseagain:
            BrtWhite();
            cout << "Please choose one of the numbers: \n\n";
            LtBlue();
            cout << "\t1. Kinematics \n";
            cout << "\t2. Dynamics \n";
            cout << "\t3. Projectiles \n";
            cout << "\t4. Circular & Planetary Motion \n";
            cout << "\t5. Momentum, Work, Energy & Machnies \n";
            cout << "\t6. Heat & Thermodynamics \n";
            cout << "\t7. Fluids & Solids \n";
            cout << "\t8. Waves & Sounds \n";
            cout << "\t9. Electricity & Magnetism \n\n";
            BrtWhite();
            cout << "Choose one: ";
            Normal();
            cin >> choice;
            
            if(choice == 1){system("cls"); Kineomatics();}
             else if(choice == 2){system("cls"); Dynamics();}
             else if(choice == 3){system("cls"); Projectiles();}
             else if(choice == 4){system("cls"); CircularPlanetaryMotion();}
             else if(choice == 5){system("cls"); MomentumWorkEnergyMachnies();}
             else if(choice == 6){system("cls"); HeatThermodynamics();}
             else if(choice == 7){system("cls"); FluidsSolids();}
             else if(choice == 8){system("cls"); WavesSounds();}
             else if(choice == 9){system("cls"); ElectricityMagnetism(); }
              else {system("cls"); cout << "Please enter a valid choice"<< endl; goto chooseagain;}      
          } 
          // Math Area ****************************       
    if (area == 2)
        {
         system("cls"); 
         int choice;
		 chooseagain1:
         LtRed();  
         cout << "\t1. Addition \n";
         cout << "\t2. Subtraction \n";
         cout << "\t3. Multiplication \n";
         cout << "\t4. Division \n\n";
         cout << "Choose one: ";
         cin >> choice;
              if (choice == 1){system("cls"); Addition();}
              else if (choice == 2){system("cls"); Subtraction();}
              else if (choice == 3){system("cls"); Multiplication();}
              else if (choice == 4){system("cls"); Division();}
			  else {system("cls"); cout << "Please enter a valid choice"<< endl; goto chooseagain1;} 
              
              //put all variables in here   
                 }
				 // Everything else
    if (area == 3)
    {
             int choice;
			 chooseagain2:
    cout << "\t1. Constants \n";
    cout << "\t2. Conversions \n";
    cout << "\t3. Information \n\n";
    cout << "Choose one: ";
     cin >> choice;
         if (choice == 1){system("cls");constants();}
         else if (choice == 2){system("cls");conversions();}
         else if (choice == 3){system("cls");information();}
		 else {system("cls"); cout << "Please enter a valid choice"<< endl; goto chooseagain2;} 
            // Constants and Informtion **********************************
    }
    
 system ("pause");   
}
