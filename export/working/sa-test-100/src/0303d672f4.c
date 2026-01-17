#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_9[1];         // Tag.BODY
    entity_5 = 38;            // Tag.BODY
    entity_7 = 83;            // Tag.BODY
    if(entity_5 < entity_7){  // Tag.BODY
    entity_5 = 4;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 68;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER