// Aluna: Helena Regina Salomé D'Espindula - hrsde16
// GRR: 20161445

// Aluna: Louise Knauber - lk16
// GRR: 20161471

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"


int main()
{
	int ok;

	ok = leitura();	
	
	libera_malloc ();

	return(ok);
}
