#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[17];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 34;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 9;             // Tag.BODY
    if(entity_0 < entity_2){  // Tag.BODY
    entity_0 = 59;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 41;            // Tag.BODY
    }                         // Tag.BODY
    char entity_6[16];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_4[entity_0] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 90;            // Tag.BODY
    entity_6[entity_7] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER