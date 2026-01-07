#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_6[57];        // Tag.BODY
    char entity_1[45];        // Tag.BODY
    entity_2 = 97;            // Tag.BODY
    entity_8 = 94;            // Tag.BODY
    entity_9 = 5;             // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    entity_1[entity_9] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 92;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 68;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_2] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER