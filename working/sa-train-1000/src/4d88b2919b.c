#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_0[29];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 99;              // Tag.BODY
    entity_2 = 51;              // Tag.BODY
    while(entity_2 < entity_3){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_8[20];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_0[entity_2] = 'r';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 3;               // Tag.BODY
    entity_8[entity_6] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER