#include "Gestion.h"
void main()
{
	int* taille_tab_etoile = NULL;
	Region* tab_region = NULL;
	ajouterRegion(&tab_region, "SilenceIsGolden", &taille_tab_etoile);

	lectureFichierDepartement(&tab_region, &taille_tab_etoile);
	/*lectureFichierRecensements();*/

}