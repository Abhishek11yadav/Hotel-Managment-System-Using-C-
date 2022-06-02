#include<iostream>
using namespace std;


int main(){
	 int quant;
	 int choice;
	 
	 int Qrooms=0; //quantity of rooms
	 int Qpasta=0,Qburger=0, Qnoodles=0, Qshake=0; //quantity of foods for room
	 
	 int Srooms=0,Spasta=0,Sburger=0, Snoodles=0, Sshake=0; //S=SOLD,food we have sold so far
	 
	 //total price of items
	 int total_rooms=0, total_pasta=0,total_burger=0,total_noodles=0, total_shake=0,total_chicken=0;
	 
	 cout<<"\n\t Quantities of item we have";
	 cout<<"\n Rooms available:";
	 cin>>Qrooms;
	
		cout<<"\n Quantity of pasta available:";
	    cin>>Qpasta;
	    
	    cout<<"\n Quantity of burger available:";
	    cin>>Qburger;
	    
	    cout<<"\n Quantity of noodles available:";
	    cin>>Qnoodles;
	    
	    cout<<"\n Quantity of shake available:";
	    cin>>Qshake;
	    
	    m:
	    cout<<"\n\t\t\t   Please select from the menu options";
	    cout<<"\n\n1) Rooms";
	    cout<<"\n2) Pasta";
	    cout<<"\n3) burger";
	    cout<<"\n4) noodles";
	    cout<<"\n5) shake";
	    cout<<"\n6) Information regarding sales and collection";
	    cout<<"\n7) exit";
	    
	    cout<<"\n\n Please enter your choice";
	    cin>>choice;
	    
	    //we will write logic for the cases when user selects any of the number from 1 to 8
	    switch(choice){
	    	case 1:
	    		cout<<"\n\n Enter the number of rooms you want";
	    		cin>>quant;
	    		if(Qrooms-Srooms>= quant){
	    			Srooms= Srooms+quant;
	    			total_rooms= total_rooms+quant*1200;
	    			cout<<"\n\n\t\t"<<quant<<"Room/rooms have been alloted to you";	
				}
				else
					cout<<"\n\t Only"<<Qrooms-Srooms<<"Rooms are remaining in the hotel";
					break;
					
					
					
					
			case 2:
	    		cout<<"\n\n Enter Plates of  pasta you want";
	    		cin>>quant;
	    		if(Qpasta-Spasta>= quant){
	    			Spasta= Spasta+quant;
	    			total_pasta=total_pasta+quant*70;
	    			cout<<"\n\n\t\t"<<quant<<"Pasta have been ordered by you \n your order will be served soon \nThank you";	
				}
				else
					cout<<"\n\t Only"<<Qpasta-Spasta<<"Pasta  remaining in the hotel";
					break;
				
				
			case 3:
	    		cout<<"\n\n Enter number of  burgers you want";
	    		cin>>quant;
	    		if(Qburger-Sburger>= quant){
	    			Sburger= Sburger+quant;
	    			total_burger= total_burger+quant*90;
	    			cout<<"\n\n\t\t"<<quant<<"Burgers have been ordered by you \n your order will be served soon \nThank you";	
				}
				else
					cout<<"\n\t Only"<<Qburger-Sburger<<"Burgers remaining in the hotel";
					break;
					
			case 4:
	    		cout<<"\n\n Enter how many noodles you want";
	    		cin>>quant;
	    		if(Qnoodles-Snoodles>= quant){
	    			Snoodles= Snoodles+quant;
	    			total_noodles= total_noodles+quant*55;
	    			cout<<"\n\n\t\t"<<quant<<"noodles have been ordered by you \n your order will be served soon \nThank you";	
				}
				else
					cout<<"\n\t Only"<<Qnoodles-Snoodles<<"noodles remaining in the hotel";
					break;
	    	
	    	
	    	case 5:
	    		cout<<"\n\n Enter how many noodles you want";
	    		cin>>quant;
	    		if(Qshake-Sshake>= quant){
	    			Sshake= Sshake+quant;
	    			total_shake= total_shake+quant*80;
	    			cout<<"\n\n\t\t"<<quant<<"Shake have been ordered by you \n your order will be served soon \nThank you";	
				}
				else
					cout<<"\n\t Only"<<Qshake-Sshake<<"Shake are remaining in the hotel";
					break;
	    	
	    	
	    	//Now we will cosider case 6 and 7 and a default case when user doesn't select any of the giveb options
	    	
	    	case 6:
	    		cout<<"\n\t\tDetails of sales and collection";
	    		cout<<"\n\n Number of rooms we had :"<<Qrooms;
	    		cout<<"|n\n Number of rooms we gave for rent"<<Srooms;
	    		cout<<"\n\nRemaing Rooms :"<<Qrooms-Srooms;
	    		cout<<"\n\n Total rooms collection for the day :"<<total_rooms;
	    		
	    		
	    		cout<<"\n\n Number of Pastas we had :"<<Qpasta;
	    		cout<<"|n\n Number of pastas sold"<<Spasta;
	    		cout<<"\n\n Remaing pastas :"<<Qpasta-Spasta;
	    		cout<<"\n\n Total pasta collection for the day :"<<total_pasta;
	    		
	    		
	    		cout<<"\n\n Number of burger we had :"<<Qburger;
	    		cout<<"|n\n Number of burger sold"<<Sburger;
	    		cout<<"\n\n Remaing burger :"<<Qburger-Sburger;
	    		cout<<"\n\n Total burger collection for the day :"<<total_burger;
	    		
	    		cout<<"\n\n Number of noodles we had :"<<Qnoodles;
	    		cout<<"|n\n Number of noodles sold"<<Snoodles;
	    		cout<<"\n\n Remaing noodles :"<<Qnoodles-Snoodles;
	    		cout<<"\n\n Total noodles collection for the day :"<<total_noodles;
	    		
	    		cout<<"\n\n Number of shake we had :"<<Qshake;
	    		cout<<"|n\n Number of shake sold"<<Sshake;
	    		cout<<"\n\n Remaing shake :"<<Qshake-Sshake;
	    		cout<<"\n\n Total shake collection for the day :"<<total_shake;
	    		
	    		break;
	    		
	    	case 7:
	    		exit(0);
	    		
	    		default:
	    			cout<<"\n  Please select the number mention above";
	    		
	    		
	    	
	    	
		}
		
		
		//goto is a jump statement which helps us jump from one paart to another part having a specified label here label is m which is use for menu
		goto m; //SUppose we order two pasta and after that we again want to order something else that's wht we use goto statement
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
		
		 
	 
	 
	 
	 
}

