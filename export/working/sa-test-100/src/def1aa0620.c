#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[89];        // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 78;            // Tag.BODY
    entity_5 = 49;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    entity_2 = 25;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 21;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[43];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_1[entity_2] = 'x'; // Tag.BUFWRITE_COND_SAFE
    entity_3 = 12;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 62;            // Tag.BODY
    entity_4[entity_8] = '6'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_7[97];        // Tag.BODY
    entity_7[entity_3] = 'e'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER