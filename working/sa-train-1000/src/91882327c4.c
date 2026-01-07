#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_3[46];        // Tag.BODY
    entity_7 = 3;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 72;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_8] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER