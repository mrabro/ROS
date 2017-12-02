#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

//Setting


void Setting(){
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tSettings";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;	
	cout<<"\n\t\t\t\t1.Add New Item"<<endl;
	cout<<"\t\t\t\t2.Delete Item"<<endl;
	cout<<"\t\t\t\t3.Edit Item"<<endl;
	cout<<"\t\t\t\t0.Back\n"<<endl;
	cout<<"\t\t\t\tEnter: ";	
}


//End Setting
//Add

void Add(string itemName,int itemCategory,int itemPrice){
	ofstream out("PhoneBook.txt",ios::app);
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tAdding Item";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;	
	cout<<"\n\t\t\t\tSelect Item Category"<<endl;
	cout<<"\n\t\t\t\t1.Fastfood, 2.Coldrinks, 3.Desert, 4.Spicy, 5.Salad"<<endl;
	cout<<"\n\t\t\t\t";
	cin>>itemCategory;
	cout<<"\n\t\t\t\tEnter Item Name: ";
	cin>>itemName;
	
	cout<<"\n\t\t\t\tEnter Item Price: ";
	cin>>itemPrice;
	cout<<"\n\t\t\t\t0.Back\n"<<endl;
	cout<<"\t\t\t\tEnter: ";	
}



//End Add

//Menu
void Menu(int Total){
	
	int temp=Total;
	
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tMenu";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;	
	cout<<"\n\t\t\t\t1.Fast Food"<<endl;
	cout<<"\t\t\t\t2.Cold Drinks"<<endl;
	cout<<"\t\t\t\t3.Desert"<<endl;
	cout<<"\t\t\t\t4.Spicy"<<endl;
	cout<<"\t\t\t\t5.Salad\n"<<"\t\t\t\t\t\tTotal: PKR "<<Total<<".00"<<endl;
	cout<<"\t\t\t\t6.Checkout"<<endl;
	cout<<"\t\t\t\t7.Setting"<<endl;
	cout<<"\t\t\t\t8.Exit\n"<<endl;
	cout<<"\t\t\t\tEnter: ";
	
}
//End Menu


//Fast Food
void Fastfood(){
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tFast Food";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;		
	cout<<"\n\n\t\t\t\t1.Krunch Burger(PKR 150.00)"<<endl;
	cout<<"\t\t\t\t2.Zinger Stacker(PKR 390.00)"<<endl;
	cout<<"\t\t\t\t3.Value Burger(PKR 230)"<<endl;
	cout<<"\t\t\t\t4.Twister(PKR 250)"<<endl;
	cout<<"\t\t\t\t5.Hot Wings(PKR 350)"<<endl;
	cout<<"\t\t\t\t0.Back";
	cout<<"\n\n\t\t\t\tEnter: ";

}

//End Fast Food


//Coldrinks

void Coldrinks(){
	
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tColdrinks";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;			
	cout<<"\n\n\t\t\t\t1.Mineral Water(PKR 50.00)"<<endl;
	cout<<"\t\t\t\t2.7up(PKR 90.00)"<<endl;
	cout<<"\t\t\t\t3.Mountain Dew(PKR 90.00)"<<endl;
	cout<<"\t\t\t\t4.Miranda(PKR 90.00)"<<endl;
	cout<<"\t\t\t\t5.Pepsi(PKR 90.00)"<<endl;
	cout<<"\t\t\t\t0.Back";
	cout<<"\n\n\t\t\t\tEnter: ";
		
}


//End Coldrinks

//Desert

void Desert(){
	
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tDesert";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;			
	cout<<"\n\n\t\t\t\t1.Apple Pie(PKR 177.00)"<<endl;
	cout<<"\t\t\t\t2.Strawberry Custard Pie(PKR 177.00)"<<endl;
	cout<<"\t\t\t\t3.Cornetto Chocolate(PKR 265.00)"<<endl;
	cout<<"\t\t\t\t4.Red Berry Sundae(PKR 173.00)"<<endl;
	cout<<"\t\t\t\t5.Strawberry Sundae(PKR 173.00)"<<endl;
	cout<<"\t\t\t\t0.Back";
	cout<<"\n\n\t\t\t\tEnter: ";
	
}


//End Desert


//Spicy

void Spicy(){
	
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tSpicy";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;			
	cout<<"\n\n\t\t\t\t1.Spicy Broast(PKR 240.00)"<<endl;
	cout<<"\t\t\t\t2.Chicken Tikka(PKR 220.00)"<<endl;
	cout<<"\t\t\t\t3.Fish Tikka(PKR 470.00)"<<endl;
	cout<<"\t\t\t\t4.Chicken Chilli Rice(PKR 440.00)"<<endl;
	cout<<"\t\t\t\t5.Spicy Wings(PKR 230.00)"<<endl;
	cout<<"\t\t\t\t0.Back";
	cout<<"\n\n\t\t\t\tEnter: ";
	
}
//End Spicy

//Salad

void Salad(){
	
	cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\tSalad";
	cout<<"\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;			
	cout<<"\n\n\t\t\t\t1.Fruit Salad(PKR 320.00)"<<endl;
	cout<<"\t\t\t\t2.Vegetable salad(PKR 250.00)"<<endl;
	cout<<"\t\t\t\t3.Fish salad(PKR 190.00)"<<endl;
	cout<<"\t\t\t\t4.Cheese salad(PKR 430.00)"<<endl;
	cout<<"\t\t\t\t5.Carrot Salad(PKR 150.00)"<<endl;
	cout<<"\t\t\t\t0.Back";
	cout<<"\n\n\t\t\t\tEnter: ";

	
}


//End Salad







//Main Program
int main(){

	
	int iP,iC;
	int input,Amount,Change,Enter;	
	string username,Name,ch,iN;
	string password;	
	double Total;	
	do {
		cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
		cout<<"\n\t\t\t\t\tPlease Login to Continue\t"<<endl;	
		cout << "\n\t\t\t\t\tUser Name: ";
		cin>>username;
		if (username == "Haseeb") {
			cout << "\n\t\t\t\t\tPassword: ";
			cin>>password;
			cout<<"\n\n\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
			cout<<endl;
			if (password != "1234") {
				cout << "invalid password. try again." <<endl;
			}
		} else {
			cout << "invalid username. try again." <<endl;
		}
		if(password == "1234"){
			system("cls");	
			//cout<<"\t\t\t\t#########################################"<<endl;
			//cout<<"\n\t\t\t\t#                            \t#"<<endl;
			//cout<<"\n\t\t\t\t#   W            w   EEEEEE  LL      CCCCCCC  OOOOOOOO   MM          MM  EEEEEEE       \t"<<endl;
			//cout<<"\n\t\t\t\t#   W      w     w   E       LL      C        O      O   M  M      M  M  E             \t"<<endl;
			//cout<<"\n\t\t\t\t#   W    w   w   w   EEEEEE  LL      C        O      O   M    M   M   M  EEEEEEE       \t"<<endl;
			//cout<<"\n\t\t\t\t#   W  w       w w   E       LL      C        O      O   M      M     M  E             \t"<<endl;
			//cout<<"\n\t\t\t\t#   Ww          ww   EEEEEE  LLLLLL  CCCCCCC  OOOOOOOO   M            M  EEEEEEE       \t"<<endl;
			//cout<<"\n\t\t\t\t#########################################";
			
			cout<<"\n\n\n\t\t\t\t#########################################"<<endl;
			cout<<"\n\t\t\t\t#   Welcome to Reasturent Order System\t#"<<endl;
			cout<<"\n\t\t\t\t#########################################";
			cout<<endl;
			cout<<endl;
			cout<<endl;
			system("Pause");
			system("cls");
			
			cout<<endl;
			//***************************
	
			do {

				Menu(Total);
				
				cin>>input;
				system("cls");
				if(input==1){
					
					while(input!=0){
						
						Fastfood();
						cin>>input;
						system("cls");
						
						//Fastfood Conditions
						
						
						if(input==1){
							Total=Total+150.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						
						else if(input==2){
							Total=Total+390.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==3){
							Total=Total+230.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==4){
							Total=Total+250.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==5){
							Total=Total+350.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}

						//End Fastfood Conditions
						
					}	
					
				}
				//Coldrinks Conditions
				else if(input==2){
						
						
					while(input!=0){
					
						Coldrinks();
						cin>>input;
						system("cls");
						if(input==1){
							Total=Total+50.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						
						else if(input==2){
							Total=Total+90.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==3){
							Total=Total+90.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==4){
							Total=Total+90.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==5){
							Total=Total+90.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
					}
						
				}
				//End Coldrinks Condtions
					
				//Other submenus will be here
				
				//Desert Condtions
				
				else if(input==3){
						
						
					while(input!=0){
						
						Desert();
						cin>>input;
						system("cls");
						if(input==1){
							Total=Total+177.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						
						else if(input==2){
							Total=Total+177.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==3){
							Total=Total+265.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==4){
							Total=Total+173.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==5){
							Total=Total+173.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
					}
					
				}
				
				//End Desert Conditions
				
				//Speciy
				
				else if(input==4){
					
						
					while(input!=0){
						
						Spicy();
						cin>>input;
						system("cls");
						if(input==1){
							Total=Total+240.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						
						else if(input==2){
							Total=Total+220.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==3){
							Total=Total+470.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==4){
							Total=Total+440.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==5){
							Total=Total+230.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
					}
		
				}
				//Speciy Ends 
				
				//Salad
				
				else if(input==5){
					
							
						while(input!=0){
						
						Salad();
						cin>>input;
						system("cls");
						if(input==1){
							Total=Total+320.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						
						else if(input==2){
							Total=Total+250.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==3){
							Total=Total+190.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==4){
							Total=Total+430.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
						else if(input==5){
							Total=Total+150.00;
							cout<<endl;
							cout<<"\t\t\t\tTotal: PKR "<<Total<<".00";
							cout<<endl;
						}
					}
					
				}
				
				//Salad Ends
				
				//other submenus will end here
				
				
				//Setting
				
				else if(input==7){
					
					Setting();
					cin>>input;
					
					if(input==1){
						Add(iN,iC,iP);
						
						cin>>input;
						system("cls");
					}
					
				}
				
				
				
				//End Setting
				//Exit
				else if(input==8){
					exit(0);
					
				}
				//Exit ends
				
				//Checkout
				else if(input==6){
					cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";	
					cout<<"\n\t\t\t\tEnter Amount Given By User: ";
					cin>>Amount;
					cout<<"\n\t\t\t\tEnter Customer Name: ";
					cin>>Name;
					cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
					system("cls");
					cout<<"\n\n\n\n\n";
					cout<<"\t\t\t\t********************Recipt***********************"<<endl;
					cout<<"\n\t\t\t\t****************************************************";
					cout<<"\n\t\t\t\t*  Customer Name: "<<Name<<"                           *"<<endl;
					cout<<"\t\t\t\t*  Total: "<<Total<<"                                      *"<<endl;
					Total=Amount-Total;
					Change=Total;
					cout<<"\t\t\t\t*  Amount Given By Customer: "<<Amount<<"                  *"<<endl;
					cout<<"\t\t\t\t*  Change: PKR "<<Change<<"                                 *"<<endl;
					cout<<"\t\t\t\t****************************************************";
					cout<<"\n\t\t\t\tPress '0' For New Customer: ";
					cin>>input;
					system("cls");
					if(input==0){
						
						Total=0.00;
					}
					
				}
				
				//End of Checkout
				
				else{
					cout<<"Error";
				}
				
				}while(input==0);
			
			} 
		}while (password != "1234");		
	return 0;
}

