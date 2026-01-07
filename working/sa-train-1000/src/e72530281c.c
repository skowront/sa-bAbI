#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[9];         // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 76;            // Tag.BODY
    entity_3 = 16;            // Tag.BODY
    if(entity_6 < entity_3){  // Tag.BODY
    entity_6 = 80;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 58;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9[entity_6] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;             // Tag.BODY
    char entity_1[28];        // Tag.BODY
    entity_2 = 10;            // Tag.BODY
    entity_1[entity_2] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_8[21];        // Tag.BODY
    entity_0 = 54;            // Tag.BODY
    entity_8[entity_0] = 'e'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER