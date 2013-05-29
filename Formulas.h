
using namespace std;
     void Kineomatics()
     {
      int choice1;
      cout << "\t1. Velocity \n";
      cout << "\t2. Acceleration \n";
      cout << "\t3. Kinematics equation 1(displacement = initial velocity * time + (1/2) * acceletation * time^2) \n";
      cout << "\t4. Kinematics equation 2(displacement = (1/2)initial velocity + final velocity * time) \n";
      cout << "\t5. Kinematics equation 3(final velocity^2 = initial velocity^2 + 2 * acceleration * displacement) \n";
      cout << "\t6. Kinematics equation 4(final velocity = initial velocity + acceletation * time) \n\n";
      cout << "Choose one: ";
      cin >> choice1;
      if (choice1 == 1)
      {
                    double CD;
                    double CT;
                    double Velo;
                    cout << "You choose Velocity.";
                    system("cls");
                    cout << "What is the distance? ";
                    cin >> CD;
                    system("cls");
                    cout << "What is the Time it takes to go that distance?";      
                    cin >> CT;
                    system("cls");
                    Velo = CD / CT;
                    cout << "Your answer is: "<< Velo << endl;     
                  }
      if (choice1 == 2)
      {
                    double acc;
                    double velo;
                    double time;
                    cout << "You Choose Acceleration.";
                    system ("cls");
                    cout << "Please enter the Velocity: ";
                    cin >> velo;
                    system ("cls");
                    cout << "Please Enter the Time";
                    cin >> time;
                    system ("cls");
                    acc = velo / time;
                    cout << "Your acceletation is: " << acc << endl;
                  
                  }
        if (choice1 == 3)
        {           system ("cls");
                    cout << "You chose kinematics equation number 1 \n\n";
                    
                    
                    }
        if (choice1 == 4)
        {           system ("cls");
                    cout << "You chose kinematics equation number 2 \n\n";
                    
                    }
        if (choice1 == 5)
        {           system ("cls");
                    cout << "You chose kinematics equation number 3 \n\n";
                    
                    }
        if (choice1 == 6)
        {           system ("cls");
                    cout << "You chose kinematics equation number 4 \n\n";
                    
                    }
          }
     void Dynamics()
     {
		  system("cls")
          cout << "you chose Dynamics \n\n";
		  	  
          
          }
     void Projectiles(){}
     void CircularPlanetaryMotion(){}
     void MomentumWorkEnergyMachnies(){}
     void HeatThermodynamics(){}
     void FluidsSolids(){}
     void WavesSounds(){}
     void ElectricityMagnetism(){}
     void information()
     {
          //si prefixes, physical constants and useful data, thermodynamics and coefficients of expansion
	 }
     void constants(){}
	 void conversions(){}
	 void addition(){}
	 void subtraction(){}
	 void multiplication(){}
	 void division(){}