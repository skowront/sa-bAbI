#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_6 = 18;              // Tag.BODY
    char entity_9[42];          // Tag.BODY
    entity_2 = 21;              // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 94;              // Tag.BODY
    entity_9[entity_2] = 'v';   // Tag.BUFWRITE_COND_SAFE
    char entity_1[55];          // Tag.BODY
    entity_1[entity_3] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER