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
}

int leitura()
{
	int x, existe;
	scanf ("%d", &x);
	if (x < 0)
	{
		printf("Não há numeros nessa arvore.\n");
		return (1);
	}
	while (x >= 0)
	{
		printf("Eu li o numero: %d\n", x);
		// Busca na arvore, se já existir retorna 1, se não existir retorna 0 e inclui
		if (existe != 0)
		{
			printf("Esse numero já esta na arvore ponteiro = XXX\n"); // colocar ponteiro
		}
		else
		{
			// Inclui na arvore
		}
		scanf ("%d", &x);
	}
	return (0);

}


int acha_posicao ( int x )
{
	t_no * ponteiro = raiz;
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

	return 0;

}

