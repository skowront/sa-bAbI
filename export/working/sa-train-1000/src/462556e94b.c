#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_8[6];         // Tag.BODY
    entity_6 = 31;            // Tag.BODY
    entity_1 = 71;            // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    entity_6 = 97;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 53;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[69];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_8[entity_6] = 'R'; // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 9;             // Tag.BODY
    entity_4[entity_9] = '7'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER