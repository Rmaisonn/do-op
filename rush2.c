/*
 ** EPITECH PROJECT, 2017
 ** rush2.c
 ** File description:
 ** z
 */

void	my_putchar(char c);
void	my_put_nbr(int nb);
int	my_putstr(char *str);

void	my_print(int c, int b, int count, char **argv)
{
	my_putchar(argv[b][0]);
	my_putchar(':');
	my_put_nbr(count);
	my_putchar(' ');
	my_putchar('(');
	my_put_nbr(c / 100);
	my_putchar('.');
	if ((c % 100) == 0) {
		my_putchar('0');
		my_putchar('0');
	}
	else
		my_put_nbr(c % 100);
	my_putchar('%');
	my_putchar(')');
	my_putchar('\n');
}

int	my_count(char **argv, int b)
{
	int	a = 0;
	int	count = 0;

	while (argv[1][a]) {
		if (argv[b][0] >= 'a' && argv[b][0] <= 'z') {
			if (argv[1][a] ==  argv[b][0] ||
			    argv[1][a] == (argv[b][0] - 32))
				count++;
		}
		if (argv[b][0] >= 'A' && argv[b][0] <= 'Z') {
			if (argv[1][a] ==  argv[b][0] ||
			    argv[1][a] == (argv[b][0] + 32))
				count++;
		}
		a++;
	}
	return (count);
}

int	*my_scores(int f, int c, int *scores)
{
	int	tab_eng[26] = {816, 149, 278, 425, 1270, 222, 201, 609, 696, 15,
				77, 402, 240, 674, 750, 1092, 9, 598,
				632, 905, 275, 97, 236, 15, 197, 7};
	int	tab_fr[26] = {763, 90, 326, 366, 1471, 106, 86, 73, 752, 61, 4,
				545, 296, 709, 579, 252, 136, 679, 794,
				724, 631, 183, 7, 42, 12, 32};
	int	tab_ger[26] = {651, 188, 273, 507, 1639, 165, 300, 457, 655, 26,
				141, 343, 253, 977, 259, 67, 1, 700,
				727, 615, 416, 84, 192, 3, 3, 113};
	int	tab_sp[26] = {1152, 221, 401, 501, 1218, 69, 176, 70, 624, 49,
				1, 496, 315, 671, 868, 251, 87, 687,
				797, 463, 292, 113, 1, 21, 100, 46};

	if ((c > tab_eng[f] - 100) && (c < tab_eng[f] + 100))
		scores[0]++;
	if ((c > tab_fr[f] - 100) && (c < tab_fr[f] + 100))
		scores[1]++;
	if ((c > tab_ger[f] - 100) && (c < tab_ger[f] + 100))
		scores[2]++;
	if ((c > tab_sp[f] - 100) && (c < tab_sp[f] + 100))
		scores[3]++;
	return (scores);
}

void	print_language(int *scores)
{
	if ((scores[0] >= scores[1]) && (scores[0] >= scores[2])
		&& (scores[0] >= scores[3]))
		my_putstr("=> English\n");
	if ((scores[1] >= scores[0]) && (scores[1] >= scores[2])
		&& (scores[1] >= scores[3]))
		my_putstr("=> French\n");
	if ((scores[2] >= scores[1]) && (scores[2] >= scores[0])
		&& (scores[2] > scores[3]))
		my_putstr("=> German\n");
	if ((scores[3] >= scores[1]) && (scores[3] >= scores[2])
		&& (scores[3] >= scores[0]))
		my_putstr("=> Spanish\n");
}

int	main(int argc, char **argv)
{
	int	a = 0;
	int	b = 2;
	int	c = 0;
	int	d = 0;
	int	e = 0;
	int	f = 0;
	int	scores[4] = {0, 0, 0, 0};

	while (argv[1][a]) {
		if ((argv[1][a] >= 'a' && argv[1][a] <= 'z') ||
		    (argv[1][a] >= 'A' && argv[1][a] <= 'Z'))
			e++;
		a++;
	}
	while (argv[b]) {
		d = my_count(argv, b);
		c = (d * 10000) / e;
		if (argv[b][0] >=  'a' && argv[b][0] <= 'z') {
			f = argv[b][0] - 97;
			my_scores(f, c, scores);
		}
		else if (argv[b][0] >= 'A' && argv[b][0] <= 'Z') {
			f = argv[b][0] - 65;
			my_scores(f, c, scores);
		}
		my_print(c, b, d, argv);
		b++;
	}
	print_language(scores);
	return (0);
}
