#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_2[80];        // Tag.BODY
    entity_0 = 62;            // Tag.BODY
    entity_1 = 43;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    entity_1 = 6;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 41;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2[entity_1] = 'v'; // Tag.BUFWRITE_COND_SAFE
    entity_6 = 4;             // Tag.BODY
    char entity_7[37];        // Tag.BODY
    entity_3 = 79;            // Tag.BODY
    entity_7[entity_3] = 'r'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[69];        // Tag.BODY
    entity_4[entity_6] = 'p'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER