#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[2];         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 5;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_1[95];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 4;             // Tag.BODY
    entity_1[entity_5] = 'A'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 24;            // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    entity_7 = 29;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_7] = 'V'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER