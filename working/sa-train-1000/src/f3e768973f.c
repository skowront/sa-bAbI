#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[47];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_3 = 36;            // Tag.BODY
    entity_6 = 53;            // Tag.BODY
    if(entity_6 < entity_3){  // Tag.BODY
    entity_6 = 44;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 1;             // Tag.BODY
    }                         // Tag.BODY
    char entity_4[23];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_2[entity_6] = 'p'; // Tag.BUFWRITE_COND_SAFE
    entity_8 = 0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_9[51];        // Tag.BODY
    entity_9[entity_8] = 'i'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 37;            // Tag.BODY
    entity_4[entity_5] = 'H'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER