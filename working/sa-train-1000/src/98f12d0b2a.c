#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_3[55];          // Tag.BODY
    entity_2 = 50;              // Tag.BODY
    entity_0 = 15;              // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 37;              // Tag.BODY
    entity_3[entity_2] = 'J';   // Tag.BUFWRITE_COND_SAFE
    char entity_4[12];          // Tag.BODY
    entity_4[entity_8] = 'p';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER