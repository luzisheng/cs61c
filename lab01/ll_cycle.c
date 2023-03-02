#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
	/* your code here */
	node *tortoise = head;
	node *hare = head;
	while (hare) {
		
		if (!hare->next) {
			return 0;
		}

		tortoise = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise) {
			return 1;
		}
	}

	return 0;
}
