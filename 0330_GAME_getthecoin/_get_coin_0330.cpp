////////////////////////////////////////////////////////////
////				GAME : GET THE COIN  				////
////			BY : CHINNAWAT 1D CE KMITL55			////
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
////////////////////////////////////////////////////////////
//////////////// DEFINE Fuction for FUNCTION ///////////////
////////////////////////////////////////////////////////////
char cursor(int x, int y){
	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	char buf[2]; COORD c = {x,y}; DWORD num_read;
	if( !ReadConsoleOutputCharacter(hStd,(LPTSTR)buf,1,c,(LPDWORD)&num_read) )
	return '\0';
	else
	return buf[0];
}
void setcursor(bool visible){ //hidecursor
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console,&lpCursor);
}
void setcolor(int fg,int bg){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg*16+fg);
}
void gotoxy(int x, int y){
	COORD c = {x,y};
	SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE),c);
}
////////////////////////////////////////////////////////////
////////////////// menu fuction ////////////////////////////
////////////////////////////////////////////////////////////
void menu() //menu ' '
{
    system("MODE 300,160");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
setcolor(15,0);
printf("\n\n\n\t\333\333\333\333\333 \333\333\333\333 \333\333\333\333\333    \333\333\333\333\333 \333    \333 \333\333\333\333    \333\333\333\333 \333\333\333\333 \333\333\333\333 \333      \333\n");
printf("\t\333      \333 \333           \333            \333     \333    \333 \333          \333    \333 \333    \333    \333    \333\333    \333\n");
printf("\t\333         \333           \333            \333     \333    \333 \333          \333       \333    \333    \333    \333 \333   \333\n");
printf("\t\333  \333\333\333 \333\333\333       \333            \333     \333\333\333\333 \333\333\333      \333       \333    \333    \333    \333  \333  \333\n");
printf("\t\333      \333 \333           \333            \333     \333    \333 \333          \333    \333 \333    \333    \333    \333   \333 \333\n");
printf("\t\333      \333 \333           \333            \333     \333    \333 \333          \333    \333 \333    \333    \333    \333    \333\333\n");
printf("\t\333\333\333\333\333 \333\333\333\333     \333            \333     \333    \333 \333\333\333\333    \333\333\333\333 \333\333\333\333 \333\333\333\333 \333      \333\n");

	printf("\n\n\n\t\t\t\t   _______________ \n");
	printf("\t\t\t\t  |               | \n");
	printf("\t\t\t\t  |     START     | [S]\n");
	printf("\t\t\t\t  |_______________| \n\n");
	printf("\t\t\t\t   _______________ \n");
	printf("\t\t\t\t  |               | \n");
	printf("\t\t\t\t  |  HOW TO PLAY  | [H]\n");
	printf("\t\t\t\t  |_______________| \n\n");
	printf("\t\t\t\t   _______________ \n");
	printf("\t\t\t\t  |               | \n");
	printf("\t\t\t\t  |   INTRODUCE   | [I]\n");
	printf("\t\t\t\t  |_______________| \n\n");
	printf("\t\t\t\t   _______________ \n");
	printf("\t\t\t\t  |               | \n");
	printf("\t\t\t\t  |      EXIT     | [Esc]\n");
	printf("\t\t\t\t  |_______________| \n");

	printf("\n\n\t\t\t\t\t\t\t\t By Chinnawat Chaisuriyasak");
	printf("\n\t\t\t\t\t\t\t\t    1D KMITL55 59010330");
}
void intro(){
	setcolor(11,0);
    printf("\n\n\t\t  Introduce to \"GET THE COIN\"\n\n");
    
	printf("\t\tThis game \'GET THE COIN\' made for 1076234 Computer Programming1 2559.\n");
	printf("\t\tApplication from content in 1076234 Computer Programming1.\n");
	printf("\t\tTo Dr. Thanunchai Threepak\n");
	printf("\t\tDeveloping by Chinnawat Chaisuriyasak CE(1D) KMITL55\n\n");
	
    printf("\t\tPress any key to back to menu... \n");
	printf("\t\tPress Esc : Exit from the game");
}
void howto(){
	setcolor(7,7);
	printf("\n\n\t\t *");
	setcolor(11,0);
	printf(" ABOUT \"GET THE COIN\"\n\n");

	printf("\t\t This game you are a  plate that waiting for the coin that going from top to bottom.\n");
	printf("\t\t You have to keep it every coin. If you miss 1 coin, you will lose 1 life.\n");
	printf("\t\t More level more speed of coin also more space that can fall from the top.\n\n");
	
	printf("\t\t Remember!!! : You have only 3 lifes\n\n");
	setcolor(7,7);
	printf("\t\t *");
	setcolor(11,0);
	printf(" Key for play the game\n\n");
	
	printf("\t\t Press A : Move Left 2 space        \n");
	printf("\t\t Press S : Move Left 1 space        \n");
	printf("\t\t Press D : Move Right 1 space       \n");
	printf("\t\t Press F : Move Right 2 space       \n\n");

	printf("\t\t Press any key to back to menu... \n");
	printf("\t\t Press Esc : Exit from the game");
}
void end(){
	setcolor(12,0);
printf("\n\n\t ::::::::      :::     ::::    ::::  ::::::::::        ::::::::  :::     ::: :::::::::: :::::::::  \n");
	printf("\t:+:    :+:   :+: :+:   +:+:+: :+:+:+ :+:              :+:    :+: :+:     :+: :+:        :+:    :+: \n");
	printf("\t+:+         +:+   +:+  +:+ +:+:+ +:+ +:+              +:+    +:+ +:+     +:+ +:+        +:+    +:+ \n");
	printf("\t:#:        +#++:++#++: +#+  +:+  +#+ +#++:++#         +#+    +:+ +#+     +:+ +#++:++#   +#++:++#:  \n");
	printf("\t+#+   +#+# +#+     +#+ +#+       +#+ +#+              +#+    +#+  +#+   +#+  +#+        +#+    +#+ \n");
	printf("\t#+#    #+# #+#     #+# #+#       #+# #+#              #+#    #+#   #+#+#+#   #+#        #+#    #+# \n");
	printf("\t ########  ###     ### ###       ### ##########        ########      ###     ########## ###    ### \n\n\n\n\n\n\n");
	setcolor(15,0);
		printf("\t\t		   _______________           _______________ \n");
		printf("\t\t		  |               |         |               | \n");
		printf("\t\t		  |      Menu     | [M]     |      Exit     | [Esc]\n");
		printf("\t\t		  |_______________|         |_______________| \n");
}
void exit(){
	setcolor(10,0);
printf("\n\n\t   ###    ########  ########    ##    ##  #######  ##     ##     ######  ##     ## ########  ######## \n");
    printf("\t  ## ##   ##     ## ##           ##  ##  ##     ## ##     ##    ##    ## ##     ## ##     ## ##       \n");
	printf("\t ##   ##  ##     ## ##            ####   ##     ## ##     ##    ##       ##     ## ##     ## ##       \n");
	printf("\t##     ## ########  ######         ##    ##     ## ##     ##     ######  ##     ## ########  ######   \n");
	printf("\t######### ##   ##   ##             ##    ##     ## ##     ##          ## ##     ## ##   ##   ##       \n");
	printf("\t##     ## ##    ##  ##             ##    ##     ## ##     ##    ##    ## ##     ## ##    ##  ##       \n");
	printf("\t##     ## ##     ## ########       ##     #######   #######      ######   #######  ##     ## ######## \n\n");
		printf("\t\t\t         _______________           _______________ \n");
		printf("\t\t\t        |               |         |               | \n");
		printf("\t\t\t        |      YES      | [Y]     |      NO       | [N]\n");
		printf("\t\t\t        |_______________|         |_______________| \n");
}
///////////////////////////////////////////////////////////
////////////////Character Fuction /////////////////////////
void draw_game(){
	setcolor(14,0);
	gotoxy(3,2);
	printf("  _|_|_|  _|_|_|_|  _|_|_|_|_|     _|_|_|_|_|  _|    _|  _|_|_|_|       _|_|_|    _|_|    _|_|_|  _|      _|");
	gotoxy(3,3);
	printf("_|        _|            _|             _|      _|    _|  _|           _|        _|    _|    _|    _|_|    _|  ");
	gotoxy(3,4);
	printf("_|  _|_|  _|_|_|        _|             _|      _|_|_|_|  _|_|_|       _|        _|    _|    _|    _|  _|  _|  ");
	gotoxy(3,5);
	printf("_|    _|  _|            _|             _|      _|    _|  _|           _|        _|    _|    _|    _|    _|_|  ");
	gotoxy(3,6);
	printf("  _|_|_|  _|_|_|_|      _|             _|      _|    _|  _|_|_|_|       _|_|_|    _|_|    _|_|_|  _|      _|  ");

}
void draw_hero(int x,int y){
	setcolor(13,0);
	gotoxy(x,y);
	printf(" vvv vvv ");
	gotoxy(x,y+1);
	printf(" {0|_|0} ");
}
void erase_hero(int x,int y){
	gotoxy(x,y);
	printf("         ");
	gotoxy(x,y+1);
	printf("         ");
}
void erase_hero2(int x,int y){
	gotoxy(x,y);
	printf("                                                                                                                                         ");
	gotoxy(x,y+1);
	printf("                                                                                                                                         ");
}
void draw_creep(int x,int y){
	setcolor(11,0);
	gotoxy(x,y);
	printf("$");
}
void erase_creep(int x,int y){
	gotoxy(x,y);
	printf(" ");
}
void draw_map()
{
	setcolor(7,7);
	int i;
	for(i=0;i<116;i++){
		printf("*");
	}
	for (i=1;i<8;i++){
		gotoxy(0,i);
		printf("*");
		gotoxy(115,i);
		printf("*\n");
	}
	for(i=0;i<116;i++){
		printf("*");
	}
	for (i=8;i<40;i++){
		gotoxy(0,i);
		printf("*");
		gotoxy(80,i);
		printf("*");
		gotoxy(115,i);
		printf("*\n");
	}
	for(i=0;i<116;i++){
		printf("*");
	}
}
void frame(){
	setcolor(15,0);
	int i;
    for(i=0;i<60;i++){
		gotoxy(i,1);
		printf("\333");
	}
    for(i=0;i<60;i++){
		gotoxy(i,41);
		printf("\333");
	}
}
void get_rdy(){
	printf("\n\t\t\tAre you Ready ?");
	Sleep(200);
	printf("               ");
	Sleep(800);
	printf("\n\n\t\t\t3");
	Sleep(200);
	printf(" ");
	Sleep(800);
	printf("\n\n\t\t\t2");
	Sleep(200);
	printf(" ");
	Sleep(800);
	printf("\n\n\t\t\t1");
	Sleep(200);
	printf(" ");
}

///////////////////////////////////////////////////
///////////////////////////////////////////////////
int main()
{
	system("MODE 300,160");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
	setcursor(0);
	char select ='.';
	system("cls");
	menu();

	do {
		if(kbhit()){
			select=getch();
	//////////////////////////////////////////////
	/////////////// start ////////////////////////
			if(select=='s'){
				system("cls");
				get_rdy();
				system("cls");
////////////////////////////////////////////////////////////
/////////////////// GAME ///////////////////////////////////
//********************************************************//
	/// Intitial "HERO" Postion when start game ///
				int x=35,y=37,way,level=1,creep=10;
				char ch='.';
				int a,b;
				int cx[150],cy[100];
				int ca[10] ={0};
				int clv=1; //creep level
				int cd = 10000; //cooldown
				int life=3,point=0;
				draw_map();
				draw_game();
				draw_hero(x,y);
				/// Position of level,coin,point life in map ///
				setcolor(11,0);
				gotoxy(90,11);
				printf("Level : %d",level);
				gotoxy(90,12);
				printf("Coin  : %d",creep);
				gotoxy(90,13);
				printf("Point : %d",point);
				gotoxy(90,14);
				printf("Life  : %d",life);
				gotoxy(90,38);
				printf("By Chinnawat");
				gotoxy(90,39);
				printf("59010330 1D KMITL");

	///////////////////////////////////////////
	/// when getch int value to way of hero ///
				do {
					///Check Creep Active ///
					//Random "CREEP" ////////
					srand( time( NULL ) );
					if(cd <= 0){
						for(int i = 0;i < 10;i++){
							if(ca[i] == 0){
								if(clv == 1){
									cy[i] = 9;
									cx[i] = rand() %5+33;
								}
								else if(clv==2){
									cx[i] = rand() %8+31;
									cy[i] = 9;
								}
								else if(clv==3){
									cx[i] = rand() %10+30;
									cy[i] = 9;
								}
								else if(clv==4){
									cx[i] = rand() %14+28;
									cy[i] = 9;
								}
								else if(clv==5){
									cx[i] = rand() %20+25;
									cy[i] = 9;
								}
								else if(clv==6){
									cx[i] = rand() %24+23;
									cy[i] = 9;
								}
								else if(clv==7){
									cx[i] = rand() %30+20;
									cy[i] = 9;
								}
								else if(clv==8){
									cx[i] = rand() %40+15;
									cy[i] = 9;
								}
								else if(clv==9){
									cx[i] = rand() %50+10;
									cy[i] = 9;
								}
								else if(clv==10){
									cx[i] = rand() %60+5;
									cy[i] = 9;
								}
								cd = 5000;
								ca[i] = 1;
								break;
							}
						}
					}
					else{
						cd-= 1000;
					}
			///////////////////////////////
			//check way of hero by getch //
                    if (kbhit()){
                        ch=getch();
                        if(ch=='a') way=1; //2left
                        if(ch=='s') way=2; //left
                        if(ch=='d') way=3; //right
                        if(ch=='f') way=4; //2right
                        if(ch=='m'){ //menu
                            system("cls");
                            main();
                        }
                        if(way==1&&x>2){
                            erase_hero(x,y);
                            draw_hero(x-=2,y);
                        }
                        else if(way==2&&x>2){
                            erase_hero(x,y);
                            draw_hero(--x,y);
                        }
                        else if(way==3&&x<68){
                            erase_hero(x,y);
                            draw_hero(++x,y);
                        }
                        else if(way==4&&x<68){
                            erase_hero(x,y);
                            draw_hero(x+=2,y);
                        }
                        fflush(stdin);
                    }

                ///////////////////////////////////////
                ///////// Intitial Creep //////////////
                    for(int i = 0;i < 1;i++){
                        if(ca[i] == 1&&life!=0){
                            if(cy[i] > 39){
                                ca[i] = 0;
                                creep--;
                                if(creep==0){
                                    level++;
                                    clv+=1;
                                    creep+=10;
                                    gotoxy(90,11);
                                    printf("Level : %d",level);
                                }
                                gotoxy(90,12);
                                printf("Coin  : %d ",creep);
                                erase_creep(cx[i],cy[i-1]);
                            }
                            else{
                                if(clv == 1){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(50);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==2){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(49);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==3){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(48);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==4){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(47);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==5){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(46);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==6){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(45);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==7){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(44);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==8){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(43);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==9){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(42);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                                else if(clv==10){
                                    draw_creep(cx[i],cy[i]);
                                    Sleep(40);
                                    erase_creep(cx[i],cy[i]);
                                    cy[i]++;
                                }
                        ///////////////////////////////////////
                        ///////// check cursor ////////////////
                                if(cursor(cx[i],cy[i])=='_'){
                                        ca[i]=0;
                                        creep--;
                                        if(creep==0){
                                            level++;
                                            clv+=1;
                                            creep+=10;
                                            gotoxy(90,11);
                                            printf("Level : %d ",level);
                                        }
                                        gotoxy(90,12);
                                        printf("Coin  : %d ",creep);
                                        Beep(700,100);
                                        point+=2;
                                        gotoxy(90,13);
                                        printf("Point : %d ",point);
                                }
                                else if(cursor(cx[i],cy[i])=='v'){
                                    ca[i]=0;
                                    Beep(600,100);
                                    creep--;
                                    if(creep==0){
                                        level++;
                                        clv+=1;
                                        creep+=10;
                                        gotoxy(90,11);
                                        printf("Level : %d",level);
                                    }
                                    gotoxy(90,12);
                                    printf("Coin  : %d ",creep);
                                    point++;
                                    gotoxy(90,13);
                                    printf("Point : %d ",point);
                                }
                                else if(cursor(cx[i],cy[i])=='*') {
                                    life--;
                                    gotoxy(90,14);
                                    printf("Life  : %d ",life);
                                    if(life==0){
                                        system("cls");
                                        end();
                                        erase_creep(cx[i],cy[i]);
                                        gotoxy(45,11);
                                        printf(" Your point is : %d",point);
                                        gotoxy(45,12);
                                        printf(" Your Level is : %d",level);
										ch=getch();
                                        if(ch=='m'){ //menu
                                            system("cls");
                                            main();
                                        }
                                    }
                    }
                    }
                    }
					}
                    ////////////////////////////////////////////////////////////
                    ////////////////////////////////////////////////////////////
				}while(ch!=27); //Esc when need to exit the game
					if(kbhit()){
						select=getch();
						if(select=='y'){
							return 0;
						}
						else if(select=='n'){
							system("cls");
							main();
						}
					}
			////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////
			}
			else if(select=='h'){ //howtoplay
					system("cls");
					howto();
					while(select='h')
						if(kbhit()){
							select=getch();
							if(select==27){
								system("cls");
								exit();
								while(select=27)
									if(kbhit()){
										select=getch();
										if(select=='y'){
											return 0;
										}
										else if(select=='n'){
											system("cls");
											main();
										}
									}
							}
							else if(select!='h'){
								system("cls");
								main();
							}
						}
				}
            else if(select=='i'){ //introduce
                system("cls");
                intro();
                while(select='i')
                    if(kbhit()){
                        select=getch();
                        if(select==27){
                            system("cls");
                            exit();
                            while(select=27)
                                if(kbhit()){
                                    select=getch();
                                    if(select=='y'){
                                        return 0;
                                    }
                                    else if(select=='n'){
                                        system("cls");
                                        main();
                                    }
                                }
                        }
                        else if(select!='i'){
                            system("cls");
                            main();
                        }
                    }
            }
            else if(select==27){ //exit
                system("cls");
                exit();
                while(select=27)
                    if(kbhit()){
                        select=getch();
                        if(select=='y'){
                            return 0;
                        }
                        else if(select=='n'){
                            system("cls");
                            main();
                        }
                    }
            }
			}
	}while(select!=27);
	return 0;
}
