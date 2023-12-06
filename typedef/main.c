#include <stdio.h>

typedef unsigned int uint;

typedef struct item_t {
  char *name;
  int qty;
  float weight;
} item_type, *item_type_ptr;

// typedef struct item_t item_type, *item_type_ptr;

static void print_item(item_type_ptr item) {
  printf("Itemdata:\nName: %s\nQty: %d\nWeight: %.2f kg\n", item->name, item->qty, item->weight);
}

int main(void){
  uint num = 2045;
  unsigned int another_num = num;
  item_type item;

  item.name = "Jeruk";
  item.qty = 20;
  item.weight = 7.9;

  print_item(&item);

  printf("Number is %u\n", num);
  printf("Another number is %u\n", another_num);

  return 0;
}
