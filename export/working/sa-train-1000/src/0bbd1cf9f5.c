#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_8[86];          // Tag.BODY
    entity_1 = 43;              // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_6[91];          // Tag.BODY
    entity_5 = 55;              // Tag.BODY
    entity_4 = 85;              // Tag.BODY
    entity_8[entity_4] = '0';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_5 < entity_1){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[66];          // Tag.BODY
    entity_6[entity_5] = 'L';   // Tag.BUFWRITE_COND_SAFE
    int entity_3;               // Tag.BODY
    entity_3 = 85;              // Tag.BODY
    entity_7[entity_3] = 'W';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER