#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_0[37];          // Tag.BODY
    entity_6 = 81;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 49;              // Tag.BODY
    while(entity_1 < entity_6){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_0[entity_1] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[82];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 2;               // Tag.BODY
    char entity_5[60];          // Tag.BODY
    entity_5[entity_8] = 'N';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 82;              // Tag.BODY
    entity_9[entity_2] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER