#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_3[18];        // Tag.BODY
    entity_9 = 88;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 28;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_2] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER