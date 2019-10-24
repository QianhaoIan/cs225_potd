// your code here
#include "q5.h"


void increase_quantity(Food* food){
	int now_quantity;

	now_quantity = food->get_quantity();
	now_quantity += 1;
	food->set_quantity(now_quantity);
}