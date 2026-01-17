#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_6[32];        // Tag.BODY
    entity_8 = 45;            // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_4[15];        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_9[92];        // Tag.BODY
    entity_3 = 64;            // Tag.BODY
    entity_2 = 75;            // Tag.BODY
    entity_1 = 70;            // Tag.BODY
    entity_6[entity_1] = '2'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_8] = 'e'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_3 < entity_2){  // Tag.BODY
    entity_3 = 92;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 34;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_3] = 't'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER