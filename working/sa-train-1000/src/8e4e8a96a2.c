#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_4 = 59;            // Tag.BODY
    entity_1 = 20;            // Tag.BODY
    char entity_3[43];        // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    entity_4 = 94;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 6;             // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_4] = 'm'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER