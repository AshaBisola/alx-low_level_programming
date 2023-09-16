#include "main.h"

int printString(const char *str);
int printRev(const char *str);
int printCSR(va_list arg);

int print_num(long int k, long int base);
int printInteger(va_list arg);
int printUnsign(long int k, long int base);
int printBases(va_list arg);
int printPercent(va_list args __attribute__((unused)));

/* Array of key-value pairs */
/**
 * struct data - An array of key-value pairs for printf functions.
 *
 * This array associates conversion specifiers (keys) with their corresponding
 * printf functions (values).
 */
struct data keys[] = {
	{"c",  printCSR}, {"s",  printCSR}, {"r", printCSR}, {"%", printPercent},
	{"d", printInteger}, {"u", printUnsign}, {"i", printInteger},
	{"b", printBases}, {"o", printBases}, {"x", printBases}, {"X", printBases}
};
