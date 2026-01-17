#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_4[95];          // Tag.BODY
    entity_2 = 13;              // Tag.BODY
    entity_6 = 35;              // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_2] = 'Z';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER