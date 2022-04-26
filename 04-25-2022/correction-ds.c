#include <stdio.h>

int	main()
{
	int N = 1256, guess, count, found = 0;

	do
	{
		printf("veuillez entrer un entier: ");
		scanf("%d", &guess);
		count += 1;

		if (guess > N) printf("devinez plus bas\n");
		else if (guess < N) printf("devinez plus haut\n");
		else found = 1;

	} while (found != 1);

	printf("vous avez trouvez apres %i essais", count);

	return 0;
}