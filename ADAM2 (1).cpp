#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
char str[80];
//Methods included
void Start();
void Game();
void gameStart();
void Credits();
void chapter1();
void chapter2();
void chapter3();
void chapter4();
void chapter5();
void chapter6();
void gameOver();
void time();
void mytext(char *str);
int main(){
Start();
Game();
gameStart();
Credits();
chapter1();
chapter2();
chapter3();
chapter4();
chapter5();
chapter6();
gameOver();
}
void mytext(char *str){
	
	 int len = 0,x, y=240; // 240 = white background, black foreground 

    string text =  str;

 
    len = text.length();
 
    for ( x=0;x<len;x++)
    {
        cout << text[x];
        Sleep(20); // Pause between letters 
    }
}
void time(){
time_t ttime = time(0);
            tm *local_time = localtime(&ttime);
    
            cout <<"Date: "<< local_time->tm_mday;
            cout << "/"<< 1 + local_time->tm_mon;
            cout << "/"<< 1900 + local_time->tm_year <<"\t\t\t\t       --METIN 2--"<< endl;
            cout <<"Time: "<< local_time->tm_hour << ":";
            cout << local_time->tm_min << ":";
            cout << local_time->tm_sec << endl<<endl;
          
                 
}
void Start(){
	time();
	system("color 04"); 
	cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,100);
    if (i>=10 && i<20)
       Beep(0,100);
    if (i>=10)
      Beep(0,70);
 }
 
	system("cls");
	time(); 
	cout <<"\n\n\n";
	system("color 04");
	Beep(600,100);
	cout <<"\t||||||          |||||| |||||||||||||| |||||||||||||| |||||||||| ||||||          ||||||    |||||||||||||| "<<endl;
	system("color 06");
	Beep(500,100);
	cout <<"\t|||||||||||||||||||||| |||||||||||||| |||||||||||||| |||||||||| ||||||||||||||  ||||||    |||||||||||||| "<<endl;
	system("color 04");
	Beep(700,100);
	cout <<"\t|||||||||||||||||||||| |||||||||||||| |||||||||||||| |||||||||| ||||||||||||||  ||||||    |||||||||||||| "<<endl;
	system("color 06");
	Beep(500,100);
	cout <<"\t|||||||||||||||||||||| ||||||             ||||||       ||||||   ||||||||||||||  ||||||            |||||| "<<endl;
    system("color 04");
    Beep(600,100);
	cout <<"\t||||||  ||||||  |||||| ||||||||||||||     ||||||       ||||||   ||||||  ||||||  ||||||    |||||||||||||| "<<endl;
    system("color 06");
    Beep(500,100);
	cout <<"\t||||||  ||||||  |||||| ||||||||||||||     ||||||       ||||||   ||||||  ||||||  ||||||    |||||||||||||| "<<endl;
   system("color 04");
   Beep(700,100);
    cout <<"\t||||||  ||||||  |||||| ||||||||||||||     ||||||       ||||||   ||||||  ||||||  ||||||    |||||||||||||| "<<endl;
    system("color 06");
    Beep(500,100);
	cout <<"\t||||||          |||||| ||||||             ||||||       ||||||   ||||||  ||||||||||||||    ||||||         "<<endl;
    system("color 04");
    Beep(600,100);
	cout <<"\t||||||          |||||| ||||||||||||||     ||||||     |||||||||| ||||||  ||||||||||||||    |||||||||||||| "<<endl;
   system("color 06");
   Beep(500,100);
    cout <<"\t||||||          |||||| ||||||||||||||     ||||||     |||||||||| ||||||  ||||||||||||||    |||||||||||||| "<<endl;
    system("color 04");
    Beep(700,100);
	cout <<"\t||||||          |||||| ||||||||||||||     ||||||     |||||||||| ||||||          ||||||    |||||||||||||| "<<endl<<endl;
    system("pause");
    system("cls");
    Game();
    
}
void Game(){
	int userInput=0;
    system("color 04");
    time();
	cout << "*****************************************************************************\n";
	cout << "*****************************************************************************\n";
	cout << "**********************[1]        Start Game        **************************\n";
	cout << "**********************[2]        Credits           **************************\n";
	cout << "*****************************************************************************\n";
	cout << "*****************************************************************************\n";
	
    cout <<"\n\n>\t";
    
    while (!(cin >> userInput) || userInput <1 || userInput >2){
    	cout << "invalid variable.Must be in range of asked choice.\n";
    	cin.clear();
    	cin.ignore(100,'\n');
    	Beep(0,2000);
    	system("cls");
    	Game();
	}

	if (userInput == 1)	{
		system("cls");
   		gameStart();
	}
	else if (userInput == 2)	{
		system("cls");
   		Credits();
   		system("pause");
   		system("cls");
		Game();
	}

}
void Credits(){
time();
mytext(strcpy(str, "Scenario by: Adamos Petrou\n")); 
mytext(strcpy(str, "Code Developer: Adamos Petrou\n\n"));
}
void gameStart(){
	time();
    mytext(strcpy(str,"   The Shinsoo realm lies in the south of the continent. \n"));
	mytext(strcpy(str,"   The principal occupation of its inhabitants is to trade.\n"));
	mytext(strcpy(str,"   Developed after the decay of the empire, based of Yoon Yoing, the trade relations with the east led fast to a bloom. \n"));
	mytext(strcpy(str,"   With the west the inhabitants in constant discord and the trade route live are interrupted. \n"));
	mytext(strcpy(str,"   In the consciousness of the threat of their base of life by the Metin stone, the dealers rigged.\n"));
	mytext(strcpy(str,"   Your goal is to be strong enough so you can face the Beran-Setaou the most powerfull creture in the world.\n"));
	mytext(strcpy(str,"   Noone ever left the Dragon Temple alive so we dont really know much about the Beran-Setaou.\n\n"));
    system ("pause");
    system ("cls");
    chapter1();
}
void chapter1(){
	time();
	int i=0;
	int Hp=200;
	int Monster=160;
	int Monster1=1000;
	int sword=30;
	int playerLocation = 0;
	int userInput = 0;
	char getAnswer;
	
				mytext(strcpy(str,"   You are awake from your dream in your house bed\n"));
				mytext(strcpy(str,"   You are exhausted from the yesterday hunt but you must continue in order to slay the elder dragon to save your vilage\n"));
				mytext(strcpy(str,"   You get your horse and you start you journey to collect items to upgrade your Sword in order to kill the elder dragon\n"));
				mytext(strcpy(str,"   You came acrross two paths.The one lead you to the Monkey dungeon and the other to the Valley of Seungryong\n\n"));
				mytext(strcpy(str,"   Press [1] if you want to go to the monkey dungeon or [2] to the Valley of Seungryong!\n"));
			

		while ( !(cin >> playerLocation)||playerLocation < 1 || playerLocation >=3)
	{
		cout<<"Invalid Charachter,Restar!"<<endl;
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"\n\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\tLoading";
    	char x=219;
    	cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,200);
    if (i>=10 && i<20)
       Beep(0,150);
    if (i>=10)
      Beep(0,70);
 }
    system("cls");
    chapter1();
}


	if (playerLocation == 1)//Monkey Dungeon
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Monkey Dungeon!\n"));
			mytext(strcpy(str,"   As you fighting monkeys and collecting money to buy potions and upgrade you equipment\n"));
			mytext(strcpy(str,"   You see a big gate that leads you through the cave of the Walking Ape!!\n\n"));
			mytext(strcpy(str,"   To go through the gate and fight the boss press [h] or if you want to run away press [r]\n"));
	
	do{
		int Monsterdmg=rand() % 10+25;
	if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
	if(getAnswer == 'h')
			i=0;
			system("cls");
	if (getAnswer =='h'){
			Monster=Monster-sword;
			cout <<"   You damaged the monster: - "<<sword<<endl;
			cout <<"   Monster's Hp is: "<<Monster<<endl;
			Hp=Hp-Monsterdmg++;
			cout<<"   The Monster hit's you: "<<Monsterdmg<<endl;
	if(Monster<=0){
			cout<<"   You gain Hp for killing the monster"<<endl;
			Hp=200;
			}
				cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
				
		}
	else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Walking Ape!!\n"));
			i = 1 ;
			cin>>getAnswer;
	if(getAnswer =='y'){
				system("cls");
				mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter1();
			}
		}
	else if(Hp <= 0){
			system("color 04");
			cout<<"You Died!!!"<<endl;
			Beep(0,1500);
			system("cls");
			system("pause");
			system("cls");
			chapter1();
			}
		}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"   Bravo you defeat the Walking Ape\n"));
				mytext(strcpy(str,"   You collect some very rare items like the Lion Plate Armor and the Full Moon Sword!!!\n\n"));
				system("pause");
				system("cls");
				mytext(strcpy(str," Next Story!!!"));
				system("pause");
				system("cls");
				chapter2();
			   }
		else {
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter1();	
				}

}

		else if (playerLocation == 2)//Valley of Seungryong
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Valley of Seungryong!\n"));
			mytext(strcpy(str,"   As you fighting Orcs and collecting money to buy potions and upgrade you equipment\n"));
			mytext(strcpy(str,"   You see the mighty Chief Orc with 2 heads!!\n"));
			mytext(strcpy(str,"   It's the most powerfull Orc in the Valley with 1000Hp\n\n"));
			mytext(strcpy(str,"   To fight the Chief Orc press [h] or if you want to run away press [r]\n"));

	do{
		int Monster1dmg=rand() % 10+25;
		if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
		if(getAnswer == 'h')
			i=0;
			system("cls");
		if (getAnswer =='h'){
			Monster1=Monster1-sword;
				cout <<"   You damaged the monster: - "<<sword<<endl;
				cout <<"   Monster's Hp is: "<<Monster1<<endl;
				Hp=Hp-Monster1dmg++;
				cout<<"   The Monster hit's you: "<<Monster1dmg<<endl;
				cout<<"   Your Hp is:"<<Hp<<endl;
		 if(Monster1<=0){
				cout<<"   You gain Hp for killing the monster"<<endl;
					cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
					Hp=200;
			}
		 else if (Hp <= 0){
			system("cls");
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| |||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"     ||||||||||     ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			Beep(500,200);
			Beep(400,200);
			Beep(300,200);
			Beep(200,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			system("cls");
			chapter1();
			}
		}
		 else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Chief Orc!!\n"));
			i = 1 ;
			cin>>getAnswer;
		 if(getAnswer =='y'){
		 		system ("cls");
			mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter1();
			}
		}
	else{		system("cls");
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter1();	
				}
		
	}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"   Bravo you defeat the Monster\n"));
				mytext(strcpy(str,"   You collect some very rare items like the Gold Armor and the Full Moon Sword!!!\n"));
				system("pause");
				system("cls");
				mytext(strcpy(str," Next Story!!!\n"));
				system("pause");
				system("cls");
				chapter2();
			   }
		else {
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter1();	
				}
		}  
}
void chapter2(){
	time();
	int i=0;
	int Hp=250;
	int Monster=260;
	int Monster1=1500;
	int sword=40;
	int playerLocation = 0;
	int userInput = 0;
	char getAnswer;
		    mytext(strcpy(str, "   You became stronger and faster after the fight with the Monkey Boss!!\n"));
			mytext(strcpy(str, "   Your Sword now gain +10dmg and your health +50 and making you able to fight stronger monsters\n"));
			mytext(strcpy(str, "   You went back to your vilage and buy potions for your next fight!!!\n"));
			mytext(strcpy(str, "   As exhausted you are you go to sleep to get rest for a little bit and then you have to decide where you want to go\n"));
			mytext(strcpy(str, "   Press [1] if you want to go to the Mount Sohan or [2] to the Yongbi Desert!\n"));
			

		while ( !(cin >> playerLocation)||playerLocation < 1 || playerLocation >=3)
	{
			cout<<"Invalid Charachter,Restar!"<<endl;
			cin.clear();
			cin.ignore(100,'\n');
			cout<<"\n\n\n\n\n\n\n\n";
    		cout<<"\t\t\t\t\tLoading";
    		char x=219;
    		cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,200);
    if (i>=10 && i<20)
       Beep(0,150);
    if (i>=10)
      Beep(0,70);
 }
    system("cls");
    chapter2();
}


	if (playerLocation == 1)//Mount Sohan
	{       system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Mount Sohan!\n"));
			mytext(strcpy(str,"   For hours you were fighting with Ice Lions and Yetis to collect Ice Chunk and Yetis Fur.\n"));
			mytext(strcpy(str,"   Those two items is what blacksmith want you to bring him to upgrade your sword!\n"));
			mytext(strcpy(str,"   Suddenly you find a stranger in the middle of the mount and he ask you if you can help him\n"));
			mytext(strcpy(str,"   kill the Nine Tails Fox which is the most powerfull creture in the mountain with 2000Hp!!!\n\n"));
			mytext(strcpy(str,"   To help the stranger Fight the Nine Tales Fox press [h] or if you want to run away press [r]\n"));
	
	do{
		int Monster1dmg=rand() % 15+30;
		if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
		if(getAnswer == 'h')
			i=0;
			system("cls");
		if (getAnswer =='h'){
			Monster1=Monster1-sword;
			cout <<"   You damaged the monster: - "<<sword<<endl;
			cout <<"   Monster's Hp is: "<<Monster1<<endl;
			Hp=Hp-Monster1dmg++;
			cout<<"   The Monster hit's you: "<<Monster1dmg<<endl;
			cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
			if(Monster1<=0){
			cout<<"   You gain Hp for killing the monster"<<endl;
			Hp=200;
			}
			else if(Hp <= 0){
			system("cls");
			cout<<"||||||||  |||||||| |||||||||||||| ||||||  ||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			cout<<"||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| |||||||||||||"<<endl;
			cout<<"||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"  ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"  ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"    ||||||||||     ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"      ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"      ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"      ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"      ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"      ||||||       |||||||||||||| ||||||||||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			Beep(500,200);
			Beep(400,200);
			Beep(300,200);
			Beep(200,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			system("cls");
			chapter2();			
			}	
				
		}
		else if(getAnswer =='r'){
			mytext(strcpy(str,"Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Nine Tails Fox!!\n"));
			i = 1 ;
			cin>>getAnswer;
			if(getAnswer =='y'){
				system("cls");
				mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter2();
			}
		}	
	}
		while(Hp>0 && Monster>0);
			if(Monster <= 0){
				mytext(strcpy(str,"Bravo you defeat the Monster\n"));
				mytext(strcpy(str,"You collect some very rare items like the Gold Armor and the Full Moon Sword!!!\n"));
				system("pause");
				system("cls");
				mytext(strcpy(str," Next Story!!!"));
				system("pause");
				system("cls");
				chapter3();
			   }
			   else {
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter2();	
				}

}

	else if (playerLocation == 2)//Yongbi Desert
	{     	system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Yongbi Desert!\n"));
			mytext(strcpy(str,"   For hours you were fighting with Soldier Spiders and Snake Archers\n"));
			mytext(strcpy(str,"   Suddenly you find a stranger in the middle of the desert and he ask you if you can help him\n"));
			mytext(strcpy(str,"   kill the Giant Tortoise!!\n"));
			mytext(strcpy(str,"   To help him fight the Gaint Tortoise press [h] or if you want to run away press [r]\n"));

	do{
		int Monsterdmg=rand() % 10+25;
		if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
		if(getAnswer == 'h')
			i=0;
			system("cls");
		if (getAnswer =='h'){
			Monster=Monster-sword;
				cout <<"   You damaged the monster: - "<<sword<<endl;
				cout <<"   Monster's Hp is: "<<Monster<<endl;
				Hp=Hp-Monsterdmg++;
				cout<<"   The Monster hit's you: "<<Monsterdmg<<endl;
				cout<<"   Your Hp is:"<<Hp<<endl;
		 if(Monster<=0){
				cout<<"   You gain Hp for killing the monster"<<endl;
					Hp=250;	
				cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
				
			}
		 else if (Hp <= 0){
			system("cls");
			mytext(strcpy(str,"   You Died!!!\n"));
			Beep(100,2500);
			system("cls");
			chapter2();
			}
		}
		 else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Gaint Tortoise!!\n"));
			i = 1 ;
			cin>>getAnswer;
		 if(getAnswer =='y'){
		 		system ("cls");
			mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter2();
			}
		}
	else{		system("cls");
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter2();	
				}
		
	}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"   Bravo you defeat the Gaint Tortoise\n"));
				mytext(strcpy(str,"   You collect some very rare items like the Leathal Plate Armor and the Barbarian Sword!!!\n"));
				system("pause");
				system("cls");
				mytext(strcpy(str," Next Story!!!\n"));
				system("pause");
				system("cls");
				chapter3();
			   }
		else {
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter2();	
				}
		}  
}
void chapter3(){
	time();
	int i=0;
	int Hp=300;
	int Monster1=400;
	int Monster=400;
	int sword=55;
	int playerLocation = 0;
	int userInput = 0;
	char getAnswer;
	
		    mytext(strcpy(str, "   You became stronger and faster after the fight with the Giant Tortoise!!\n"));
			mytext(strcpy(str, "   Your Sword now gain +15dmg and your health +50 and making you able to fight stronger monsters\n"));
			mytext(strcpy(str, "   You went back to your vilage and buy potions for your next fight!!!\n"));
			mytext(strcpy(str, "   As exhausted you are you go to sleep to get rest for a little bit and then you have to decide where you want to go\n"));
			mytext(strcpy(str, "   Press [1] if you want to go to the Hwang Temple or [2] to the Dark Temple!\n"));
			

		while ( !(cin >> playerLocation)||playerLocation < 1 || playerLocation >=3)
	{
			cout<<"   Invalid Charachter,Restar!"<<endl;
			cin.clear();
			cin.ignore(100,'\n');
			cout<<"\n\n\n\n\n\n\n\n";
    		cout<<"\t\t\t\t\tLoading";
    		char x=219;
    		cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,200);
    if (i>=10 && i<20)
       Beep(0,150);
    if (i>=10)
      Beep(0,70);
 }
    system("cls");
    chapter3();
}


	if (playerLocation == 1)//Hwang Temple
	{       system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Hwang Temple!\n"));
			mytext(strcpy(str,"   For hours you were fighting with Proud Dark Riflemans and Dark Ghost Leaders to collect Soul Stones and Curse Books.\n"));
			mytext(strcpy(str,"   Those two items is what blacksmith want you to bring him to upgrade your sword and your armor!!\n"));
			mytext(strcpy(str,"   At the end of the Temple the is a Yellow Tiger Ghost with a very strong poison effect\n"));
			mytext(strcpy(str,"   and it's Hp regenerates really quick!\n"));
			mytext(strcpy(str,"   But it has 400Hp so you might have a chance to kill it!!!\n"));
			mytext(strcpy(str,"   To fight the Yellow Tiger Ghost press [h] or if you want to run away press [r]\n"));
	
	do{
		int Monsterdmg=rand() % 15+28;
		if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
		if(getAnswer == 'h')
			i=0;
			system("cls");
		if (getAnswer =='h'){
			Monster=Monster-sword;
				cout <<"   You damaged the monster: - "<<sword<<endl;
				cout <<"   Monster's Hp is: "<<Monster<<endl;
				Hp=Hp-Monsterdmg++;
				cout<<"   The Monster hit's you: "<<Monsterdmg<<endl;
				cout<<"   Your Hp is:"<<Hp<<endl;
		 if(Monster<=0){
				cout<<"   You gain Hp for killing the monster"<<endl;
					Hp=300;
					cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
			}
		 else if (Hp <= 0){
			system("cls");
			mytext(strcpy(str,"   You Died!!!\n"));
			Beep(100,2500);
			system("cls");
			chapter3();
			}
		}
		 else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Chief Orc!!\n"));
			i = 1 ;
			cin>>getAnswer;
		 if(getAnswer =='y'){
		 		system ("cls");
			mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter3();
			}
		}
	else{		system("cls");
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter3();	
				}
		
	}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"   Bravo you defeat the Yellow Tiger Ghost\n"));
				mytext(strcpy(str,"   You collect some very rare items like the Gold Armor and the Bloody Sword!!!\n"));
				system("pause");
				system("cls");
				chapter4();
			   }
		else {
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter3();	
				}
		}  

	else if (playerLocation == 2)//Dark Temple
	{     	system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Dark Temple!\n"));
			mytext(strcpy(str,"   For hours you were fighting with Elite Esoteric Summoner and Leflet Bogeyman to collect Soul Stones and Curse Books.\n"));
			mytext(strcpy(str,"   Those two items is what blacksmith want you to bring him to upgrade your sword and your armor!!\n"));
			mytext(strcpy(str,"   At the end of the Temple the is a Dark Ghost Leader with a very fast attack speed\n"));
			mytext(strcpy(str,"   and posion does not do damage to her!\n"));
			mytext(strcpy(str,"   But she has 400Hp so you might have a chance to kill her!!!\n"));
			mytext(strcpy(str,"   To fight the Dark Ghost Leader press [h] or if you want to run away press [r]\n"));

	do{
		int Monster1dmg=rand() % 10+25;
		if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
		if(getAnswer == 'h')
			i=0;
			system("cls");
		if (getAnswer =='h'){
			Monster1=Monster1-sword;
				cout <<"   You damaged the monster: - "<<sword<<endl;
				cout <<"   Monster's Hp is: "<<Monster1<<endl;
				Hp=Hp-Monster1dmg++;
				cout<<"   The Monster hit's you: "<<Monster1dmg<<endl;
			if(Monster1<=0){
				Hp=300;	
				cout<<"   You gain Hp for killing the monster"<<endl;
				
			}
				cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
		}
		else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the monkey!!\n"));
			i = 1 ;
			cin>>getAnswer;
			if(getAnswer =='y'){
				system("cls");
				mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter3();
			}
		}
		else if(Hp <= 0){
			mytext(strcpy(str,"You Died!!!\n"));
			Beep(0,700);
			system("cls");
			gameOver();
			system("pause");
			system("cls");
			chapter3();
			}
		
		else{
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter3();	
				}
		
	}
		while(Hp>0 && Monster1>0);
			if(Monster1 <= 0){
				mytext(strcpy(str,"   Bravo you defeat the Dark Ghost Leader\n"));
				mytext(strcpy(str,"   You collect some very rare items like the Gold Armor and the Bloody Sword!!!\n"));
				system("pause");
				system("cls");
				chapter4();
			   }
			   else {
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter3();	
				}		   

}
}
void chapter4(){
	time();
	int i=0;
	int Hp=350;
	int Monster=500;
	int Monster1=1600;
	int sword=70;
	int playerLocation = 0;
	int userInput = 0;
	char getAnswer;
	
			mytext(strcpy(str, "   You became stronger and faster after the fight with the boss in the Temple!!\n"));
			mytext(strcpy(str, "   Your Sword now gain +15dmg and your health +50 and making you able to fight stronger monsters\n"));
			mytext(strcpy(str, "   You are so exhausted but you want to continue your journey and kill the Dragon as soon as possible!!\n"));
			mytext(strcpy(str, "   You are now even stronger so you can fight monsters that will give you more power!!\n"));
			mytext(strcpy(str, "   Press [1] if you want to go to the Snakefield or [2] to the Lungsam!\n"));
			

		while ( !(cin >> playerLocation)||playerLocation < 1 || playerLocation >=3)
	{
		cout<<"   Invalid Charachter,Restar!"<<endl;
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\tLoading";
    	char x=219;
    	cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,200);
    if (i>=10 && i<20)
       Beep(0,150);
    if (i>=10)
      Beep(0,70);
 }
    system("cls");
    chapter4();
}


	if (playerLocation == 1)//Snakefield
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Snakefield!\n"));
			mytext(strcpy(str,"   For hours you were fighting with Giant Rock Golems and Ogre Warriors to collect Soul Stones and Scrolls of evolution.\n"));
			mytext(strcpy(str,"   Those two items is what you want you to upgrade your sword and increase your Health points!!\n"));
			mytext(strcpy(str,"   At the end of the Field the is a Big Stone Golem with with a sword made of human bones and teeth!!! \n"));
			mytext(strcpy(str,"   It has 500Hp so you might have a chance to kill it!!!\n"));
			mytext(strcpy(str,"   To fight the Big Stone Golem press [h] or if you want to run away press [r]\n"));
	
	do{
		int Monsterdmg=rand() % 10+35;
	if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
	if(getAnswer == 'h')
			i=0;
			system("cls");
	if (getAnswer =='h'){
			Monster=Monster-sword;
			cout <<"   You damaged the monster: - "<<sword<<endl;
			cout <<"   Monster's Hp is: "<<Monster<<endl;
			Hp=Hp-Monsterdmg++;
			cout<<"   The Monster hit's you: "<<Monsterdmg<<endl;
	if(Monster<=0){
			Hp=350;
			cout<<"   You gain Hp for killing the monster"<<endl;
		
			}
				cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
				
		}
	else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the monkey!!\n"));
			i = 1 ;
			cin>>getAnswer;
	if(getAnswer =='y'){
				system("cls");
				mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter4();
			}
		}
	else if(Hp <= 0){
			system("color 04");
			cout<<"   You Died!!!"<<endl;
			Beep(0,1500);
			system("cls");
			system("pause");
			system("cls");
			chapter4();
			}
		}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"   Bravo you defeat the Big Stone Golem\n"));
				mytext(strcpy(str,"   You collect some very rare items like the Black Steel Armor and the Nymph Sword!!!\n\n"));
				system("pause");
				system("cls");
				chapter5();
			   }
		else {
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter4();	
				}

}

		else if (playerLocation == 2)//Lungsam
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Lungsam!\n"));
			mytext(strcpy(str,"   As you fighting Dryads and collecting money to buy potions and upgrade you equipment\n"));
			mytext(strcpy(str,"   You see the mighty Evil Tree with Magic Powers that throws fire balls!!\n"));
			mytext(strcpy(str,"   It's the most powerfull creture in the Lungsan forest with 1600Hp\n"));
			mytext(strcpy(str,"   To fight the Evil Tree press [h] or if you want to run away press [r]\n"));

	do{
		int Monster1dmg=rand() % 10+55;
		if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
		if(getAnswer == 'h')
			i=0;
			system("cls");
		if (getAnswer =='h'){
			Monster1=Monster1-sword;
				cout <<"   You damaged the monster: - "<<sword<<endl;
				cout <<"   Monster's Hp is: "<<Monster1<<endl;
				Hp=Hp-Monster1dmg++;
				cout<<"   The Monster hit's you: "<<Monster1dmg<<endl;
				cout<<"   Your Hp is:"<<Hp<<endl;
		 if(Monster1<=0){
				cout<<"   You gain Hp for killing the monster"<<endl;
					cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
					Hp=200;
			}
		 else if (Hp <= 0){
			system("cls");
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| |||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"     ||||||||||     ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			Beep(500,200);
			Beep(400,200);
			Beep(300,200);
			Beep(200,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			system("cls");
			chapter4();
			}
		}
		 else if(getAnswer =='r'){
			mytext(strcpy(str,"Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Chief Orc!!\n"));
			i = 1 ;
			cin>>getAnswer;
		 if(getAnswer =='y'){
		 		system ("cls");
			mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter4();
			}
		}
	else{		system("cls");
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter4();	
				}
		
	}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"Bravo you defeat the Monster\n"));
				mytext(strcpy(str,"You collect some very rare items like the Gold Armor and the Full Moon Sword!!!\n"));
				system("pause");
				system("cls");
				mytext(strcpy(str," Next Story!!!\n"));
				system("pause");
				system("cls");
				chapter5();
			   }
		else {
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter4();	
				}
		} 
}
void chapter5(){
	time();
	int i=0;
	int Hp=400;
	int Monster=1600;
	int Monster1=2500;
	int sword=90;
	int playerLocation = 0;
	int userInput = 0;
	char getAnswer;
	
			mytext(strcpy(str, "   You became stronger and faster after the fight with the Big Stone Golem!!\n"));
			mytext(strcpy(str, "   Your Sword now gain +20dmg and your health +50 and making you able to enter the Dragon's Temple\n"));
			mytext(strcpy(str, "   You can enter the Dragon Temple and break the 4 Metin stones that give him great power and making him unstoppable!!\n"));
			mytext(strcpy(str, "   Metin of Arrogance is increasing its HP regeneration.\n"));
			mytext(strcpy(str, "   Metin of Mountain is increasing its defence.\n"));
			mytext(strcpy(str, "   Metin of Solitude is increasing its HP restoration.\n"));
			mytext(strcpy(str, "   Metin of Vengeance is increasing its damage.\n"));
			mytext(strcpy(str, "   Or you can go to the Devil's Catacomb which will might give you the opportunity to become stronger\n"));
			mytext(strcpy(str, "   and Upgrade your Armor and Weapon to Max Lvl!!!\n"));
			mytext(strcpy(str, "   But there is a big chance to lose everything and die in there!!!\n\n"));
			mytext(strcpy(str, "   Press [1] if you want to enter The Dragon's Temple or [2] to the Devil's Catacomb!\n"));
			

		while ( !(cin >> playerLocation)||playerLocation < 1 || playerLocation >=3)
	{
		cout<<"Invalid Charachter,Restar!"<<endl;
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"\n\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\tLoading";
    	char x=219;
    	cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,200);
    if (i>=10 && i<20)
       Beep(0,150);
    if (i>=10)
      Beep(0,70);
 }
    system("cls");
    chapter5();
}


	if (playerLocation == 1)//Dragon's Temple
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Dragon's Temple!\n"));
			mytext(strcpy(str,"   For hours you were trying to break the 4 Metin stones but you were able to break 3 of them!\n"));
			mytext(strcpy(str,"   A group of other warrior's was passing through and they saw you trying to break the last Metin \n"));
			mytext(strcpy(str,"   that help the Beran-Setaou stay undefeated and untouchable!\n"));
			mytext(strcpy(str,"   The ask you if you want help to break the Metin with them and then group up to go and kill the Beran-Setaou\n\n"));
			mytext(strcpy(str,"   To accept their help and group up with them press [h] or if you want to go solo press [r]\n"));
	
	do{
		int Monsterdmg=rand() % 10+35;
	if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
	if(getAnswer == 'h')
			i=0;
			system("cls");
	if (getAnswer =='h'){
			Monster=Monster-sword;
			cout <<"   You damaged the Metin: - "<<sword<<endl;
			cout <<"   Metin's Hp is: "<<Monster<<endl;
	
				
		}
	else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the monkey!!\n"));
			i = 1 ;
			cin>>getAnswer;
	if(getAnswer =='y'){
		system("cls");
				mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter5();
			}
		}
	else if(Hp <= 0){
			system("color 04");
			cout<<"You Died!!!"<<endl;
			Beep(0,1500);
			system("cls");
			system("pause");
			system("cls");
			chapter5();
			}
		}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"   Bravo you break the Metin\n"));
				mytext(strcpy(str,"   You collect some very rare items like the Devil's Horn Armor and the Triton Sword!!!\n\n"));
				mytext(strcpy(str,"   You now group up with the other warrior and go to Dragons Cave to kill him and save your vilage!!!\n\n"));
				system("pause");
				system("cls");
				mytext(strcpy(str," Next Story!!!"));
				system("pause");
				system("cls");
				chapter6();
			   }
		else {
				cout<<"   Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter5();	
				}

}

		else if (playerLocation == 2)//Devil's Catacomb
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to go through the Devil's Catacomb!\n"));
			mytext(strcpy(str,"   As you fighting Hell Priest's and Evil Hell Major's to make you equipment stronger\n"));
			mytext(strcpy(str,"   You see The Charon with High amount of damage and with a special attack of Three-Way Cut!!\n"));
			mytext(strcpy(str,"   It's the most deadliest special attack that damaged you 500 per cut!!\n"));
			mytext(strcpy(str,"   To fight the Charon press [h] or if you want to run away press [r]\n"));

	do{
		int Monster1dmg=rand() % 100+200;
		if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
		if(getAnswer == 'h')
			i=0;
			system("cls");
		if (getAnswer =='h'){
			Monster1=Monster1-sword;
				cout <<"   You damaged the monster: - "<<sword<<endl;
				cout <<"   Monster's Hp is: "<<Monster1<<endl;
				Hp=Hp-Monster1dmg++;
				cout<<"   The Monster hit's you: "<<Monster1dmg<<endl;
				cout<<"   Your Hp is:"<<Hp<<endl;
				Beep(0,1500);
		 if(Monster1<=0){
				cout<<"   You gain Hp for killing the monster"<<endl;
				Hp=400;
				cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
				
					
			}
		 else if (Hp <= 0){
			system("cls");
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| |||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"     ||||||||||     ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			Beep(500,200);
			Beep(400,200);
			Beep(300,200);
			Beep(200,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			system("cls");
			chapter5();
			}
		}
		 else if(getAnswer =='r'){
			mytext(strcpy(str,"Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Chief Orc!!\n"));
			i = 1 ;
			cin>>getAnswer;
		 if(getAnswer =='y'){
		 		system ("cls");
			mytext(strcpy(str,"   You chose to run away...You have to try again some other time\n"));
				system("pause");
				system("cls");
				chapter5();
			}
		}
	else{		system("cls");
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter5();	
				}
		
	}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"Bravo you defeat the Monster\n"));
				mytext(strcpy(str,"You collect some very rare items like the Gold Armor and the Full Moon Sword!!!\n"));
				system("pause");
				system("cls");
				mytext(strcpy(str," Next Story!!!\n"));
				system("pause");
				system("cls");
				chapter6();
			   }
		else {
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter5();	
				}
		} 
}
void chapter6(){
	time();
	int i=0;
	int Hp=1450;
	int Monster=2000;
	int sword=240;
	int playerLocation = 0;
	int userInput = 0;
	char getAnswer;
	
			mytext(strcpy(str, "   You and your group now join your forces and your Hp and Dmg increase with the Devil's Horn Armor and the Triton Sword\n"));
			mytext(strcpy(str, "   Your Sword now gain +150dmg and your health +1000 and making you able to get your group and go to Beran's cave!!!\n"));
			mytext(strcpy(str, "   You enter the cave and you face the Beran-Setaou,the most powerful creture \n"));
			mytext(strcpy(str, "   in the world that noone ever get out of there alive\n"));
			mytext(strcpy(str, "   There was a CHAOS in there,for hours all 5 of you fighting the the Dragon using all your energy and power you had!\n"));
			mytext(strcpy(str, "   Every 3 minutes the metin's were respawing and you have to break them again in order to damage the Dragon!!\n"));
			mytext(strcpy(str, "   You had an idea that if you cobine your ultimate attacks by the time you break the 4 metin's\n"));
			mytext(strcpy(str, "   you will have a chance to kill him and finally save the world from this Monster!\n"));
			mytext(strcpy(str, "   It's your decision if you want to take that risk and use all of your ultimates trying to kill the Dragon!!!\n\n"));
			mytext(strcpy(str, "   Press [1] if you want to cobine your Ultimates or [2] to keep fighting with the same tactic as you did!\n"));
			
				while ( !(cin >> playerLocation)||playerLocation < 1 || playerLocation >=3)
	{
		cout<<"Invalid Charachter,Restar!"<<endl;
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"\n\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\tLoading";
    	char x=219;
    	cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,100);
    if (i>=10 && i<20)
       Beep(0,70);
    if (i>=10)
      Beep(0,50);
 }
    system("cls");
    chapter6();
}


	if (playerLocation == 1)//Dragon's Temple
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to cobine your ultimates and use them against the Dragon!\n"));
			mytext(strcpy(str,"   Your team break the metin's that spawn in the cave and now your ready to use your ultimates\n"));
			mytext(strcpy(str,"   Press [h] to attack the Beran-Setaou or if you are scared and you want to run away press [r]\n"));
	
	do{
		int Monsterdmg=rand() % 100+100;
	if(getAnswer == 'h' && i != 1 || i == 0 )
			cin>>getAnswer;
	if(getAnswer == 'h')
			i=0;
			system("cls");
	if (getAnswer =='h'){
			Monster=Monster-sword;
			cout <<"   You damaged the monster: - "<<sword<<endl;
			cout <<"   Monster's Hp is: "<<Monster<<endl;
			Hp=Hp-Monsterdmg++;
			cout<<"   The Monster hit's you: "<<Monsterdmg<<endl;
	if(Monster<=0){
			Hp=1450;
			cout<<"   You gain Hp for killing the monster"<<endl;
		
			}
				cout<<"   Your Hp now is:"<<Hp<<endl<<endl;
				
		}
	else if(getAnswer =='r'){
			mytext(strcpy(str,"   Are you sure that you want to run away? Press [y] if you want to run away or press [h] to fight the Dragon!!\n"));
			i = 1 ;
			cin>>getAnswer;
	if(getAnswer =='y'){
				system("cls");
				mytext(strcpy(str,"   You chose to run away...You have to try again some other time.\n"));
				system("pause");
				system("cls");
				chapter6();
			}
		}
	else if(Hp <= 0){
			system("color 04");
			cout<<"You Died!!!"<<endl;
			Beep(0,1500);
			system("cls");
			system("pause");
			system("cls");
			chapter6();
			}
		}
	while(Hp>0 && Monster>0);
		if(Monster <= 0){
				mytext(strcpy(str,"   Bravo you defeat the Great Beran-Setaou.\n"));
				mytext(strcpy(str,"   You collect the tresure from the dragons cave that was full of gold.\n"));
				mytext(strcpy(str,"   You can now go back to your vilage knowing that the thread is forever gone.\n"));
				system("pause");
				system("cls");
				gameOver();
			   }
		else {
				cout<<"Invalid Charachter,Restar!"<<endl;
				Beep(1000,1000);
				system("cls");
				chapter6();	
				}

}

		else if (playerLocation == 2)//Same Tactic
	{
			system("cls");
			time();
			mytext(strcpy(str,"   You choose to fight with the same tactic as you did for hours\n"));
			mytext(strcpy(str,"   and as the metin's was spawnning in the cave you couldn't damage the Dragon\n"));
			mytext(strcpy(str,"   Your team start to lose alot of blood and power making them not able to hold for more\n"));
			mytext(strcpy(str,"   You were exhausted too as you see that you can't hurt the Dragon at all!!!\n"));
			mytext(strcpy(str,"   At final the Dragon strike you all down to the ground and kill you all instanly\n\n"));
   			system("pause");
 			system("cls");
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| |||||||||||||"<<endl;
			cout<<" ||||||||  |||||||| |||||||||||||| ||||||  ||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"   ||||||||||||||   ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"     ||||||||||     ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   |||||||||||||| ||||||  ||||||"<<endl;
			cout<<"       ||||||       ||||||  |||||| ||||||  ||||||    ||||||  ||||||   ||||||   ||||||         ||||||  ||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    |||||||||||||| |||||||||| |||||||||||||| ||||||||||||||"<<endl;
			cout<<"       ||||||       |||||||||||||| ||||||||||||||    ||||||||||||   |||||||||| |||||||||||||| ||||||||||||"<<endl;
			Beep(500,200);
			Beep(400,200);
			Beep(300,200);
			Beep(200,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			Beep(100,200);
			system("cls");
			chapter6();
			}
	
}
void gameOver(){
mytext(strcpy(str,"   Congratulations you finish the game\n"));
mytext(strcpy(str,"   Thanks for playing!!!\n"));
	
exit(0);
}
