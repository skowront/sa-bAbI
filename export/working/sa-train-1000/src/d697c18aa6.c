#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_7[25];        // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_1 = 83;            // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 85;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_6] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER