#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_5[20];        // Tag.BODY
    entity_4 = 92;            // Tag.BODY
    entity_3 = 24;            // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    entity_3 = 36;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 50;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_9[78];        // Tag.BODY
    entity_2 = 18;            // Tag.BODY
    entity_5[entity_3] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_2] = 'j'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER