#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = 21;              // Tag.BODY
    entity_5 = 60;              // Tag.BODY
    char entity_2[51];          // Tag.BODY
    while(entity_5 < entity_7){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_5] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER