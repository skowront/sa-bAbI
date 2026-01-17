#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1 = 88;            // Tag.BODY
    entity_6 = 18;            // Tag.BODY
    entity_9 = 54;            // Tag.BODY
    char entity_3[10];        // Tag.BODY
    char entity_4[95];        // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    entity_1 = 48;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3[entity_6] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 24;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = '8'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER