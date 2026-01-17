#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[21];        // Tag.BODY
    entity_8 = 33;            // Tag.BODY
    entity_1 = 62;            // Tag.BODY
    if(entity_1 < entity_8){  // Tag.BODY
    entity_1 = 59;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 65;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = '2'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER