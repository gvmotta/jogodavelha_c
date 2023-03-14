#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); // Initialization, should only be called once.
    int esc, r;
    char casa1, casa2, casa3, casa4, casa5, casa6, casa7, casa8, casa9;
    casa1 = '1';
    casa2 = '2';
    casa3 = '3';
    casa4 = '4';
    casa5 = '5';
    casa6 = '6';
    casa7 = '7';
    casa8 = '8';
    casa9 = '9';

    printf("Jogo da velha\n");
    printf("               |            |            |\n");
    printf("       1       |      2     |      3     |\n");
    printf("               |            |            |\n");
    printf("------------------------------------------\n");
    printf("               |            |            |\n");
    printf("       4       |      5     |      6     |\n");
    printf("               |            |            |\n");
    printf("------------------------------------------\n");
    printf("               |            |            |\n");
    printf("       7       |      8     |      9     |\n");
    printf("               |            |            |\n\n");
    while (esc != -1)
    {
    	//Fazer pergunta de qual casa o jogador escolhe jogar!
        esc = 0;
        printf("Qual casa você escolhe? ");
        scanf("%d", &esc);
        begin: ;
        
        //Preencher a casa que o jogador escolheu através de uma variável
        if (esc == 1 && casa1 != 'x' && casa1 != 'o')
        {
            casa1 = 'x';
        }
        else if (esc == 2 && casa2 != 'x' && casa2 != 'o')
        {
            casa2 = 'x';
        }
        else if (esc == 3 && casa3 != 'x' && casa3 != 'o')
        {
            casa3 = 'x';
        }
        else if (esc == 4 && casa4 != 'x' && casa4 != 'o')
        {
            casa4 = 'x';
        }
        else if (esc == 5 && casa5 != 'x' && casa5 != 'o')
        {
            casa5 = 'x';
        }
        else if (esc == 6 && casa6 != 'x' && casa6 != 'o')
        {
            casa6 = 'x';
        }
        else if (esc == 7 && casa7 != 'x' && casa7 != 'o')
        {
            casa7 = 'x';
        }
        else if (esc == 8 && casa8 != 'x' && casa8 != 'o')
        {
            casa8 = 'x';
        }
        else if (esc == 9 && casa9 != 'x' && casa9 != 'o')
        {
            casa9 = 'x';
        }else{
        	printf("Esta casa já está escolhida!\n");
        	printf("Escolha uma nova casa: ");
        	scanf("%d", &esc);
        	goto begin;
		}
		
		//Verificar se o usuário ganhou
		if(casa1 == 'x' && casa2 == 'x' && casa3 == 'x'){
			system("CLS");
        	printf("Você ganhou!");
        	esc = -1;
        	goto end;
		}else if(casa1 == 'x' && casa5 == 'x' && casa9 == 'x'){
			system("CLS");
			printf("Você ganhou!");
			esc = -1;
			goto end;
		}else if(casa7 == 'x' && casa5 == 'x' && casa3 == 'x'){
			system("CLS");
			printf("Você ganhou!");
			esc = -1;
			goto end;
		}else if(casa7 == 'x' && casa8 == 'x' && casa9 == 'x'){
			system("CLS");
			printf("Você ganhou!");
			esc = -1;
			goto end;
		}else if(casa1 == 'x' && casa4 == 'x' && casa7 == 'x'){
			system("CLS");
			printf("Você ganhou!");
			esc = -1;
			goto end;
		}else if(casa3 == 'x' && casa6 == 'x' && casa9 == 'x'){
			system("CLS");
			printf("Você ganhou!");
			esc = -1;
			goto end;
		}else if(casa4 == 'x' && casa5 == 'x' && casa6 == 'x'){
			system("CLS");
			printf("Você ganhou!");
			esc = -1;
			goto end;
		}
        
        //Gerar número aleatório entre 0 e 9
    	label: ;
        int r = rand() % 10;
        
        //Número 0 não pode, pois as casas vão de 1 a 9, então fiz uma estrutu. de repetição para enquanto o Nº for 0, o bot escolha outro número
        while(r ==0){
            r = rand() % 10;
        }
        
        //Preencher a casa escolhida pelo bot
        if (r == 1 && casa1 != 'x' && casa1 != 'o')
        {
            casa1 = 'o';
        }
        else if (r == 2 && casa2 != 'x' && casa2 != 'o')
        {
            casa2 = 'o';
        }
        else if (r == 3 && casa3 != 'x' && casa3 != 'o')
        {
            casa3 = 'o';
        }
        else if (r == 4 && casa4 != 'x' && casa4 != 'o')
        {
            casa4 = 'o';
        }
        else if (r == 5 && casa5 != 'x' && casa5 != 'o')
        {
            casa5 = 'o';
        }
        else if (r == 6 && casa6 != 'x' && casa6 != 'o')
        {
            casa6 = 'o';
        }
        else if (r == 7 && casa7 != 'x' && casa7 != 'o')
        {
            casa7 = 'o';
        }
        else if (r == 8 && casa8 != 'x' && casa8 != 'o')
        {
            casa8 = 'o';
        }
        else if (r == 9 && casa9 != 'x' && casa9 != 'o')
        {
            casa9 = 'o';
        }else{
        	printf("bot chutou o mesmo número! \n");
        	goto label;
		}
		
		//Verificar se o Bot ganhou
		if(casa1 == 'o' && casa2 == 'o' && casa3 == 'o'){
			system("CLS");
        	printf("GAME OVER\n O bot ganhou!");
        	esc = -1;
			goto end;
		}else if(casa1 == 'o' && casa5 == 'o' && casa9 == 'o'){
			system("CLS");
			printf("GAME OVER\n O bot ganhou!");
			esc = -1;
			goto end;
		}else if(casa7 == 'o' && casa5 == 'o' && casa3 == 'o'){
			system("CLS");
			printf("GAME OVER\n O bot ganhou!");
			esc = -1;
			goto end;
		}else if(casa7 == 'o' && casa8 == 'o' && casa9 == 'o'){
			system("CLS");
			printf("GAME OVER\n O bot ganhou!");
			esc = -1;
			goto end;
		}else if(casa1 == 'o' && casa4 == 'o' && casa7 == 'o'){
			system("CLS");
			printf("GAME OVER\n O bot ganhou!");
			esc = -1;
			goto end;
		}else if(casa3 == 'o' && casa6 == 'o' && casa9 == 'o'){
			system("CLS");
			printf("GAME OVER\n O bot ganhou!");
			esc = -1;
			goto end;
		}else if(casa4 == 'o' && casa5 == 'o' && casa6 == 'o'){
			system("CLS");
			printf("GAME OVER\n O bot ganhou!");
			esc = -1;
			goto end;
		}
		
		if(esc != -1){
			system("CLS");	
		}
		printf("%s %d %s", "A casa escolhido pelo bot foi:", r, "\n");
		end:;
		
        //Print das casas escolhidas pelos players
        printf("\n               |            |            |\n");
        printf("%s %c %s %c %s %c %s", "       ", casa1, "     |     ", casa2, "    |     ", casa3, "    |\n");
        printf("               |            |            |\n");
        printf("------------------------------------------\n");
        printf("               |            |            |\n");
        printf("%s %c %s %c %s %c %s", "       ", casa4, "     |     ", casa5, "    |     ", casa6, "    |\n");
        printf("               |            |            |\n");
        printf("------------------------------------------\n");
        printf("               |            |            |\n");
        printf("%s %c %s %c %s %c %s", "       ", casa7, "     |     ", casa8, "    |     ", casa9, "    |\n");
        printf("               |            |            |\n\n");
        
        
       
        
    }
    return 0;
}

