#include "main.h"
/**
 * _strcat - concatenates two strings,
 *
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 *
 */
char* _strcat(char* dest, char* src) {
    char* ptr = dest;
    while (*ptr) {
        ptr++;
    }
    while (*src) {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}
