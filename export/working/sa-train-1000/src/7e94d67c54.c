#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_7[45];        // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 17;            // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 36;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_7[entity_4] = 'f'; // Tag.BUFWRITE_COND_SAFE
    char entity_1[76];        // Tag.BODY
    entity_8 = 52;            // Tag.BODY
    entity_1[entity_8] = 'S'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER