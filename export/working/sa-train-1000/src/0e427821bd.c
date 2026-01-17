#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    char entity_8[8];         // Tag.BODY
    entity_1 = 69;            // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 22;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_0[6];         // Tag.BODY
    char entity_6[98];        // Tag.BODY
    entity_2 = 0;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_8[entity_5] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 38;            // Tag.BODY
    entity_0[entity_7] = 'T'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_2] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER