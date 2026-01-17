#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_3 = 30;            // Tag.BODY
    entity_4 = 1;             // Tag.BODY
    char entity_7[96];        // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    entity_3 = 56;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = '5'; // Tag.BUFWRITE_COND_SAFE
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_2[24];        // Tag.BODY
    char entity_0[55];        // Tag.BODY
    entity_8 = 3;             // Tag.BODY
    entity_6 = 63;            // Tag.BODY
    entity_2[entity_8] = 'Q'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_6] = 'P'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER