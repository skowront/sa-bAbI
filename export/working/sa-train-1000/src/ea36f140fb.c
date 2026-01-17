#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_1[23];        // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    entity_5 = 47;            // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    entity_5 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 31;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_5] = 'm'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER