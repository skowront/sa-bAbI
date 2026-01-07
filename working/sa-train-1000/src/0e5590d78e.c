#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[95];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_9 = 54;            // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 30;            // Tag.BODY
    }                         // Tag.BODY
    char entity_0[8];         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_6[entity_8] = 's'; // Tag.BUFWRITE_COND_SAFE
    char entity_5[74];        // Tag.BODY
    entity_1 = 3;             // Tag.BODY
    entity_0[entity_1] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_4] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER