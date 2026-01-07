#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_8 = 89;            // Tag.BODY
    entity_0 = 34;            // Tag.BODY
    char entity_1[6];         // Tag.BODY
    char entity_9[42];        // Tag.BODY
    entity_4 = 38;            // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    entity_8 = 52;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 41;            // Tag.BODY
    entity_1[entity_4] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    entity_9[entity_8] = '3'; // Tag.BUFWRITE_COND_SAFE
    char entity_6[27];        // Tag.BODY
    entity_6[entity_3] = '8'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER