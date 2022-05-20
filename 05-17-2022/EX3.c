#include <stdio.h>

typedef struct {
	int jour, mois, an;
} date;

int	main()
{
	date today = {17, 5, 2022};
	
	printf("%i/%i/%i\n", today.jour, today.mois, today.an);
	
	date *p = &today;
	
	printf("%i/%i/%i\n", p -> jour, p -> mois, p -> an);
	
	date tab[3] = {today, {16, 5, 2022}, {18, 5, 2022}};
	date *p2 = tab;
	
	for (int i = 0; i < 3; i++) printf("%i/%i/%i\n", (p2+i) -> jour, (p2+i) -> mois, (p2+i) -> an);
	
	return 0;
}