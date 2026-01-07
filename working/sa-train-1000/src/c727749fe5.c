#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[52];        // Tag.BODY
    char entity_6[99];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = 74;            // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 22;            // Tag.BODY
    entity_0 = 99;            // Tag.BODY
    entity_4 = 14;            // Tag.BODY
    char entity_2[94];        // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    entity_1 = 37;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 24;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'o'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_1] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_0] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER