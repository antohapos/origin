#include "counter.h"
void Counter::set_count(char a) {
	switch (a) {
	case 43: count++;
		break;
	case 45: count--;
		break;
	}
}
int Counter::get_count() { return count; }
Counter::Counter(int count) { this->count = count; }

