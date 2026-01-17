#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 75;            // Tag.BODY
    char entity_8[62];        // Tag.BODY
    entity_3 = 16;            // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    entity_3 = 4;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 66;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[84];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_8[entity_3] = 'R'; // Tag.BUFWRITE_COND_SAFE
    char entity_6[70];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 29;            // Tag.BODY
    entity_7 = 25;            // Tag.BODY
    entity_6[entity_7] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_1] = 'p'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER