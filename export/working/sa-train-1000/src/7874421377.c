#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_2 = 50;            // Tag.BODY
    entity_9 = 39;            // Tag.BODY
    char entity_8[91];        // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    entity_2 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 55;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 3;             // Tag.BODY
    entity_8[entity_2] = 'e'; // Tag.BUFWRITE_COND_SAFE
    char entity_3[30];        // Tag.BODY
    entity_3[entity_1] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER