#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    entity_9 = 42;            // Tag.BODY
    char entity_0[24];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 96;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 2;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 6;             // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_6] = 'e'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER