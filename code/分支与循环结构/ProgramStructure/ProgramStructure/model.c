#include "head.h"

void open(char *str)
{
	ShellExecute(0, "open", str, 0, 0, 1);
}