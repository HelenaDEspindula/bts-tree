// Aluna: Helena Regina Salomé D'Espindula - hrsde16
// GRR: 20161445

// Aluna: Louise Knauber - lk16
// GRR: 20161471

#ifndef __BIBLIOTECA__
#define __BIBLIOTECA__
#include <stdio.h>

/* --- Estrutura global --- */

typedef struct no
{
	int valor;
	int altura;
	struct no * pai;
	struct no * filho_dir_maior;
	struct no * filho_esq_menor;
} t_no ;
	
t_no * raiz;


/* --- Funções --- */

void inicializa_arvore ();

void libera_malloc ();

int leitura();

int acha_posicao ( int x );

#endif
