#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[50];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_6 = 51;              // Tag.BODY
    char entity_3[77];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = 81;              // Tag.BODY
    entity_0[entity_4] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 57;              // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_6] = 'L';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER