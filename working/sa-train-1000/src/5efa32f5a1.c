#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_1[55];          // Tag.BODY
    entity_9 = 70;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = 13;              // Tag.BODY
    char entity_0[9];           // Tag.BODY
    entity_5 = 60;              // Tag.BODY
    while(entity_7 < entity_5){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = 'm';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;               // Tag.BODY
    char entity_4[42];          // Tag.BODY
    entity_1[entity_9] = 'K';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 54;              // Tag.BODY
    entity_4[entity_2] = 'R';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER