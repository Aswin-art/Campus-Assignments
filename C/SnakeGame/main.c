#include <stdio.h>
#include <conio.h>

char map[20][40];
char player = '^', food = 'O';
char tail[10] = {'*','*','*','*','*','*','*','*','*','*'};
int y = 12;
int x = 3;
int a[10];
int b[10];
char walk;
char playerName[100];
int score = 0;
int n = 0, gameover = 0, p = 10, q = 10, rand = 2, R = 1, i, j;

void generateMap(int p, int q, int R);
void outputMap(int score);
void moveUp();
void moveDown();
void moveLeft();
void moveRight();

int main(){
	int i,j;
	printf("===========================Selamat Datang Di Permainan===========================\n");
	printf("1. Gunakan 'WASD' untuk menggerakkan ular\n");
	printf("2. Makan buah '0' untuk menambah score & menambah panjang tubuh ular\n");
	printf("3. Hindari tembok & jangan makan tubuh ular atau permainan akan berakhir\n");
	printf("4. Dapatkan score sebanyak mungkin & enjoy the game!!\n");
	printf("=================================================================================\n");
	printf("Masukkan nama anda: ");
	gets(playerName);
	system("color a");
	do{
		system("cls");
		generateMap(p,q,R);
		outputMap(score);
		walk = getch();
		for(i=9; i>0; i--){
			a[i] = a[i-1];b[i] = b[i-1];
		}
		a[0] = y;b[0] = x;
		switch(walk){
			case 'w':
				moveUp();
				break;
			case 's':
				moveDown();
				break;
			case 'a':
				moveLeft();
				break;
			case 'd':
				moveRight();
				break;
		}

		}while(gameover <= 0);
	system("cls");
	printf("\t\t+==============================+\n");
	printf("\t\t|      GAME BERAKHIR !!!      |\n");
	printf("\t\t+==============================+\n");
	printf("Score kamu: %d", score);
	getch();
	return 0;
}

void generateMap(int p, int q, int R){
	int i,j;
	for(i=0; i<20; i++){
		for(j=0; j<40; j++){
			map[i][j] = ' ';
		}
	}
	map[0][0] = '+';
	map[19][0] = '+';
	map[19][39] = '+';
	map[0][39] = '+';
	for(i=1; i<19; i++){
		map[i][0] = '|';
		map[i][39]= '|';
	}
	for(j=1; j<39; j++){
		map[0][j] = '=';
		map[19][j] = '=';
	}
	map[y][x] = player;
	for(i=0; i<R; i++){
		map[a[i]][b[i]] = tail[i];
	}
	map[p][q] = food;
}

void outputMap(int score){
	int i,j;
	for(i=0; i<20; i++){
		for(j=0; j<40; j++){
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
	printf("Nama: %s\n", playerName);
	printf("Score: 00%d",score);
}
void moveUp(){
	if(map[y - 1][x] == ' '){
				y--;
				map[y][x] = player;
				}
				else if(map[y - 1][x] == food){
					p *= (rand + y * 3);q *= (rand + x * 9);
					if(p >= 19) p %= 13;p++;
					if(q >= 39) q %= 16;q++;
					score++;
					R++;
				}
				player = '^';
				for(i=0; i<R; i++){
					for(j=0; j<R; j++){
						map[a[i]][b[j]] = tail[n];
						n++;
					}
				}
}
void moveDown(){
	if(map[y+1][x] == ' '){
				y++;
				map[y][x] = player;
	}
				else if(map[y + 1][x] == food){
					p *= (rand + y * 6);q *= (rand + x * 8);
					if(p >= 19) p %= 18;p++;
					if(q >= 39) q %= 15;q++;
					score++;
					R++;
				}
				player = 'v';
				for(i=0; i<R; i++){
					for(j=0; j<R; j++){
						map[a[i]][b[j]] = tail[n];
						n++;
					}
				}
}
void moveLeft(){
	if (map[y][x-1] == ' '){
				x--;
				map[y][x] = player;
				}
				else if(map[y][x-1] == food){
					p *= (rand + y * 5);q *= (rand + x * 7);
					if(p >= 19) p %= 18;p++;
					if(q >= 39) q %= 17;q++;
					score++;
					R++;
				}
				player = '<';
				for(i=0; i<R; i++){
					for(j=0; j<R; j++){
						map[a[i]][b[j]] = tail[n];
						n++;
					}
				}
}
void moveRight(){
	if(map[y][x+1] == ' '){
				x++;
				map[y][x] = player;
				}
				else if(map[y][x+1] == food){
					p *= (rand + y * 2);q *= (rand + x * 3);
					if(p >= 19) p %= 18;p++;
					if(q >= 39) q %= 18;q++;
					score++;
					R++;
				}
				player = '>';
				for(i=0; i<R; i++){
						for(j=0; j<R; j++){
							map[a[i]][b[j]] = tail[n];
							n++;
					}
				}
}
