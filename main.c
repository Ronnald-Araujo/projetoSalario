#include <stdio.h>
#include <stdlib.h>

int main () {
	
	//Declaração das variaveis
	float salarioliquido, reajustesalario, salarioreajustado, porcentagem, abono;  
	char opcao;

        //Cabeçalho
    do{

        printf ("===================================");
        printf ("\n*************LAN HOUSE*************");
        printf ("\n===================================");
        printf ("\n    Ivan Ronnald Araujo Rodrigues   ");
        printf ("\n           RA: 21060411-5           ");
        printf ("\n\n");

        //Mensagem ao usuário e leitura de dados
        printf ("Digite o salario liquido do colaborador: ");
        scanf ("%f", &salarioliquido);
        printf ("\n");
        
        //Calculo do reajuste
        abono = 150;
        porcentagem = 7.5/100;
        reajustesalario = salarioliquido * porcentagem;
        salarioreajustado = salarioliquido + reajustesalario;

        //Saida de dados ao usuário
        if (salarioreajustado <= 1750){
            printf ("Salario atual: %.2f ", salarioliquido);
            printf ("\nReajuste: %.2f ", reajustesalario);
            printf ("\nAbono: %.2f ", abono);
            printf ("\nSalario reajustado: %.2f ", salarioreajustado + abono);
            printf ("\n\nGostaria de realizar o calculo de reajuste salarial novamente? \n");
            scanf ("%c", &opcao);
        } else {
            printf ("Salario atual: %.2f ", salarioliquido);
            printf ("\nReajuste: %.2f ", reajustesalario);
            printf ("\nSalario reajustado: %.2f ", salarioreajustado);
            printf ("\n\nGostaria de realizar o calculo de reajuste salarial novamente? \n");
            scanf ("%c", &opcao);
        }
    }
    while (opcao == "sim");
	return(0);
}

