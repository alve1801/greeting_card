#include<ncurses.h>
#include<unistd.h>
void main(){
	initscr();
	noecho();
	curs_set(FALSE);
	int n=16;
	for(;;){
		clear();
		if(n%4==0){
			mvaddch(1,7,44);
			mvaddch(2,4,46);
			mvaddch(2,6,96);
		}else if(n%4==1){
			mvaddch(0,6,96);
			mvaddch(1,4,44);
			mvaddch(2,5,46);
			mvaddch(2,7,46);
		}else if(n%4==2){
			mvaddch(0,4,46);
			mvaddch(1,6,44);
			mvaddch(2,7,96);
		}else{
			mvaddch(0,6,96);
			mvaddch(1,5,46);
			mvaddch(2,6,44);
		}
		mvprintw(3,0,"    IiiiI    ");
		mvprintw(4,0,"  |```````|  ");
		mvprintw(5,0,"__|~~~~~~~|__");
		mvprintw(6,0,"             ");
		for(int i=0;i<13;i++){
			mvaddch(7,i,"HAPPY BIRTHDAY!   "[(i+n)%18]);
		}
		mvprintw(8,0,"_____________");
		n++;
		refresh();
		usleep(200*1000);
	}
}
