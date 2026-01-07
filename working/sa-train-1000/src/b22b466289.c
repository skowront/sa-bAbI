#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_8[27];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_5 = 48;              // Tag.BODY
    entity_7 = 10;              // Tag.BODY
    while(entity_7 < entity_5){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 17;              // Tag.BODY
    entity_8[entity_7] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;               // Tag.BODY
    char entity_4[69];          // Tag.BODY
    char entity_6[55];          // Tag.BODY
    entity_4[entity_2] = 'n';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 49;              // Tag.BODY
    entity_6[entity_3] = 'P';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER