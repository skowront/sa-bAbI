#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_8[28];          // Tag.BODY
    entity_7 = 2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 95;              // Tag.BODY
    while(entity_5 < entity_7){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_5] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;               // Tag.BODY
    entity_9 = 53;              // Tag.BODY
    char entity_3[48];          // Tag.BODY
    entity_3[entity_9] = 's';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER