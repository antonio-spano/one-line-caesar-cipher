#include "caesar.h"

char shiftAlphaCharacter(char c, int n)
{
    return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ? n >= 0 ? c - (c + n % 26 > (c >= 'A' && c <= 'Z' ? 'Z' : 'z') ? 26 : 0) + n % 26 : c + (c + n % 26 < (c >= 'A' && c <= 'Z' ? 'A' : 'a') ? 26 : 0) + n % 26 : c;
}