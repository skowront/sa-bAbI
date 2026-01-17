#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_6[62];        // Tag.BODY
    entity_9 = 26;            // Tag.BODY
    entity_1 = 2;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 12;            // Tag.BODY
    char entity_2[3];         // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    entity_8 = 3;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_1] = '1'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 49;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_8] = 'r'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER