﻿#include "Menu.h"
int main()
{
	int* taille_tab_etoile = NULL;
	Region* tab_region = NULL;
	lectureFichiers(&tab_region, &taille_tab_etoile);
	menu(&tab_region, &taille_tab_etoile);
	system("pause");
	system("cls");
	lapin();
	return 0;
}