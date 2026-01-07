#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_9[15];        // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_1 = 4;             // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 58;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_9[entity_8] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 74;            // Tag.BODY
    char entity_0[83];        // Tag.BODY
    entity_0[entity_7] = 'G'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER