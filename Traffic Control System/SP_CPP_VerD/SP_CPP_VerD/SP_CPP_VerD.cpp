#include <iostream>
#include <string>
using namespace std;


struct Date
{
	int day, month, year;
};

struct fine
{
	float value;
	string street_name;
	Date d_of_fine;
	string status;
};

struct car
{
	string plate_num;
	int model, production_year;
	string maker;
	fine car_fine;
};

struct Driver{
	string name;
	int car_num;
	long licence_num;
	Date d_of_b;
	car own_car[3];
	
}citizens;

struct Traffic_man 
{
	string name , id ,  password;

}traffic_men ;


  Driver D[100] =
  { 

	 //first
     {
	    "eslam", 1, 1017, 17,9,2001,
	 // 1st car
	    "e1017", 2019, 2019, "Toyota land cruser", 0.0, "unknown", 0,0,0, "paid" 
	 },
	 

	 //second
     {
	    "osama", 2, 1234, 5,6,2001,
	 // 1st car
        "o1234", 2018, 2018, "Ford"  , 0.0, "unknown", 0,0,0, "paid",
	 // 2nd car
	    "o2345", 2017, 2017, "Nissan", 0.0, "unknown", 0,0,0, "paid" 
	 },
	 

	 // third
     {
		"ahmed", 3, 3456, 12,12,2001,
	 // 1stcar
		"a3456", 2019, 2019, "Audi" , 0.0, "unknown", 0,0,0, "paid",
	 // 2ndcar
	    "a4567", 2020, 2020, "Mazda", 0.0, "unknown", 0,0,0, "paid",
	 // 3rdcar
	    "a5678", 2016, 2016, "Honda", 0.0, "unknown", 0,0,0, "paid"
	 },


	 // forth
     {
	    "mohamed", 1, 6789, 5,8,2000,
	 // 1stcar
	    "m6789", 2018, 2018, "Mitsubichi Lanser", 0.0, "unknown", 0,0,0, "paid"
	 },
	 

	 // fifth
	 {
	    "kamal", 2, 7891, 6,2,1994,
	 // 1stcar
	    "k7891", 2018, 2018, "Skoda", 0.0, "unknown", 0,0,0, "paid",
	 // 2ndcar
	    "k8911", 2019, 2019, "Isuzu", 0.0, "unknown", 0,0,0, "paid"
	 }, 

	 // sixth
	 { 
	    "sami", 1, 9876, 27,1,1978,
     // 1st car  
	    "s9876", 2017, 2017, "suzuki", 0.0, "unknown", 0,0,0, "paid" 
	 },
	 
	 // seventh
	 {
	    "mostafa", 2, 8765, 22,6,1986,
	 // 1st car
	    "m8765", 2018, 2018, "Chevorlate" , 0.0, "unknown", 0,0,0, "paid",
	 // 2nd car
	    "m7654", 2017, 2017, "Land Rover" , 0.0, "unknown", 0,0,0, "paid" 
	 },
	 
	 // eighth
	 {
	    "shaban", 3, 6543, 15,11,1972,
	 // 1stcar
	    "s6543", 2019, 2019, "Mrcedis", 0.0, "unknown", 0,0,0, "paid",
	 // 2ndcar
	    "s6432", 2020, 2020, "B M W"  , 0.0, "unknown", 0,0,0, "paid",
	 // 3rdcar
	    "s5678", 2010, 2010, "Hondai" , 0.0, "unknown", 0,0,0, "paid"
	 },

	 // ninth
	 {
	    "amar", 1, 4321, 5,8,1997,
     // 1st car 
	    "a4321", 2018, 2018, "Bently", 0.0, "unknown", 0,0,0, "paid"
	 },
	 
     // tenth
	 {
	    "noor", 2, 3210, 6,2,1999,
	 // 1stcar
	    "n3210", 2018, 2018, "PEUGEOT", 0.0, "unknown", 0,0,0, "paid",
	 // 2ndcar
	    "n0123", 2019, 2019, "Jaguar" , 0.0, "unknown", 0,0,0, "paid"
	 } 

  };// set data array


   void calculateFine();
   void seeFine();
   void payFine();
   void searchForCar();
   void setData();


int main()
{
	   char systemChoose ;
	   bool isTrafficMan = false, isCitizen = false, TrafficManOption = false, CitizenOption = false ;
	   const int TRAFFIC_MAN_NUM =10 ;
	   string Identity , choose_num_TrafficMan, choose_num_citizen ;


	   Traffic_man list_of_t[TRAFFIC_MAN_NUM]= 
	   { 
		   "hassan", "0123", "hassan0123",
		   "khaled", "1234", "khaled1234",
		   "tawfek", "2345", "tawfek2345",
		   "yaser" , "3456", "yaser3456" ,
		   "ali"   , "4567", "ali4567"   ,
		   "walied", "5678", "walied5678",
		   "hany"  , "6789", "hany6789"  ,
		   "salah" , "9876", "salah9876" ,
		   "adam"  , "8765", "adam8765"  ,
		   "amir"  , "7654", "amir7654" 
	   };
	  
	   // start screan
	   cout<<"\n\tWelcome we are in your service "<<endl;
	   cout << "\n <<--Hello in my \"Traffic control system\" -->>\n" ;

do{

       while (true)
       {
	     cout<<"\n Please Enter your identity you are ( Traffic_man or Citizen )\n\n ";
	     cin >>Identity ;

		 if (Identity == "traffic_man" || Identity == "Traffic_man")
	     {
		    isTrafficMan=true;
		    break;
	     }
	     else if (Identity == "citizen" || Identity == "Citizen")
     	 {
			isCitizen = true;
		    break;
		 }
	     else
	       cout <<"\nInvalid answer you can try again \"You must enter Traffic man  or  Citizen only\" \n\n ";
	     
       } // while



       // traffic man 
     if (isTrafficMan)
     {
	   while (true)
	   {
		  cout<<"\n\t\"You Entered as a Traffic man\"\n\n";

	      cout<<" Enter Your Name :- \n ";
	      cin >> traffic_men.name ;

	      cout<<"\n Enter Your ID :-\n ";
	      cin >> traffic_men.id;

	      cout<<"\n Enter Your Password :-\n ";
	      cin >> traffic_men.password ;

	     for (int i = 0; i< TRAFFIC_MAN_NUM; i++)
	     {
		   if ( (list_of_t[i].name == traffic_men.name)  &&  (list_of_t[i].id == traffic_men.id) &&  (list_of_t[i].password == traffic_men.password)  )
		   {	
			  TrafficManOption = true ;
			  isTrafficMan = false ; // to break from outer if
			  break; // break from for loop 
		   }
	
	     } // for

	      if (!TrafficManOption) 
			    cout<<"\nInvalid answer  OR  You did not Registered  \"you can try again\"  \n";

	
	      if (TrafficManOption)
		        break; // from while

	   } // while
	
     } // outer if


  	 while (TrafficManOption == true )
	 {
	   cout<<"\n press the number of you want choose it \n 1-Register a fine . \n 2-search for data of car . \n 3-Register a new car. \n  ";
	   cin >> choose_num_TrafficMan ;

	   if (choose_num_TrafficMan == "1")
	   {
		  cout<<"\n \"Register a fine\" \n\n";

		  calculateFine();
		  TrafficManOption = false ; // to break from while
	      break ; // from if
		  isCitizen = false ; // to do not enter in citizen
	   }

	   else if (choose_num_TrafficMan == "2")
	   {
	      cout <<"\n \"search for data of car\" \n\n";

	      searchForCar();
	      TrafficManOption = false ; // to break from while
	      break ; // from if
	      isCitizen = false ; // to do not enter in citizen
	   }

	   else if (choose_num_TrafficMan == "3")
	   {
	      cout <<"\n \"Register a new car\" \n\n";

	      setData();
	      TrafficManOption = false; // to break from while
	      break; // from if
	      isCitizen = false ; // to do not enter in citizen
	   }

	   else
	   {
		  cout <<"Invalied answer you can try again\n";
		  isCitizen = false; // to do not enter in citizen
	   }

	 } // while traffic_men_option



	  // citizen
    if (isCitizen)
    {

       while (true)
       {
		
	     cout<<"\n\t\"You Entered as a Citizen\"\n"<<endl;

	     cout <<" Enter Your Name :-\n ";
	     cin >> citizens.name;

	     cout <<" \nEnter Your Licence Number :-\n ";
	     cin >> citizens.licence_num;

	      for (int i = 0; i < 100; i++)
	      {
		    if( (D[i].name == citizens.name) && (D[i].licence_num == citizens.licence_num) )
		    {
		      CitizenOption = true;
		      isCitizen = false; // break from outer if
		      break; // from for
		    }
	      } // for

	      if (!CitizenOption) 
			       cout<<"\nInvalid answer  OR  You did not Registered  \"you can try again\"  \n";
	
	      if (CitizenOption)
		          break; // from while
       } // while

    } // outer if


    while (CitizenOption)
    {
       cout<<"\npress the number of you want choose it \n 1-see your fine . \n 2-pay a fine .  \n  ";
	   cin >> choose_num_citizen ;

	   if (choose_num_citizen == "1")
	   {
		 cout <<"\n\"see your fine\" \n\n";

		 seeFine();
		 CitizenOption = false;
		 break;
	   }

	   else if (choose_num_citizen == "2")
	   {
	     cout<<"\n \"Pay afine\" \n\n";

		 payFine();
		 CitizenOption = false;
		 break;
	   }

	   else
		  cout <<"Invalied answer you can try again\n";

    } // while citizenoption


	cout<<" \n\n \"If you want to continue choose Y \"   \n  ";
	cin >> systemChoose;

  }while(systemChoose =='Y'||systemChoose =='y');

   return 0;
   system ("pause");
} // main
   

    void calculateFine()
    {
	   float max_speed, car_speed ;
       string plate_number ;
   
       cout<<"\n Enter max speed for street \n ";
       cin >> max_speed;

       cout<<"\n Enter car speed \n ";
       cin >> car_speed;

       if(car_speed > max_speed)
       {
         cout<<"Actually this Driver exceeded the set speed \n\n please Enter plate number \n ";
         cin >> plate_number;

           for (int i = 0; i < 100; i++)
           {
	         for (int j = 0; j < D[i].car_num; j++)
             {
		       if(plate_number == D[i].own_car[j].plate_num)
               {
		         D[i].own_car[j].car_fine.value= 2.0 * (car_speed - max_speed);
		         D[i].own_car[j].car_fine.status="Not paid";
		  
		         cout<<"\nEnter Name of street \n ";
		         cin >>D[i].own_car[j].car_fine.street_name;
  
                  while (true)
                  {
                     cout<<"\nEnter Date of violent \n";
	                 cin >>D[i].own_car[j].car_fine.d_of_fine.day >>D[i].own_car[j].car_fine.d_of_fine.month >>D[i].own_car[j].car_fine.d_of_fine.year;

                     if((D[i].own_car[j].car_fine.d_of_fine.day <= 30 && D[i].own_car[j].car_fine.d_of_fine.day > 0 )&&(D[i].own_car[j].car_fine.d_of_fine.month >= 0 && D[i].own_car[j].car_fine.d_of_fine.month <= 12) && (D[i].own_car[j].car_fine.d_of_fine.year > 2019 ))
	                    break;
                     else
	                    cout<< "Invalide Date please try again"<<endl;
                  } // while
		 
               } // if
	   
             } // inner for
    
           } // outer for

          cout <<"\n the fine has already been registered thank you \n";
       } // outer if
       else 
            cout <<" \nThis Driver didn't exceed the set speed \n";
  
    } //calc fine fun


    void seeFine()
    {
	  string own_name; 
	  float total_fines = 0 ;
	 
	  cout<<" \nEnter name of Driver(owner) to see Total fines \n ";
	  cin >>own_name;

	   for (int i = 0; i < 100 ; i++)
       {
	     if (own_name == D[i].name)
         {
			 for (int j = 0; j < D[i].car_num; j++)
			 {
				 total_fines += D[i].own_car[j].car_fine.value;
			 }

			 if(total_fines > 0)
			 {
				cout<<"\n";
				cout<<" The Driver (owner) is "<<D[i].name<<endl;
				cout<<" Must pay fines = "<<total_fines<<"$"<<endl;
				cout<<" fines is not paid "<<endl;
			 }

			 else
			 {
				cout<<"\n";
				cout<<"\n Total fine equal zero (You don't have a fine)\"Thank you\" "<<endl;
			 }
        } // outer if
      } // outer for
 
    } // see fine fun


    void payFine()
    { 
	  int credit_num, credit_pass;
	  float fines = 0;
	  bool have_fine ;
	  string own_name;
	 
	  cout<<"\n Enter name of Driver(owner) \n ";
	  cin >>own_name;

	  for (int i = 0; i < 100 ; i++)
      {
		 if(own_name == D[i].name)
         {
			 for (int j = 0; j < D[i].car_num; j++)
	         {
				 fines += D[i].own_car[j].car_fine.value;
			 }
			 if(fines > 0.0)
			 {
		         cout<<"\n";
		         cout<<" The Driver (owner) is "<<D[i].name<<endl;
		         cout<<" Must pay fines = "<<fines<<"$"<<endl;
		         have_fine = true;
			 }
			 else
			 {
			  cout<<"\n";
			  cout<<"\n Total fine equal zero (You don't have a fine)\"Thank you\" "<<endl;
			  have_fine = false;
			 }
         } // outer if

      } //for

	  if(have_fine == true)
	  {
	      cout<<"\nEnter credit card number \n ";
	      cin >>credit_num;

	      cout<<" \nEnter credit card password \n ";
	      cin >>credit_pass;

	    cout<<" \nSuccessful payment \n ";

	    for (int i = 0; i < 100 ; i++)
        {
		   if(own_name == D[i].name)
           {
			   for (int j = 0; j < D[i].car_num; j++)
	           {
				   D[i].own_car[j].car_fine.value = 0 ;
				   D[i].own_car[j].car_fine.status = "paid";
			   }
		   }
	    }


	  } // outer if
	 
    } //pay fine fun


    void searchForCar()
    {
	  while (true)
      {
		string own_name, plate_number,  choice;
	  
	    cout<<"\nYou can search by two ways (choose the number of way you want to search by it)"<<endl;
	    cout<<"\n 1-Enter name of Driver(owner)\n 2-Enter plate number of car  \n  ";
	    cin >> choice;

	    if (choice == "1")
        {
		    cout<<"\n Enter name of Driver(owner) \n ";
		    cin >>own_name;

		   for (int i = 0; i < 100; i++)
           {
			  if (own_name == D[i].name)
			  {
			    cout<<"\n\tData of car:-"<<endl;
			    for (int j = 0; j <D[i].car_num ; j++)
			    {
				    cout<<"\n";
				    cout<<" The owen is : "<<D[i].name<<"\n\n";
				    cout<<" Licence number : "<<D[i].licence_num<<"\n\n";
				    cout<<" The Date of birth is :"<<D[i].d_of_b.day<<"/"<<D[i].d_of_b.month<<"/"<<D[i].d_of_b.year<<"\n\n";
				    cout<<" Number of car he has owend is "<<D[i].car_num<<"\n\n";
				    cout<<" Type of car is "<<" \" "<<D[i].own_car[j].maker<<" \" "<<"\n\n";
				    cout<<" plate number = "<<D[i].own_car[j].plate_num<<"\n\n";
				    cout<<" Model = "<<D[i].own_car[j].model<<"\n\n";
				    cout<<" Production year = "<<D[i].own_car[j].production_year<<"\n\n";
				    cout<<"***********************************************************"<<"\n\n";
			    } // inner for

			  } // inner if

           } // outer for

		  break; // from while

        } // outer if
	 
        else if (choice == "2")
	    {
		    cout<<"\n Enter plate number for car \n ";
		    cin >> plate_number;

		   for (int i = 0; i < 100; i++)
           {
			   for (int j = 0; j < D[i].car_num; j++)
               {
				   if(plate_number == D[i].own_car[j].plate_num)
				   {
						cout<<"\n";
						cout<<" The owen is : "<<D[i].name<<"\n\n";
						cout<<" Licence number : "<<D[i].licence_num<<"\n\n";
						cout<<" The Date of birth is :"<<D[i].d_of_b.day<<"/"<<D[i].d_of_b.month<<"/"<<D[i].d_of_b.year<<"\n\n";
						cout<<" Number of car he has owend is "<<D[i].car_num<<"\n\n";
						cout<<" Type of car is "<<" \" "<<D[i].own_car[j].maker<<" \" "<<"\n\n";
						cout<<" plate number = "<<D[i].own_car[j].plate_num<<"\n\n";
						cout<<" Model = "<<D[i].own_car[j].model<<"\n\n";
						cout<<" Production year = "<<D[i].own_car[j].production_year<<"\n\n";
						cout<<"***********************************************************"<<"\n\n";
				   } // if

               } // inner for
			   
           } // outer for
		 
		   break; // from while

	    } // elseif

	    else
	         cout<<"Invalid choise please try again"<<endl;

      } // while 
 
    } // search fun


    void setData()
    {
	   bool new_car;
	   int new_driver ;

       // add from person number 21  because I Registered 20 person only
	   for (int j = 20 ; j < 100; j++)
	   {
		 if (D[j].licence_num == 0)
		 {
			 new_car = true ;
			 new_driver = j;
			 break;
		 }
		
	  }
      if (new_car)
      {
			cout<<"\n please enter your number licence \n ";
			cin >>D[new_driver].licence_num ;

			cout<<"\n please enter your name \n ";
			cin >>D[new_driver].name ;

			 cout<<"\nplease enter your birth day \n";
			cin >>D[new_driver].d_of_b.day>>D[new_driver].d_of_b.month>>D[new_driver].d_of_b.year ;

	    if ( (D[new_driver].d_of_b.year >2001)&&(D[new_driver].d_of_b.day>31)&&(D[new_driver].d_of_b.month>12) )
		{
			 cout <<" \n  (Sorry Not allowed) you  enterd invalid Date"<<endl;
			 cout<<" you can not to Register a new car and you Must be over 18 years Old \n";
			new_car = false ;
	    }
	    else
        {
			cout<<" \nEnter Number of car you will register \n Note:(You Must not Own More Than 3 cars)"<<endl;
			cin >>D[new_driver].car_num;
	
			cout<<" \nEnter all Data of "<<D[new_driver].car_num<<" car"<<"\n\n ";

          for (int i = 0; i < D[new_driver].car_num ; i++)
          {
				cout<<" \nEnter plate number for car "<< i+1 <<" \n ";
				cin >>D[new_driver].own_car[i].plate_num;

				cout<<" \nEnter model for car "<< i+1 <<" \n ";
				cin >>D[new_driver].own_car[i].model;
	    
				cout<<" \nEnter Production year for car "<< i+1 <<" \n ";
				cin >>D[new_driver].own_car[i].production_year;
 
				cout<<" \nEnter Maker (company) of car "<<" \n ";
				cin >>D[new_driver].own_car[i].maker;
				cout<<"----------------------------------------------"<<endl;

          } // for
	
        } // else

	     cout <<"\n\t*** The car has already been registed Thank you *** "<<endl;

      } // outer if

    } //set data fun