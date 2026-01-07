#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_4[94];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 81;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 10;              // Tag.BODY
    entity_2 = 44;              // Tag.BODY
    char entity_8[91];          // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_1] = 'o';   // Tag.BUFWRITE_COND_SAFE
    entity_4[entity_6] = 'Z';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER