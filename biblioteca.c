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
	raiz = (no *) malloc (sizeof (no));
	if (raiz == 0) abort (); // caso a alocação não tenha ocorrido
}

void libera_malloc ()
{

}

int acha_posicao ( int x )
{
	no * ponteiro = raiz;
	while (ponteiro != 0)
	{
		if ( x == (*ponteiro).valor )
		{
			return 1;
		}
		if (x > (*ponteiro).valor )
		{

		}
		else (
	}

}

