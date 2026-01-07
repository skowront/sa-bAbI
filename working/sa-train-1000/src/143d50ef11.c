#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[9];           // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_1[8];           // Tag.BODY
    entity_5 = 26;              // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_2[60];          // Tag.BODY
    entity_8 = 2;               // Tag.BODY
    entity_7 = 74;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 35;              // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_0[entity_3] = 'P';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_5] = 'R';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_7] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER