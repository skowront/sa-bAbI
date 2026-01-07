#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[37];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_9[69];          // Tag.BODY
    entity_5 = 40;              // Tag.BODY
    entity_2 = 90;              // Tag.BODY
    entity_4 = 49;              // Tag.BODY
    while(entity_5 < entity_2){ // Tag.BODY
    entity_7[entity_4] = 'Y';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_5] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER