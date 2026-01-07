#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[70];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 19;            // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[41];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_1 = 30;            // Tag.BODY
    entity_7 = 61;            // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    entity_4[entity_1] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 28;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 16;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5[entity_8] = 'f'; // Tag.BUFWRITE_COND_SAFE
    char entity_3[91];        // Tag.BODY
    entity_6 = 37;            // Tag.BODY
    entity_3[entity_6] = '6'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER