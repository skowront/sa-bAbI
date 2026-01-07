#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[1];           // Tag.BODY
    entity_3 = 12;              // Tag.BODY
    entity_7 = 57;              // Tag.BODY
    while(entity_3 < entity_7){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[61];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_8[entity_3] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 30;              // Tag.BODY
    entity_4[entity_6] = 'N';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER