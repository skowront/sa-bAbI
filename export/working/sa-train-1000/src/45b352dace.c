#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 89;            // Tag.BODY
    char entity_8[50];        // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    if(entity_4 < entity_5){  // Tag.BODY
    entity_4 = 82;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_4] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER