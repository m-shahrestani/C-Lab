#include <stdio.h>
#include <stdlib.h>

struct dish { char name[255]; int price; };
struct dish dishes[] = { {"Ghost Dog", 38000}, {"Boca Juniors", 45000}, {"Jogo Bonito", 45000}, {"Hitchcock", 49000}, {"Hamlet", 40000}, {"Pulp Fiction", 45000}, {"Hidden", 40000}, };
struct herbal { char name[255]; int price; };
struct herbal herbals[] = { {"The Fish Fall in Love", 18000}, {"Honey with Lemon", 16000}, {"Green", 15000}, {"Mint", 13000}, {"Orange Blossom", 15000}, };
struct mocktail { char name[255]; int price; };
struct mocktail mocktails[] = { {"Mojito", 20000}, {"Limonade", 20000}, {"Dark Knight", 25000}, {"Heath Ledger", 25000}, };
struct brewed_coffee { char name[255]; int price; int is_double; };
struct brewed_coffee brewed_coffees[] = { { "V60", 33000, 1 },{ "French Press", 17000, 0 }, { "V60", 25000, 0 },};

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
void bubble_sort_2(struct brewed_coffee arr[], int n)
{
	struct brewed_coffee t;
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
	bubble_sort_1(dishes,7);
	printf("%s %d\n",dishes[0].name,dishes[0].price);
	bubble_sort_1(herbals,5);
	printf("%s %d\n",herbals[0].name,herbals[0].price);
	bubble_sort_1(mocktails,4);
	printf("%s %d\n",mocktails[0].name,mocktails[0].price);
	bubble_sort_2(brewed_coffees,3);
	printf("%s %d %d\n",brewed_coffees[0].name,brewed_coffees[0].price,brewed_coffees[0].is_double);
	return 0;
}
