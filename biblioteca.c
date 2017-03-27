// Aluna: Helena Regina Salomé D'Espindula - hrsde16
// GRR: 20161445

// Aluna: Louise Knauber - lk16
// GRR: 20161471

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define TAM 2000


void inicializa_arvore ()
{
	raiz = (t_no *) malloc (sizeof (t_no));
	if (raiz == 0) abort (); // caso a alocação não tenha ocorrido
}

void libera_malloc ()
{
	free(raiz);
	printf(" liberando allocacao dinamica... \n");
}

int leitura()
{
	int x, existe;
	t_no * ponteiro = raiz;

	printf("Insira novo numero na arvore (negativo para encerrar):\n");
	scanf ("%d", &x);
	if (x < 0)
	{
		printf("Não há numeros nessa arvore.\n");
		return (1);
	}

	printf("Eu li o numero: %d\n", x);

	ponteiro = (t_no *) malloc (sizeof (t_no));
	if (raiz == 0) abort (); // caso a alocação não tenha ocorrido


	while (x >= 0)
	{
		existe = busca_numero (x, ponteiro);

		// Busca na arvore, se já existir retorna 1, se não existir retorna 0 e inclui
		if (existe != 0)
		{
			printf("Esse numero já esta na arvore ponteiro = %p.\n", ponteiro); // colocar ponteiro
		}
		else
		{
			// Inclui na arvore
		}
		printf("Insira novo numero na arvore (negativo para encerrar):\n");
		scanf ("%d", &x);
		printf("Eu li o numero: %d\n", x);
	}
	printf("Saindo...");
	return (0);

}


int busca_numero ( int x, t_no * ponteiro )
{
	/*	
	ponteiro = raiz;
	while (ponteiro != 0)
	{
		if ( x == (*ponteiro).valor )
		{
			return 1;
		}
		if (x > (*ponteiro).valor )
		{
			// falta coisa
		}
		else
		{
			// falta coisa
		}
	}
	*/
	return 1;

}

