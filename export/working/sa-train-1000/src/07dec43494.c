#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[50];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = 16;              // Tag.BODY
    entity_5 = 66;              // Tag.BODY
    while(entity_5 < entity_7){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_5] = 'e';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER