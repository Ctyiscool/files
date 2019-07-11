#include <stdio.h>
#include <stdlib.h>

void main()
{
	char input[5];
	int mapgrid[5][5];
		mapgrid[0][0] = 3;
	mapgrid[0][1] = 0;
	mapgrid[0][2] = 0;
	mapgrid[0][3] = 0;
	mapgrid[0][4] = 0;
	mapgrid[1][0] = 0;
	  mapgrid[1][1] = 1;
	mapgrid[1][2] = 0;
	  mapgrid[1][3] = 1;
	mapgrid[1][4] = 0;
	mapgrid[2][0] = 0;
	mapgrid[2][1] = 0;
	mapgrid[2][2] = 0;
	mapgrid[2][3] = 0;
	mapgrid[2][4] = 0;
	mapgrid[3][0] = 0;
	  mapgrid[3][1] = 1;
	mapgrid[3][2] = 0;
	  mapgrid[3][3] = 1;
	mapgrid[3][4] = 0;
	mapgrid[4][0] = 0;
	mapgrid[4][1] = 0;
	mapgrid[4][2] = 0;
	mapgrid[4][3] = 0;
	mapgrid[4][4] = 0;
	
	int playerx = 4;
	int playery = 4;
	int bullets = 5;


	printf("Game Starting\n");
	
	while(1)
{	
		
		printf("Bullets = %d: \n",bullets);
		printf("Shoot or Move [s/m]:\n ");
	scanf("%s", input);
	printf("You entered %s \n", input);
	

	switch(input[0])
	{
		case 's':
		printf("Shooting... \n");
		bullets = bullets - 1;
			
			break;
		case 'm':
		printf("Moving...\n");
		printf("Direction [w/a/s/d]:\n ");
		scanf("%s", input);
		switch(input[0]) {
			case 'w':
				if(playery == 0){
					printf("You cannot move any farther up\n");	
				} else {
					playery = playery - 1;

				}	

				break;
			case 's':
				if(playery == 4){
					printf("You cannot move any farther down\n");	
				} else {
					playery = playery + 1;

				}	

				
				break;
			case 'd':
				if(playerx == 4){
					printf("You cannot move any farther right\n");	
				} else {
					playerx = playerx - 1;

				}	

				
				break;
			case 'a':
				if(playerx == 0){
					printf("You cannot move any farther left\n");	
				} else {
					playerx = playerx + 1;

				}	

				playerx = playerx + 1;
				break;
		}
			break;

		default:
			return;
	}
	printf("Player is at %d %d \n", playerx, playery);
	







}


}
	
