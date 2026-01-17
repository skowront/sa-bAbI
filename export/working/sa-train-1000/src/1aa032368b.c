#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_4[26];        // Tag.BODY
    entity_1 = 66;            // Tag.BODY
    char entity_9[33];        // Tag.BODY
    entity_2 = 90;            // Tag.BODY
    entity_6 = 71;            // Tag.BODY
    if(entity_1 < entity_2){  // Tag.BODY
    entity_1 = 16;            // Tag.BODY
    entity_9[entity_6] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_1 = 78;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'j'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER