#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_5[16];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[3];           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_7[86];          // Tag.BODY
    entity_4 = 34;              // Tag.BODY
    entity_6 = 7;               // Tag.BODY
    entity_2 = 69;              // Tag.BODY
    entity_3 = 90;              // Tag.BODY
    while(entity_2 < entity_4){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_6] = 'd';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_2] = 'E';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_3] = 'p';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER