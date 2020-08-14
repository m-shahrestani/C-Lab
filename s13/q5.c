#include <stdio.h>
#include <stdlib.h>

struct dish { char name[255]; int price;  int is_double;};
struct dish dishes[] = { {"Ghost Dog", 38000}, {"Boca Juniors", 45000}, {"Jogo Bonito", 45000}, {"Hitchcock", 49000}, {"Hamlet", 40000}, {"Pulp Fiction", 45000}, {"Hidden", 40000},{"The Fish Fall in Love", 18000}, {"Honey with Lemon", 16000}, {"Green", 15000}, {"Mint", 13000}, {"Orange Blossom", 15000},{"Mojito", 20000}, {"Limonade", 20000}, {"Dark Knight", 25000}, {"Heath Ledger", 25000},{ "V60", 33000, 1 },{ "French Press", 17000, 0 }, { "V60", 25000, 0 },};

void bubble_sort_1(struct dish arr[], int n)
{
	struct dish t;
	int i, j;
	for(i = n - 2 ; i >= 0 ; i--)
		for(j = 0 ; j <= i ; j++)
    	if(arr[j].price > arr[j + 1].price)
		{
	        t = arr[j];
	        arr[j] = arr[j + 1];
	        arr[j + 1] = t;
    	}
}
int main()
{
	int i;
	bubble_sort_1(dishes,19);
	for(i=0;i<19;i++)
	{
		printf("%s %d %d\n",dishes[i].name,dishes[i].price,dishes[i].is_double);
	}
	return 0;
}
