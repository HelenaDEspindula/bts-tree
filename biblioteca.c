// Aluna: Helena Regina Salomé D'Espindula - hrsde16
// GRR: 20161445

// Aluna: Louise Knauber - lk16
// GRR: 20161471

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define TAM 2000


void libera_malloc ()
{
	free(raiz);
	printf(" liberando allocacao dinamica... \n");
}

int leitura()
{
	int x, existe;
	t_no * ponteiro = NULL;
	t_no * pai_ponteiro = NULL;

	printf("Insira novo numero na arvore (negativo para encerrar):\n");
	scanf ("%d", &x);
	if (x < 0)
	{
		printf("Não há numeros nessa arvore.\n");
		return (1);
	}

	printf("Eu li o numero: %d\n", x);

	raiz = (t_no *) malloc (sizeof (t_no));
	if (raiz == 0) 
	{
		abort (); // caso a alocação não tenha ocorrido
	}
	else
	{
		printf("malloc ok. \n");
	}

	(*raiz).valor = x;
	(*raiz).altura = 0;
	(*raiz).pai = NULL;
	(*raiz).filho_dir_maior = NULL;
	(*raiz).filho_esq_menor = NULL;

	printf("Fiz a raiz.\n");

	while (x >= 0)
	{
		ponteiro = raiz;
		pai_ponteiro = NULL;
		existe = busca_numero (x, ponteiro, pai_ponteiro);
		printf("pont pai = %p\n", pai_ponteiro);
		printf("novo pont = %p\n", ponteiro);

		// Busca na arvore, se já existir retorna 1, se não existir retorna 0 e inclui
		if (existe != 0)
		{
			printf("Esse numero já esta na arvore ponteiro = %p.\n", ponteiro); // colocar ponteiro
		}

		else
		{
			printf("numero novo \n");
			// Inclusão na arvore //
			ponteiro = (t_no *) malloc (sizeof (t_no));
			if (ponteiro == 0) 
			{
				abort (); // caso a alocação não tenha ocorrido
			}
			else
			{
				printf("malloc ok. \n");
			}

			printf("pont pai = %p\n", pai_ponteiro);
			printf( "valor pai = %d e x = %d \n", (*pai_ponteiro).valor, x );

			if ( (*pai_ponteiro).valor < x )
			{
				(*pai_ponteiro).filho_dir_maior = ponteiro;
				printf("test1\n");
			}
			else
			{
				(*pai_ponteiro).filho_esq_menor = ponteiro;
				printf("test2\n");
			}
			printf("test3\n");

			(*ponteiro).valor = x;
			(*ponteiro).altura = 0;
			(*ponteiro).pai = pai_ponteiro; // arrumar ponteiro pai e altura dos antepassados
			(*ponteiro).filho_dir_maior = NULL;
			(*ponteiro).filho_esq_menor = NULL;

			// testar se precisa arrumar mais alguem
			
		}

		printf("Insira novo numero na arvore (negativo para encerrar):\n");
		scanf ("%d", &x);
		printf("Eu li o numero: %d\n", x);
	}
	printf("Saindo...");
	return (0);

}


int busca_numero ( int x, t_no * ponteiro, t_no * pai_ponteiro )
{	
	while (ponteiro != 0)
	{
		printf("busca: x = %d, pont = %p, (*pont).valor = %d \n", x, ponteiro, (*ponteiro).valor);
		if ( x == (*ponteiro).valor )
		{
			return 1;
		}
		else if ( x < (*ponteiro).valor )
		{
			printf("menor\n");
			pai_ponteiro = ponteiro;
			printf("pont pai = %p\n", pai_ponteiro);
			ponteiro = (*ponteiro).filho_esq_menor;
			printf("novo pont = %p\n", ponteiro);
			busca_numero (x, ponteiro, pai_ponteiro);
		}
		else
		{
			printf("maior\n");
			pai_ponteiro = ponteiro;
			printf("pont pai = %p\n", pai_ponteiro);
			ponteiro = (*ponteiro).filho_dir_maior;
			printf("novo pont = %p\n", ponteiro);
			busca_numero (x, ponteiro, pai_ponteiro);
		}
	}
	return 0;

}

