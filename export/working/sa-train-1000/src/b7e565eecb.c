#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_8[24];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_1 = 7;             // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 86;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_2] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER