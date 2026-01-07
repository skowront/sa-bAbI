#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_5[68];        // Tag.BODY
    entity_7 = 27;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 65;            // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    entity_7 = 51;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 9;             // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_7] = '8'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER