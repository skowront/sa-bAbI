#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_3[68];        // Tag.BODY
    entity_1 = 58;            // Tag.BODY
    entity_5 = 19;            // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    entity_5 = 35;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 6;             // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_5] = '4'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER