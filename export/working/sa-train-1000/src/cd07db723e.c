#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[52];        // Tag.BODY
    entity_0 = 74;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_8[58];        // Tag.BODY
    entity_4 = 72;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 76;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_4] = 'P'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_2] = 'r'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER