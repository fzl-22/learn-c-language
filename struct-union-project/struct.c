#include <stdio.h>

// each member have different memory location
struct item_t {
	char*	name;
	int		quantity;
	float	price;
};

void reduce_stock(struct item_t *item, int q){
	item->quantity -= q;
}

int main() {
	struct item_t item;

	item.name = "Apple";
	item.quantity = 20;
	item.price = 0.8;
	printf("%s - %d pieces -  $%.2f each\n", item.name, item.quantity, item.price);

	reduce_stock(&item, 7);

	printf("%s - %d pieces -  $%.2f each\n", item.name, item.quantity, item.price);

}
