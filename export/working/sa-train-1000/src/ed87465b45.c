#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_0[69];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_6 = 90;            // Tag.BODY
    entity_1 = 27;            // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    entity_6 = 89;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 13;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_6] = 'r'; // Tag.BUFWRITE_COND_SAFE
    int entity_3;             // Tag.BODY
    char entity_7[42];        // Tag.BODY
    entity_3 = 12;            // Tag.BODY
    entity_7[entity_3] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER