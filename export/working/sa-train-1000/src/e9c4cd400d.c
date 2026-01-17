#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    entity_5 = 84;            // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[26];        // Tag.BODY
    entity_1 = 4;             // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    entity_1 = 19;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 28;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'e'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER