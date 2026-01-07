#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[86];        // Tag.BODY
    char entity_4[6];         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_1 = 10;            // Tag.BODY
    entity_3 = 36;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 19;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_0] = 'H'; // Tag.BUFWRITE_COND_SAFE
    char entity_7[83];        // Tag.BODY
    entity_4[entity_1] = 'K'; // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_9;             // Tag.BODY
    entity_9 = 65;            // Tag.BODY
    entity_7[entity_9] = 'L'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER