#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_7 = 19;            // Tag.BODY
    entity_5 = 59;            // Tag.BODY
    char entity_3[37];        // Tag.BODY
    if(entity_5 < entity_7){  // Tag.BODY
    entity_5 = 95;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 57;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_5] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER