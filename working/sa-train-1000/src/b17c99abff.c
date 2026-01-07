#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_9 = 21;            // Tag.BODY
    char entity_5[35];        // Tag.BODY
    entity_6 = 42;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 45;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 55;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_6] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER