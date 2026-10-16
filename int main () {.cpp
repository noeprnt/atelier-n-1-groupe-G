// programme de Benjamin T et de Noé P
//programme affichant un tableau de bord d'avion avec la vitesse, l'altitude et le cap
//Nous vous souhaitons une bonne lecture et un bon vol

#include <stdio.h>

int main() {
	int speed = 0; // définition de la vitesse à 0 nœud
	int altitude = 0; // définition de l'altitude à 0 pied
	int cap = 180; // définition du cap à 180 degrés
printf ("+--------------------------------------------------------------------+\n");
printf ("|                                                                   |\n");
printf ("|                             /--A--\\                               |\n");
printf ("|                            /       \\                              |\n");
printf ("|                           /         \\                             |\n");
printf ("|+-----+                                                      +-----+|\n");
printf ("|       |                    5-------5                        |      |\n");
printf ("|       |                    |       |                        |      |\n");
printf ("|       |                     |-----|                         |      |\n");
printf ("|--200--|                                                     |-2000-|\n");
printf ("|       |_____________________________________________________|      |\n");
printf ("|       |                                                     |      |\n");
printf ("|       |                                                     |      |\n");
printf ("|--100--|                                                     |-1000-|\n");
printf ("|       |            -------+----------+-------               |      |\n");
printf ("|       |                                                     |      |\n");
printf ("|       |----|           ||               ||              |===|      |\n");
printf ("|--000--|<%d|-------------||-------+-------||----------------|%d|-0000-|\n", speed, altitude);
printf ("|       |____|           ||               ||              |___|      |\n");
printf ("|       | kts|                                            | ft|      |\n");
printf ("|       |====        --------+---------+------            ====|      |\n");
printf ("|--000--|                                                     |-1000-|\n");
printf ("|       |                                                     |      |\n");
printf ("|       |                                                     |      |\n");
printf ("|--000--|               5------------------5               %3d|      |\n", cap);
printf ("|       |               |                  |                  |      |\n");
printf ("|       |                |----------------|                   |-2000-|\n");
printf ("+-------+                                                     +-----+|\n");
printf ("                   ________________|______________                    \n"); 
printf ("                   |   |        |   |     |  |   |                    \n");  
printf ("                   | - |00|  -  |000|  -  |00| - |                    \n");
printf ("                   |___|__|_____|___|_____|__|___|                    \n");
printf ("+--------------------------------------------------------------------+\n");
	return 0;
}