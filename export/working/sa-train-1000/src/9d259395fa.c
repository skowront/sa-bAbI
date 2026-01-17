#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 25;            // Tag.BODY
    char entity_4[32];        // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 90;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_5] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER