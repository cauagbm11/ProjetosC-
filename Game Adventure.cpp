#include <iostream>

using namespace std;

void fase1();
void fase2();
void fase3();
void menu();
int v = 3;

void fase1()
{	

	char matriz[25][25];
	int ey, ex, a = 0, k;
	char x, chave = '@', porta = 'D';
	int mx = 12, my = 12;
	
	while(a == 0){
	
		for(ex = 0; ex < 25; ex++)
		{
			matriz[ex][0] = '*';
		}
	
		for(ey = 1; ey < 25; ey++)
		{
			matriz[0][ey] = '*';
		}
		
		for(ex = 0; ex < 25; ex++)
		{
			matriz[ex][24] = '*';
		}
		
		for(ey = 1; ey < 25; ey++)
		{
			matriz[24][ey] = '*';
		} 
		
		for(ex = 1; ex < 24; ex++)
		{
			for(ey = 1; ey < 24; ey++)
			{
				matriz[ex][ey] = ' ';
			}	
		}
		
		for(ex = 1; ex < 8; ex++)
		{
			matriz[ex][7] = '*';
		}
					
		for(ey = 1; ey < 7; ey++)
		{
			matriz[7][ey] = '*';
		}
		
		for(ey = 1; ey < 24; ey++)
		{
			matriz[20][ey] = '*';
		}
		
		for(ex = 1; ex < 8; ex++)
		{
			matriz[ex][17] = '*';
		}
		
		for(ey = 17; ey < 24; ey++)
		{
			matriz[7][ey] = '*';
		}
		
			
		matriz[2][12] = porta;	
		matriz[13][5] = chave;
		matriz[mx][my] = '&';
		
		for(ex = 0; ex < 25; ex++)
		{
			for(ey = 0; ey < 25; ey++)
			{
				cout << matriz[ex][ey] << " ";
			}
			cout << "\n";
		}
		
		cin >> x;	
		
			switch(x)
			{
				case 'w':
				case 'W':
					
				if(matriz[mx - 1][my] == '*')
				{
					mx + mx;
				}	
				else if(matriz[mx - 1][my] == ' '|| matriz[mx - 1][my] == '@' || matriz[mx - 1][my] == '>')
				{
					mx = mx - 1;
				}
				else if(matriz[mx - 1][my] == '=')
				{
					fase2();
				}
			break;
			
			case 'S':
			case 's':
				
				if(matriz[mx + 1][my] == '*')
				{
					mx + mx;
				}	
				else if(matriz[mx + 1][my] == ' '|| matriz[mx + 1][my] == '@' || matriz[mx + 1][my] == '>')
				{
					mx = mx + 1;
				}
				else if(matriz[mx + 1][my] == '=')
				{
					fase2();
				}	
			break;
			
			case 'A':
			case 'a':
				
				if(matriz[mx][my - 1] == '*')
				{
					my + my;
				}	
				else if(matriz[mx][my - 1] == ' '|| matriz[mx][my - 1] == '@' || matriz[mx][my - 1] == '>')
				{
					my = my - 1;
				}
				else if(matriz[mx][my - 1] == '=')
				{
					fase2();
				}
			break;
			
			case 'D':
			case 'd':
				
				if(matriz[mx][my + 1] == '*')
				{
					my + my;
				}	
				else if(matriz[mx][my + 1] == ' ' || matriz[mx][my + 1] == '@' || matriz[mx][my + 1] == '>')
				{
					my = my + 1;
				}
				else if(matriz[mx][my + 1] == '=')
				{
					fase2();
				}
			break;	
			
		case 'i':
	    case 'I':
	    	if(matriz[mx][my] == matriz[13][5])
	    	{
	    		chave = ' ';
	    		porta = '=';
			}
			break;
			
		case 'k':
			fase3();
			break;
		}
		system("cls");	
	}
}
	
void fase2()
{
	char matriz[75][75];
	int ey, ex, p, a = 0;
	char x, chave = '@', porta = 'D', botao = 'O', esp = ' ';
	int mx = 40, my = 23;
	
	while(a == 0)
	{	
		for(ex = 0; ex < 50; ex++)
		{
			matriz[ex][0] = '*';
		}
	
		for(ey = 1; ey < 50; ey++)
		{
			matriz[0][ey] = '*';
		}
		
		for(ex = 0; ex < 50; ex++)
		{
			matriz[ex][49] = '*';
		}
		
		for(ey = 1; ey < 50; ey++)
		{
			matriz[49][ey] = '*';
		} 
		
		for(ex = 1; ex < 49; ex++)
		{
			for(ey = 1; ey < 49; ey++)
			{
				matriz[ex][ey] = ' ';
			}	
		}
		
		for(ex = 1; ex < 49; ex++)
		{
			matriz[ex][40] = '*';
		}
		
		for(ex = 1; ex < 25; ex++)
		{
			matriz[ex][20] = '*';
		}
					
		for(ey = 1; ey < 25; ey++)
		{
			matriz[20][ey] = '*';
		}
		
		for(ey = 1; ey < 20; ey++)
		{
			matriz[30][ey] = '*';
		}
		
		for(ey = 25; ey < 40; ey++)
		{
			matriz[20][ey] = '#';
		}
		
		for(ex = 26; ex < 49; ex++)
		{
			matriz[ex][20] = '#';
		}
			
		for(ey = 23; ey < 35; ey++)
		{
			matriz[28][ey] = '#';
		}	
		
		for(ey = 23; ey < 35; ey++)
		{
			matriz[26][ey] = '#';
		}		
			
		for(ey = 23; ey < 35; ey++)
		{
			matriz[24][ey] = '#';
		}	
		
		for(ey = 23; ey < 35; ey++)
		{
			matriz[22][ey] = '#';
		}	
		
		for(ey = 23; ey < 35; ey++)
		{
			matriz[30][ey] = '#';
		}	
		
		for(ey = 23; ey < 35; ey++)
		{
			matriz[32][ey] = '#';
		}	
		
		for(ey = 23; ey < 35; ey++)
		{
			matriz[34][ey] = '#';
		}	
		
		for(ey = 23; ey < 35; ey++)
		{
			matriz[36][ey] = '#';
		}	
		
		for(ex = 37; ex < 49; ex++)
		{
			matriz[ex][34] = '#';	
		}
		
		matriz[25][40] = porta;	
		matriz[25][6] = chave;
		matriz[40][26] = botao;
		matriz[mx][my] = '&';
		matriz[36][21] = esp;
		
		for(ex = 0; ex < 50; ex++)
		{
			for(ey = 0; ey < 50; ey++)
			{
				cout << matriz[ex][ey] << " ";
			}
			cout << "\n";
		}
		
		cin >> x;	
		
			switch(x)
			{
				case 'w':
				case 'W':
					
				if(matriz[mx - 1][my] == '*')
				{
					mx + mx;
				}	
				else if(matriz[mx - 1][my] == ' '|| matriz[mx - 1][my] == '@' || matriz[mx - 1][my] == 'O')
				{
					mx = mx - 1;
				}
				else if(matriz[mx - 1][my] == '=')
				{
					fase3();
				}
					else if(matriz[mx - 1][my] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase2();
					}
					else
					{		
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}			
				
			break;
			
			case 'S':
			case 's':
				
				if(matriz[mx + 1][my] == '*')
				{
					mx + mx;
				}	
				else if(matriz[mx + 1][my] == ' '|| matriz[mx + 1][my] == '@' || matriz[mx + 1][my] == 'O')
				{
					mx = mx + 1;
				}
				else if(matriz[mx + 1][my] == '=')
				{
					fase3();
				}	
				else if(matriz[mx + 1][my] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase2();
					}
					else
					{
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}
			break;
			
			case 'A':
			case 'a':
				
				if(matriz[mx][my - 1] == '*')
				{
					my + my;
				}	
				else if(matriz[mx][my - 1] == ' '|| matriz[mx][my - 1] == '@' || matriz[mx][my - 1] == 'O')
				{
					my = my - 1;
				}
				else if(matriz[mx][my - 1] == '=')
				{
					fase3();
				}
				else if(matriz[mx][my - 1] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase2();
					}
					else
					{	
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}
			break;
			
			case 'D':
			case 'd':
				
				if(matriz[mx][my + 1] == '*')
				{
					my + my;
				}	
				else if(matriz[mx][my + 1] == ' ' || matriz[mx][my + 1] == '@' || matriz[mx][my + 1] == 'O')
				{
					my = my + 1;
				}
				else if(matriz[mx][my + 1] == '=')
				{
					fase3();
				}
				else if(matriz[mx][my + 1] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase2();
					}
					else
					{
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}
			break;	
			
		case 'i':
	    case 'I':
	    	if(matriz[mx][my] == matriz[25][6])
	    	{
	    		chave = ' ';
	    		porta = '=';
			}
			else if(matriz[mx][my] == matriz[40][26])
			{
				botao = ' ';
				esp = '#';
			}
			break;
		}
		system("cls");	
		
	}
	
}	

void fase3()
{
	char matriz[75][75];
	int ey, ex, p, a = 0;
	char x, chave = '@', porta = 'D', botao = 'O', esp = ' ', tp = ' ', esp2 = ' ';
	int mx = 60, my = 46;
	
	while(a == 0)
	{
		for(ex = 0; ex < 75; ex++)
		{
			matriz[ex][0] = '*';
		}
	
		for(ey = 1; ey < 75; ey++)
		{
			matriz[0][ey] = '*';
		}
		
		for(ex = 0; ex < 75; ex++)
		{
			matriz[ex][74] = '*';
		}
		
		for(ey = 1; ey < 75; ey++)
		{
			matriz[74][ey] = '*';
		} 
		
		for(ex = 1; ex < 74; ex++)
		{
			for(ey = 1; ey < 74; ey++)
			{
				matriz[ex][ey] = ' ';
			}	
		}
		
		for(ex = 1; ex < 74; ex++)
		{
			matriz[ex][20] = '*';
		}
		
		for(ex = 1; ex < 74; ex++)
		{
			matriz[ex][40] = '*';
		}
		
		for(ex = 1; ex < 74; ex++)
		{
			matriz[ex][60] = '*';
		}
		
		for(ex = 1; ex < 70; ex++)
		{
			matriz[ex][24] = '#';
		}
		
		for(ex = 1; ex < 70; ex++)
		{
			matriz[ex][28] = '#';
		}
		
		for(ex = 1; ex < 70; ex++)
		{
			matriz[ex][32] = '#';
		}
		
		for(ex = 1; ex < 70; ex++)
		{
			matriz[ex][36] = '#';
		}
		
		for(ex = 1; ex < 60; ex++)
		{
			matriz[ex][44] = '#';
		}
		
		for(ex = 1; ex < 60; ex++)
		{
			matriz[ex][48] = '#';
		}
		
		for(ex = 1; ex < 60; ex++)
		{
			matriz[ex][52] = '#';
		}
		
		for(ex = 1; ex < 60; ex++)
		{
			matriz[ex][56] = '#';
		}
		
		for(ex = 1; ex < 35; ex++)
		{
			matriz[ex][63] = '#';
		}
		
		for(ex = 1; ex < 35; ex++)
		{
			matriz[ex][66] = '#';
		}
		
		for(ex = 1; ex < 35; ex++)
		{
			matriz[ex][69] = '#';
		}
		
		for(ex = 37; ex < 70; ex++)
		{
			matriz[ex][63] = '#';
		}
		
		for(ex = 37; ex < 70; ex++)
		{
			matriz[ex][66] = '#';
		}
		
		for(ex = 37; ex < 70; ex++)
		{
			matriz[ex][69] = '#';
		}
		
		for(ey = 1; ey < 19; ey++)
		{
			matriz[26][ey] = '#';
		}	
		
		for(ey = 1; ey < 19; ey++)
		{
			matriz[32][ey] = '#';
		}	
		
		for(ey = 1; ey < 19; ey++)
		{
			matriz[35][ey] = '#';
		}	
		
		for(ey = 1; ey < 19; ey++)
		{
			matriz[38][ey] = '#';
		}	
		
		for(ey = 1; ey < 19; ey++)
		{
			matriz[41][ey] = '#';
		}	
		
		matriz[14][10] = porta;	
		matriz[40][18] = chave;
		matriz[55][51] = botao;
		matriz[60][51] = tp;
		matriz[20][71] = '>';
		matriz[36][64] = '>';
		matriz[60][23] = '>';
		matriz[44][30] = '>';
		matriz[50][15] = '>';
		matriz[56][51] = esp;
		matriz[56][49] = esp2;
		matriz[48][24] = '=';
		matriz[46][28] = '=';
		matriz[mx][my] = '&';
		
		for(ex = 0; ex < 75; ex++)
		{
			for(ey = 0; ey < 75; ey++)
			{
				cout << matriz[ex][ey] << " ";
			}
			cout << "\n";
		}
		
		cin >> x;	
		
			switch(x)
			{
				case 'w':
				case 'W':
					
				if(matriz[mx - 1][my] == '*')
				{
					mx + mx;
				}	
				else if(matriz[mx - 1][my] == ' '|| matriz[mx - 1][my] == '@' || matriz[mx - 1][my] == 'O' || matriz[mx - 1][my] == '>' || matriz[mx][my + 1] == '=')
				{
					mx = mx - 1;
				}
				else if(matriz[mx - 1][my] == '|')
				{
					system("cls");
					cout << "PARABENS VOCE VENCEU O JOGO!!\n";
					system ("pause");
					system("cls");
					return menu();
				}
					else if(matriz[mx - 1][my] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase3();
					}
					else
					{		
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}			
				
			break;
			
			case 'S':
			case 's':
				
				if(matriz[mx + 1][my] == '*')
				{
					mx + mx;
				}	
				else if(matriz[mx + 1][my] == ' '|| matriz[mx + 1][my] == '@' || matriz[mx + 1][my] == 'O' || matriz[mx + 1][my] == '>' || matriz[mx][my + 1] == '=')
				{
					mx = mx + 1;
				}
				else if(matriz[mx + 1][my] == '|')
				{
					system("cls");
					cout << "PARABENS VOCE VENCEU O JOGO!!\n";
					system ("pause");
					system("cls");
					return menu();
				}	
				else if(matriz[mx + 1][my] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase3();
					}
					else
					{
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}
			break;
			
			case 'A':
			case 'a':
				
				if(matriz[mx][my - 1] == '*')
				{
					my + my;
				}	
				else if(matriz[mx][my - 1] == ' '|| matriz[mx][my - 1] == '@' || matriz[mx][my - 1] == 'O' || matriz[mx][my - 1] == '>' || matriz[mx][my + 1] == '=')
				{
					my = my - 1;
				}
				else if(matriz[mx][my - 1] == '|')
				{
					system("cls");
					cout << "PARABENS VOCE VENCEU O JOGO!!\n";
					system ("pause");
					system("cls");
					return menu();
				}
				else if(matriz[mx][my - 1] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase3();
					}
					else
					{	
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}
			break;
			
			case 'D':
			case 'd':
				
				if(matriz[mx][my + 1] == '*')
				{
					my + my;
				}	
				else if(matriz[mx][my + 1] == ' ' || matriz[mx][my + 1] == '@' || matriz[mx][my + 1] == 'O' || matriz[mx][my + 1] == '>' || matriz[mx][my + 1] == '=')
				{
					my = my + 1;
				}
				else if(matriz[mx][my + 1] == '|')
				{
					system("cls");
					cout << "############# PARABENS VOCE VENCEU O JOGO!! ##############\n";
					system ("pause");
					system("cls");
					return menu();
				}
				else if(matriz[mx][my + 1] == '#')
				{
					v = v - 1;
					
					if(v > 0)
					{
						return fase3();
					}
					else
					{
						system("cls");
						cout << "VOCE PERDEU, FIM DE JOGO.\n";
						system("pause");
						system("cls");							
						return menu();
					}
				}
			break;	
			
		case 'i':
	    case 'I':
	    	if(matriz[mx][my] == matriz[40][18])
	    	{
	    		chave = ' ';
	    		porta = '|';
			}
			else if(matriz[mx][my] == matriz[55][51])
			{
				botao = ' ';
				esp = '#';
				esp2 = '#';
				tp = '>';
			}
			else if(matriz[mx][my] == matriz[60][51])
			{
				mx = 20, my = 71;
			}
			else if(matriz[mx][my] == matriz[36][64])
			{
				mx = 60, my = 23;
			}
			else if(matriz[mx][my] == matriz[44][30])
			{
				mx = 50, my = 15;
			}
			break;
		}
		system("cls");	
	}
}

void menu()
{
	int m;
	
	cout << "########## 0MENU ##########\n";
	cout << "1-JOGAR\n";
	cout << "2-TUTORIAL\n";
	cout << "3-SAIR\n";
	cout << "##########################\n"; 
	cin >> m;
	
	switch(m)
	{
		case 1:	
		system("cls");
		fase1();
		break;
		
		case 2:
		cout << (" W:  movimenta  para cima.\n A: movimenta para esquerda.\n S: movimenta para baixo.\n D:  movimenta para direita.\n I: interage com o objeto que estiver encima.\n O jogo possui 3 fases e o objetivo eh encontrar a chave e abrir a porta, para passar de nivel ate finalizar.\n\n ELEMENTOS DO JOGO:\n &: Representa o jogador.\n *:  Representa uma parede.\n @: Representa a chave para abrir a porta para finalizar.\n D: Representa a porta fechada.\n =: Representa a porta aberta quando interagiu com a chave.\n O: Representa um botao.\n #:  Representa um espinho, se tocar no espinho volta a fase e se perder as 3 vidas perde o jogo.\n >: Teletransporte.");
		system("pause");
		system("cls");
		menu();
		break;
		
		case 3:
		exit;
		break;
	}
}

int main()
{
	menu();
}
