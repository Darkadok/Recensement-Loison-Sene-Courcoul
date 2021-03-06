#include "Menu.h"

int menu(Region** tab_region, int** taille_tab_etoile)
{
	

	wchar_t saisie_utilisateur[50];
	int connexion = 0;
	
	do
	{
		system("cls");
		printf("=== MENU PRINCIPAL ===\n");
		printf("\n Choisir une option :\n");
		printf("\n1 - Consulter des donnees \n");
		printf("2 - Espace administration\n");
		printf("0 - Quitter\n");

		printf("\n Saisir votre choix : ");
		wscanf(L"%ls", saisie_utilisateur);



		switch (verificationSaisie(saisie_utilisateur, 3))
		{
		case 1:
			system("cls");
			menuConsulter(tab_region, taille_tab_etoile);
			saisie_utilisateur[1] = -1;
			break;
		case 2:
			system("cls");
			menuAdministration(connexion, tab_region, taille_tab_etoile);
			saisie_utilisateur[1] = -1;
			break;

		case 0:
			ecritureFichierDepartements(*tab_region, *taille_tab_etoile);
			ecritureFichierRecensements(*tab_region, *taille_tab_etoile);
			break;
		default:
			break;
		}
	} while (verificationSaisie(saisie_utilisateur, 3) != 0);

	return 0;
}


void color(int couleurDuTexte, int couleurDeFond) // fonction d'affichage de couleurs
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}
void lapin()
{

	color(2, 0);

	// chapeau
	printf("\n\n\n\n\n\t\t\t\x20\x20\x20________\x20\n");
	printf("\t\t\t\x20\x20\x28________\x29\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20[____]\n");

	color(0, 0);
	Sleep(200);
	system("cls");
	// 2lignes
	color(15, 0);
	printf("\n\n\n\n\t\t\t\x20\x20\x20@\x20\x20\x20\x20\x20\x20\x20@\n");
	printf("\t\t\t\x20\x20\x20\x5C\x20\x5C");
	color(2, 0);
	printf("__");
	color(15, 0);
	printf("\x2f\x20\x2f\n");
	color(2, 0);
	printf("\t\t\t\x20\x20\x28________\x29\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20[____]\n");

	color(0, 0);
	Sleep(200);
	system("cls");
	// 4lignes
	color(15, 0);
	printf("\n\n\t\t\t\x20\x20\x20@\x20\x20\x20\x20\x20\x20\x20@\n");
	printf("\t\t\t\x20\x20\x20\x5C\x20\x5C\x20\x20\x20\x2f\x20\x2f\n");
	printf("\t\t\t\x20\x20\x20\x20\x5C\x20\x5C\x2f\x20\x2f\n");
	color(2, 0);
	printf("\t\t\t\x20\x20\x20__");
	color(15, 0);
	printf("\x2f\x4F\x4F\x5C");
	color(2, 0);
	printf("__\n");
	printf("\t\t\t\x20\x20\x28________\x29\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20[____]\n");

	color(0, 0);
	Sleep(200);
	system("cls");

	// lapin entier
	color(15, 0);
	printf("\t\t\t\x20\x20\x20@\x20\x20\x20\x20\x20\x20\x20@\n");
	printf("\t\t\t\x20\x20\x20\x5C\x20\x5C\x20\x20\x20\x2f\x20\x2f\n");
	printf("\t\t\t\x20\x20\x20\x20\x5C\x20\x5C\x2f\x20\x2f\n");
	printf("\t\t\t\x20\x20\x20\x20\x20\x2f\x4F\x4F\x5C\n");
	printf("\t\t\t\x20\x20\x20\x20\x20\x5C\x3e\x3C\x2f\n");
	color(2, 0);
	printf("\t\t\t\x20\x20\x20__");
	color(15, 0);
	printf("/");
	printf("__");
	color(15, 0);
	printf("\x5C");
	color(2, 0);
	printf("__\n");
	// chapeau
	color(2, 0);
	printf("\t\t\t\x20\x20\x28________\x29\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20|\x20\x20\x20\x20|\n");
	printf("\t\t\t\x20\x20\x20\x20[____]\n");

	printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
	wprintf(L"Developped by :\nMerlin 'Darkadok' Loison, Massamba 'Akimar' S%lcne & Alexandre 'LileX' Courcoul.", 138);


	printf("\nProgramme sous Licence Apache v2.0  - 2015 . \nAnimation par Darkadok.\n\n");
	color(0, 0);

	Sleep(5000);
	color(2, 0);
	system("pause");
}

