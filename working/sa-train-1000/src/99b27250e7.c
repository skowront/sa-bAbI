#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 61;              // Tag.BODY
    entity_6 = 75;              // Tag.BODY
    char entity_9[48];          // Tag.BODY
    while(entity_6 < entity_1){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9[entity_6] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[50];          // Tag.BODY
    entity_7 = 16;              // Tag.BODY
    entity_3[entity_7] = 'L';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER