#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[37];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_6[32];        // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_3 = 9;             // Tag.BODY
    entity_4 = 47;            // Tag.BODY
    if(entity_8 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 72;            // Tag.BODY
    entity_1[entity_3] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_6[entity_8] = 'E'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER