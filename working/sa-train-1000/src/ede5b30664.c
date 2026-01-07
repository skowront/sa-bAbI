#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    entity_7 = 58;              // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_9[78];          // Tag.BODY
    char entity_8[87];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 15;              // Tag.BODY
    entity_1 = 80;              // Tag.BODY
    char entity_3[24];          // Tag.BODY
    entity_2 = 43;              // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_3[entity_7] = 'm';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_1] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_5] = 'x';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER