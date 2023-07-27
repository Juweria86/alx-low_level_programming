#include "main.h"
/**
 * cap_string -function that capitalizes all words of a string.
 * @str:pointer
 */
char *cap_string(char *str)
{
	char *p = str;
	int cap_next = 1;  // Start by capitalizing the first letter
	while (*p) {
        if (cap_next && islower((unsigned char)*p)) {
            *p = toupper((unsigned char)*p);
        }
        cap_next = isspace((unsigned char)*p) || *p == ',' || *p == ';' || *p == '.' || 
		*p == '!' || *p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}';
        p++;
    }
    return str;
}
