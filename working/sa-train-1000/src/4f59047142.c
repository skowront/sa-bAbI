#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2 = 89;            // Tag.BODY
    char entity_0[48];        // Tag.BODY
    entity_5 = 93;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    entity_2 = 83;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 78;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_2] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER