#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[6];         // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 68;            // Tag.BODY
    entity_6 = 56;            // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    entity_3 = 1;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2[entity_3] = 'Q'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[2];         // Tag.BODY
    entity_1 = 28;            // Tag.BODY
    entity_4[entity_1] = 'a'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER