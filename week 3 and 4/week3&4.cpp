#include <iostream>
using namespace std;
main(){
        cout<<" enter your name:";
        string name;
        cin >>  name;
         cout<<" enter your roll number:";
        int roll_no;
        cin >>  roll_no;
        cout<<" enter your aggregate:";
        float agg;
        cin >> agg ;
        cout<<" enter your section:";
        char section;
        cin >> section ;
        cout<<" student information:"<<endl;
        cout <<" Name: Amina" <<endl;
        cout <<" roll number: 109" <<endl;
        cout << " aggregate: 85.1"<<endl;
        cout << " section: c";
        }






#include <iostream>
using namespace std;
main(){
	cout << "Enter weight in pounds: ";
	int pounds;
	cin >> pounds;
	float weightinkgs;
	 weightinkgs= pounds*0.45;
	cout <<   pounds << " pounds is equal to " << weightinkgs << " kilograms.";
}




#include <iostream>
using namespace std;
main(){
cout << " Enter the length of the rectangle;
int length;
cin>> length;
cout << " Enter the width of the rectangle:";
int width;
cin >> width;
int area;
area=length * width;
cout << "  The area of the rectangle is:" << area ;
}



#include <iostream>
using namespace std;
main(){
       cout<<" enter the student's : ";
       string name;
       cin>> name;
       cout<<"enter matriculation marks (out of 1100):";
       int marks;
       cin>> marks;
       cout<<" enter intermediate marks (out of 550):";
       int marks;
	cin>> marks;
	cout<<" enter ecat marks (out of 400):";
	float marks;
	cin>> marks;
	float aggregate score;
	(ecat/400*0.5)+(matric/1100*0.1)+(inter/550*0.4);
	cout <<"aggregate score for" << name << "in UET is:"<< aggregate;
	
	
#include <iostream>
using namespace std;
main(){
cout << "Enter the charge (Q) in coulombs: ";
float charge;
cin>> charge;
cout << "Enter the time (t) in seconds: ";
float time;
cin>> time;
float current;
current = charge/time;
cout << "The current (I) is: " << current;
cout << " Amperes";
 
}

#include <iostream>
using namespace std;
main(){
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	float timeinseconds;
	timeinseconds = hours * 3600;
	cout << hours << " hours is equivalent to " << timeinseconds << " seconds.";
}



 #include <iostream>
using namespace std;
main(){
	cout << "Enter voltage (in volts): ";
	int voltage;
	cin >> voltage;
	cout << "Enter current (in amperes): ";
	float current;
	cin >> current;
	float power;
	power = voltage * current;
	cout << "The power is " << power ;
	cout << " watts."; 
}


#include <iostream>
using namespace std;
main(){
	cout << "Enter your age in years: ";
	int ageinyears;
	cin>> ageinyears;
	int ageindays;
	ageindays= ageinyears * 365;
	cout<< "Your age in days is approximately " << ageindays << " days."<<endl;
}



#include <iostream>
using namespace std;
main(){
	cout<<"Enter the name of the cricket team: ";
	string name;
	cin >> name;
	cout<<"Enter the number of wins: ";
	int wins;
	cin >> wins;
	cout<<"Enter the number of draws: ";
  	int draws;
	cin >> draws;
	cout<<"Enter the number of losses: ";
	int losses;
	cin >> losses;
  	int points;
	points = (wins*3) + (draws*1) + (losses*0);
	cout<< name << " has obtained " << points << " points in the Asia Cup tournament." ;
}	



#include <iostream>
using namespace std;
main(){
	cout << "Enter the size in megabytes (MB): ";
	float megabytes;
	cin >> megabytes;
	float bits;
	bits = megabytes * 8 * 1024 * 1024;
	cout << megabytes << " MB is equivalent to " << bits << " bits." <<endl;
}


#include <iostream>
using namespace std;
main(){
	cout << "Enter the number of sides of the polygon: ";
	int n;
	cin >> n;
	int sum;
	sum = (n-2) * 180;
	cout << "The sum of internal angles of a " << n << "-sided polygon is: " << sum << " degrees";		
}






#include <iostream>
using namespace std;
main(){
	cout <<  "Enter the current world population: ";
	int population;
	cin >> population;
	cout << "Enter the monthly birth rate (number of births per month): ";
	int birthpermonth;
	cin >>  birthpermonth;
	float output;
	output = population + ( birthpermonth * 12 * 10 * 3);
	cout << "The population in three decades will be: ";
	cout << output;
}





#include <iostream>
using namespace std;
main(){
	cout << "Enter the number of sides of the polygon: ";
	int n;
	cin >> n;
	int sum;
	sum = (n-2) * 180;
	cout << "The sum of internal angles of a " << n << "-sided polygon is: " << sum << " degrees";		
}


#include <iostream>
using namespace std;
main(){
	cout << "Enter a 4-digit number: ";
	int digit;
	cin >> digit;
	int num1;
	num1 = digit % 10;
	int num2;
	num2 = (digit/10) % 10;
	int num3;
	num3 = (digit/100) % 10;
	int num4;
	num4 = (digit/1000) % 10;
	int sum;
	sum = num1 + num2 + num3 + num4;
	cout << "Sum of the individual digits: " << sum;       
}






#include <iostream>
using namespace std;
main(){
	cout << "Number of square meters you can paint: ";
	float paint;
	cin >> paint;
	cout << "Width of the single wall (in meters): ";
	float Width;
	cin >> Width;
	cout << "Height of the single wall (in meters): ";
	float Height;
	cin >> Height;
	float output1;
	output1 = (Width*Height);
	int output2;
	output2 = paint/output1;
	cout << "Number of walls you can paint: " << output2 ;  
	
}
                                                   

#include <iostream>
using namespace std;
main(){
	cout << "Number of Minutes: ";
	int minutes;
	cin >> minutes;
	cout << "Frames per Second: ";
	int frames;
	cin >> frames;
	float noOfFrames;
 	noOfFrames = (minutes*60) * (frames);
	cout << "Total Number of Frames: " << noOfFrames;
}




#include <iostream>
using namespace std;
main(){
	cout << "Enter Initial Velocity (m/s): ";
	float v;
	cin >> v;
	cout << " Enter Acceleration (m/s^2): ";
	float a;
	cin >> a;
	cout << "Enter Time (s): ";
	float t;
	cin >> t;
	float finalVelocity;
	finalVelocity = a*t + v;
	cout << "Final Velocity (m/s): " << finalVelocity ;
	
}



#include <iostream>
using namespace std;
main(){
	cout << "Enter Imposter Count: ";
	float i;
	cin >> i;
	cout << "Enter Player Count: ";
	float p;
	cin >> p;
	float imposter;
	imposter = 100 * (i/p);
	cout << "Chance of being an imposter: " << imposter << "%" ;
}
		


#include <iostream>
using namespace std;
main(){
	cout << "Enter the movie name: ";
	string movie;
	cin >> movie;
	cout << "Enter the adult ticket price: " <<"$";
	int adult;
	cin >> adult;
	cout << "Enter the child ticket price: " <<"$";
	int child;
	cin >> child;
	cout << "Enter the number of adult tickets sold: ";
	int sold;
	cin >> sold;
	cout << "Enter the number of child tickets sold: ";
	int number;
	cin >> number;
	cout << "Enter the percentage of the amount to be donated to charity: " <<"%";
	float charity;
	cin >> charity;
	cout << "Movie: " << movie << endl;
	int totalamount;
	totalamount = (adult * sold) + (child * number);
	float donation;
	donation = charity * totalamount;
	int remainingamount;
	remainingamount = donation-totalamount;
	cout << "Total amount generated from ticket sales: "<< "$"<< donation<<endl;
	cout << "Donation to charity " << (charity) << "$"<< charity <<endl;
	cout << "Remaining amount after donation: " << " $"<< remainingamount <<endl; 
	
	
        
}



#include <iostream>
using namespace std;
main(){
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vprice;
	cin >> vprice;
	cout << "Enter fruit price per kilogram (in coins): " ;
	float fprice;
	cin >> fprice;
	cout << "Enter total kilograms of vegetable: " ;
	float totalv;
	cin >> totalv;
	cout << "Enter total kilograms of fruit: ";
	float totalf ;
	cin >> totalf;
	float totalearning;
	totalearning = ((vprice* totalv) + (fprice* totalf))/ 1.94;
	cout << "Total earnings in Rupees (Rps): " << totalearning ;        
}
		



#include <iostream>
using namespace std;
main(){
	cout << "Enter the person's age: ";
	int age;
	cin >> age;
	cout << "Enter the number of times they've moved: ";
	int moved;
	cin >> moved;
	int output;
	output = age/(moved + 1);
	cout << "Average number of years lived in the same house: " << output; 
	
}
                                                   



#include <iostream>
using namespace std;
main(){
	cout << "Number 1: ";
	int num_1;
	cin >> num_1 ;
	cout << "Number 2: ";
	int num_2;
	cin >> num_2 ;
        cout << "Number 3: ";
	int num_3;
	cin >> num_3 ;
	cout << "Number 4: ";
	int num_4;
	cin >> num_4 ; 
	cout << "Number 5: ";
	int num_5;
	cin >> num_5 ;                          
	cout << "Number 6: ";
	int num_6;
	cin >> num_6 ;        
	cout << "Number 7: ";
	int num_7;
	cin >> num_7 ; 
	cout << "Number 8: ";
	int num_8;
	cin >> num_8 ;
	cout << "Number 9: ";
	int num_9;
	cin >> num_9 ; 
	cout << "Number 10: ";
	int num_10;
	cin >> num_10 ; 
        cout << "Number 11: ";
	int num_11;
	cin >> num_11 ;  
	cout << "Number 12: ";
	int num_12;
	cin >> num_12 ;  
	cout << "Number 13: ";
	int num_13;
	cin >> num_13 ;  
	cout << "Number 14: ";
	int num_14;
	cin >> num_14 ;  
	cout << "Number 15: ";
	int num_15;
	cin >> num_15 ;
	int operation1;
	operation1 = (num_1 + num_2 + num_3 + num_4 + num_5);
	int operation2;
	operation2 = (num_6 * num_7 * num_8 * num_9 * num_10);
	int operation3 = ( num_11 - num_12 - num_13 - num_14 - num_15);
	int output ;

	output = (operation1 + operation2) - operation3;
	cout<<"The final result is: "<< output <<endl;
}
                                                   




#include <iostream>
using namespace std;
main (){
	string name;
	float weight;
	cout << "Enter the Name of the Person: ";
	cin >> name;
	cout <<"Enter the target weight loss in kilograms: ";
	cin >> weight;
	float days;
	days = weight * 15;
	cout << name << " will need " <<days << " days to lose " << weight << " kg of weight by following the doctor's suggestions";
}





#include <iostream>
using namespace std;
main(){
	cout << "Enter a 5-digit number: ";
	int number;
	cin >> number;
	int sumOfNumbers = number/10000 +number%10000 / 1000 + (number%10000)%1000 /100 + ((number%10000)%1000)%100 /10+ ((number%10000)%1000)%100 %10;
	cout << "Sum of the individual digits: " << sumOfNumbers;
}
	


#include <iostream>
using namespace std;
main(){
	cout << "Enter the size of the fertilizer bag in pounds: ";
	float size;
	cin >> size;
	cout << "Enter the cost of the bag: " <<"$" ;
	float bag;
	cin >> bag;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	float area;
	cin >> area;
	float costperpound;
        costperpound = bag / size ;
	int costperfeet;
	costperfeet = size * area ;
	cout << "Cost of fertilizer per pound: " << " $"<< costperpound <<endl;
	cout << "Cost of fertilizing per square foot: " << "$"<< costperfeet <<endl; 
	
}
		


#include <iostream>
using namespace std;

void product();

main()
{
	product();
}
void product()
{
	float distance , product;
	cout <<"Enter the distance: ";
	cin >> distance;
	product= distance*10;
	cout <<"Fuel needed: " << product ;
}
		


#include <iostream>
using namespace std;
void divide(float inches);

main(){
	cout<< "Enter the measurement in inches: ";
	float inches;
	cin>> inches;
	
	
	
	divide(inches);
}
void divide(float inches)
{
	float feet;
	feet = inches/12;
	cout<<"Equivalent in feet: " <<feet;
}




#include <iostream>
using namespace std;
void product(int lenght);
main(){
	cout<<"Enter the side length of the Rubik's Cube: ";
	int length;
	cin>> length;
	product (length);
}

	void product(int length)
{
	int stickers;
	cin>> stickers;
	stickers= length*length*6;
	cout<<"Number of stickers needed: " << stickers;
}




#include <iostream>
using namespace std;
void eligibility(int age);
main(){
cout<<"Enter your age: ";
int age;
cin>>age;
if(age >= 18)
{
cout <<"You are eligible to vote." ;
}



if(age < 18)
{
cout<<"You are not eligible to vote.";
}
}




#include <iostream>
using namespace std;
void determine(int n);
main(){
cout<<"Enter a number: ";
int n;
cin>>n;
if(n%2 == 0  )
{
cout <<"Number " << n << " is even" ;
}



if(n%2 > 0)
{
cout<<"Number " << n << " is odd";
}
}


#include <iostream>
using namespace std;
void criteria(int score);
main(){
cout<<"Enter your score: ";
float score;
cin>>score;
if(score > 50)
{
cout <<"Pass" ;
}



if(score <= 50)
{
cout<<"Fail";
}
}


#include <iostream>
using namespace std;
void fuelneeded (float distance);
main(){
cout<<"Enter the distance: " ;
float distance;
cin>>distance;
float fuel;
cin>> fuel;
fuel=distance*10 ;
int minfuel;
minfuel=100;
 

if(distance = '0' )
{
cout <<"Fuel needed: " << minfuel ;
}
if(distance > '0' )
{
cout <<"Fuel needed: " << fuel;
}
}




#include <iostream>
using namespace std;
void sum(int n1, int n2);
void subtract(int n1, int n2);
void product (int n1, int n2);
void quotient (int n1, int n2); 
main(){
	cout<<"Enter 1st number: ";
	int n1;
	cin>> n1;
	cout<<"Enter 2nd number: ";
	int n2;
	cin>>n2;
	cout <<"Enter an operator (+, -, *, /): ";
	char op;
	cin>> op;
if(op == '+'){
	sum(n1,n2);
}
if(op == '-'){
	subtract(n1,n2);
}
if(op == '*'){
	product(n1,n2);
}
if(op == '/'){
	quotient(n1,n2);
}
}
void sum(int n1, int n2)
{
	cout<<"Addition: " << n1+n2;
}
void subtract(int n1, int n2)
{
	cout<<"Subtraction: "<< n1-n2;
}
void product (int n1, int n2)
{
	cout<<"Multiplication: "<< n1*n2;
}
void quotient (int n1, int n2)
{
	cout<<"Division: "<< n1/n2;
} 
	
	

#include <iostream>
using namespace std;
void purchase (string day,float amount);
main(){
cout<<"Enter the day of purchase: ";
string day;
cin>>day;
cout<<"Enter the total purchase amount: "<<"$";
float amount;
cin>>amount;
float disamount;
disamount= (amount - (amount*0.1)) ; 


if(day == "Monday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Tuesday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Wednesday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Thursday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Friday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Sunday")
{
cout<<"Payable Amount: " <<  "$"<< disamount ;
}
}





#include <iostream>
using namespace std;
main(){
	cout <<"Enter your name: ";
	string name;
	cin>> name;
	while (true){
	cout<<name<<endl;
}





#include <iostream>
using namespace std;
void purchase (string day,float amount);
main(){
while (true){
cout<<"Enter the day of purchase: ";
string day;
cin>>day;
cout<<"Enter the total purchase amount: "<<"$";
float amount;
cin>> amount;
float damount;
damount = (amount - (amount*0.05));
float disamount;
disamount= (amount - (amount*0.1)) ;


 


if(day == "Monday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Tuesday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Wednesday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Thursday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Friday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Sunday")
{
cout<<"Payable Amount: " <<  "$"<< disamount ;
}
}
}	



#include <iostream>
using namespace std;
void purchase (string day,float amount);
main(){
while (true){
cout<<"Enter the day of purchase: ";
string day;
cin>>day;
cout<<"Enter the total purchase amount: "<<"$";
float amount;
cin>> amount;
float damount;
damount = (amount - (amount*0.05));
float disamount;
disamount= (amount - (amount*0.1)) ;


 


#include <iostream>
using namespace std;
main(){

	string name;
	name = "Amina";
	while (true)
{
	cout << name << endl;
}

}



#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x,int y)
{
COOR coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main(){
	int x =0, int y = 0;
	printMaze();

}
void printMaze();
{
cout<<"#######################" <<endl;
cout<<"#                     #" <<endl;
cout<<"#                     #" <<endl;                
cout<<"#                     #" <<endl; 
cout<<"#                     #" <<endl;
cout<<"#######################" <<endl;
}
void gotoxy(int x,int y)
{
COOR coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}




#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void movePlayer(int x,int y);

main(){
int x=4;
int y=4;
system("cls");
printMaze();
movePlayer(x , y);
}

void movePlayer(int x,int y)
{
gotoxy(x,y);
cout <<"p";
Sleep(100);
gotoxy(x,y);
cout<<" ";
}

void printMaze()
{
cout<<" #################################################"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #################################################"<<endl;
}

void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void movePlayer(int x,int y);

main(){
int x=4;
int y=4;
system("cls");
while(true){
               movePlayer(x,y);
                 x=x+1;
                    if(x==48)
                           return x==4;
                           
                         }
                             }
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<".";
Sleep(150);
gotoxy(x,y);
cout<<" ";
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
int main()
{

system("cls");
cout<<"test";
gotoxy(14,14);
cout<< "MY Name is Amina" ;

return 0;
}     




#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);

main(){
int x=75;
int y=22;
system("cls");
gotoxy(x , y);
cout<<"amina fatima";
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}




#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void movePlayer(int x,int y);
main(){
int x=2;
int y=1;

system("cls");
printMaze();
while(true){
movePlayer(x,y);
      y=y+1;
         if(y==16) y=1;}

            
             

}
               



void printMaze()
{
cout<<" #################################################"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #                                               #"<<endl;
cout<<" #################################################"<<endl;
}
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<"patrol";
Sleep(150);
gotoxy(x,y);
cout<<"       "<<endl;
}       

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 




#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printH(char a);
void printA(char b);
void printS(char c);
void printN(char d);

main(){
int x;
int y;
char a;
char b;
char c;
char d;
         system("cls");
               gotoxy(x=2,y=2);
           printH(a);
             gotoxy(x=2,y=4);
                printA(b);
 gotoxy(x=2,y=6);
                    printS(c);
 gotoxy(x=2,y=8);
                         printS(c);
 gotoxy(x=2,y=10);
                           printA(b);
 gotoxy(x=2,y=12);
                              printN(d);
                             }
void printH(char a)
{
    cout<< "H";
}
                             
void printA(char b)
{
    cout<< "A";
}
                             
void printS(char c)
{
    cout<< "S";
}
                             
void printN(char d)
{
    cout<< "N";
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



                       
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void movePlayer(int x,int y);

main(){
int x=4;
int y=4;
system("cls");
while(true){
               movePlayer(x,y);
                 x=x+1;
                    if(x==48)
                           return x==4;
                           
                         }
                             }
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<".";
Sleep(150);
gotoxy(x,y);
cout<<" ";
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}                           
              


# include <iostream>
using namespace std;
void reverse ( string value);

main ()
{

cout<<"Enter 'true' or 'false': ";
string value;
cin>>value;
reverse(  value);
}
void reverse ( string value)
{
if (value=="true")
{
cout<<"false";
}
if (value=="false")
{
cout<<"true";
}
}




# include <iostream>
using namespace std;
void checkSpeed (int speed);
main ()
{
int speed;
cout<<"Speed: ";
cin>>speed;
checkSpeed(speed);
}
void checkSpeed (int speed)
{
if (speed>100)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
if (speed<=100)
{
cout<<"Perfect! You're going good.";
}
}



# include <iostream>
using namespace std;
void tpchecker(int users,int tp);
main ()
{
int users;
int tp;
cout<<"Number of people in the household: ";
cin>>users;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpchecker(users,tp);
}
void tpchecker(int users,int tp)
{
	int sheet = tp*500;
	int UsagePerDay = 57*users;
int totalusage=UsagePerDay*14;
int available = sheet/UsagePerDay;
if (sheet>totalusage)
{
cout<<"Your TP will last "<<available<<" days, no need to panic!";
}
if (sheet<totalusage)
{
cout<<"Your TP will only last "<<available<<" days, buy more!";
}


}




# include <iostream>
using namespace std;
void pet (int holidays);
main ()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}
void pet (int holidays)
{
int time;
int workingDays;
int tim1e;
int hrs;
int mins;
workingDays=365-holidays;
time=(workingDays*63)+(holidays*127);
if (time<30000)
{
tim1e=30000-time;
hrs=tim1e/60;
mins=tim1e%60;
cout<<"Tom sleeps well"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes less for play";
}
if (time>30000)
{
tim1e=time-30000;
hrs=tim1e/60;
mins=tim1e%60;
cout<<"Tom will run away"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes for play";
}
}


# include <iostream>
using namespace std;
void FlowerShop(int redRose, int whiteRose, int Tulip);
main ()
{
cout<<"Red Rose: ";
int roses;
cin>>roses;
cout<<"White Rose: ";
int white_roses;
cin>>white_roses;
cout<<"Tulips: ";
int Tulips;
cin>>Tulips;
FlowerShop(roses,white_roses,Tulips);
}
void FlowerShop(int redRose, int whiteRose, int Tulip)
{
float rosesp;
float white_rosesp;
float Tulipsp;
float total;
float discount;
float finalPrice;
rosesp=2*redRose;
white_rosesp=4.10*whiteRose;
Tulipsp=2.50*Tulip;
total=rosesp+white_rosesp+Tulipsp;
if(total>200)
{
discount=(total/100)*20;
finalPrice=total-discount;
cout<<"Original Price: $"<<total<<endl;
cout<<"Price after Discount: $"<<finalPrice;
}
if (total<=200)
{
cout<<"Original Price: $"<<total<<endl;
cout<<"No discount applied.";
}


}



# include <iostream>
using namespace std;
void longestdur (int hour, int minute);
main ()
{
cout<<"Enter the number of hour: ";
int hour;
cin>>hour;
cout<<"Enter the number of minuteutes: ";
int minute;
cin>>minute;
longestdur (hour,minute);
}
void longestdur (int hour, int minute)
{
int converthour;
converthour=hour*60;
if(converthour<minute)
{
cout<<minute;
}
if (converthour>minute)
{
cout<<hour;
}
}




# include <iostream>
using namespace std;
void bonus(int position1, int position2);
main ()
{
int position1;
int position2;

cout<<"Enter your position: ";
cin>>position1;
cout<<"Enter your friend's position: ";
cin>>position2;
bonus (position1,position2);
}
void bonus(int position1, int position2)
{
if (position2-position1>6)
{
cout<<"false";
}
if (position2-position1<=6)
{
cout<<"true";
}
}





# include <iostream>
using namespace std;
void discount (string country,float tP);
using namespace std;
main ()
{
cout<<"Enter the country's name: ";
string country;
cin>>country;
cout<<"Enter the ticket price in dollars: $";
float tP;
cin>>tP;
discount (country,tP);
}
void discount (string country,float tP)
{
float discountt;
float finalp;
if (country=="Pakistan")
{
discountt=(tP/100)*5;
finalp=tP-discountt;
}
if (country=="Ireland")
{
discountt=(tP/100)*10;
finalp=tP-discountt;
}
if (country=="India")
{
discountt=(tP/100)*20;
finalp=tP-discountt;
}
if (country=="England")
{
discountt=(tP/100)*30;
finalp=tP-discountt;
}
if (country=="Canada")
{
discountt=(tP/100)*45;
finalp=tP-discountt;
}
cout<<"Final ticket price after discount: $"<<finalp;
}







# include <iostream>
using namespace std;
void contrast (int numb1,int numb2);

main ()
{

cout<<"Enter the first number: ";
int numb1;
cin>>numb1;
cout<<"Enter the second number: ";
int numb2;
cin>>numb2;
contrast (numb1,numb2);
}
void contrast (int numb1, int numb2)
{
if (numb1==numb2)
{
cout<<"true";
}
if (numb1!=numb2)
{
cout<<"false";
}
}









































