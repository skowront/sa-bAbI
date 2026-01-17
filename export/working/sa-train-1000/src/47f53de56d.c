#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[51];        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_3[29];        // Tag.BODY
    entity_6 = 77;            // Tag.BODY
    entity_2 = 45;            // Tag.BODY
    entity_0 = 92;            // Tag.BODY
    if(entity_6 < entity_0){  // Tag.BODY
    entity_6 = 11;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5[entity_2] = 'A'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 68;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_6] = 'W'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER