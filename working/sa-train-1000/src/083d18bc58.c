#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_6 = 15;              // Tag.BODY
    entity_2 = 25;              // Tag.BODY
    char entity_3[70];          // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = '2';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER