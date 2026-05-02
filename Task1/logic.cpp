#include "logic.h"

string swap_values(int* ptr_a, int* ptr_b, int* ptr_c) {
	*ptr_a = *ptr_a + *ptr_b + *ptr_c;

	*ptr_c = *ptr_a - (*ptr_b + *ptr_c); 
	*ptr_b = *ptr_a - (*ptr_b + *ptr_c); 
	*ptr_a = *ptr_a - (*ptr_b + *ptr_c); 


	return to_string(*ptr_a) + " "
		+ to_string(*ptr_b) + " "
		+ to_string(*ptr_c);

}