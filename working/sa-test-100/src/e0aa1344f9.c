#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[30];        // Tag.BODY
    char entity_2[19];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_0 = 78;            // Tag.BODY
    entity_7 = 32;            // Tag.BODY
    entity_8 = 70;            // Tag.BODY
    entity_2[entity_8] = 'm'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_7 < entity_0){  // Tag.BODY
    entity_7 = 45;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_7] = 'k'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER