#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_3[78];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_0 = 79;            // Tag.BODY
    entity_3[entity_0] = 'F'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[37];        // Tag.BODY
    entity_7 = 83;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 50;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_6] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER