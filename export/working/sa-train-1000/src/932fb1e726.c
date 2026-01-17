#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_8[66];          // Tag.BODY
    entity_0 = 50;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 46;              // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8[entity_5] = 'T';   // Tag.BUFWRITE_COND_SAFE
    char entity_2[3];           // Tag.BODY
    char entity_3[15];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 77;              // Tag.BODY
    entity_6 = 67;              // Tag.BODY
    entity_3[entity_6] = 'P';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_7] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER