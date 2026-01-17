#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_0[52];        // Tag.BODY
    entity_4 = 4;             // Tag.BODY
    char entity_9[86];        // Tag.BODY
    entity_5 = 4;             // Tag.BODY
    entity_1 = 29;            // Tag.BODY
    entity_7 = 50;            // Tag.BODY
    char entity_2[15];        // Tag.BODY
    entity_0[entity_7] = 'H'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_4 < entity_1){  // Tag.BODY
    entity_4 = 16;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_5] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 97;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_4] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER