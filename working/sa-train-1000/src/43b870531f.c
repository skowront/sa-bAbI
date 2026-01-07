#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_5 = 78;              // Tag.BODY
    char entity_0[40];          // Tag.BODY
    char entity_8[92];          // Tag.BODY
    entity_1 = 75;              // Tag.BODY
    entity_2 = 8;               // Tag.BODY
    while(entity_5 < entity_2){ // Tag.BODY
    entity_0[entity_1] = 'J';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_5] = 'O';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER