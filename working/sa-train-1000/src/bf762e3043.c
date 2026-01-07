#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5 = 38;              // Tag.BODY
    char entity_6[46];          // Tag.BODY
    entity_3 = 64;              // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_6[entity_5] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[50];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_8 = 43;              // Tag.BODY
    char entity_4[44];          // Tag.BODY
    entity_9[entity_8] = 'u';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 81;              // Tag.BODY
    entity_4[entity_0] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER