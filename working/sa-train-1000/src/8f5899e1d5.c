#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[67];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 41;            // Tag.BODY
    char entity_6[59];        // Tag.BODY
    entity_8 = 3;             // Tag.BODY
    entity_3[entity_8] = 'G'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 25;            // Tag.BODY
    if(entity_9 < entity_1){  // Tag.BODY
    entity_9 = 19;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 11;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[55];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_6[entity_9] = 'c'; // Tag.BUFWRITE_COND_SAFE
    entity_0 = 10;            // Tag.BODY
    entity_7[entity_0] = 'e'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER