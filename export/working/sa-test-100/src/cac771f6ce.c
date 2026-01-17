#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[69];        // Tag.BODY
    entity_8 = 55;            // Tag.BODY
    entity_7 = 48;            // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    entity_7 = 37;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 70;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_7] = 'g'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER