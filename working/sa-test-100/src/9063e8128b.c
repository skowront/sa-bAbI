#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_5[55];        // Tag.BODY
    char entity_8[50];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_3 = 57;            // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_4[22];        // Tag.BODY
    entity_7 = 6;             // Tag.BODY
    entity_9 = 41;            // Tag.BODY
    entity_1 = 14;            // Tag.BODY
    if(entity_1 < entity_7){  // Tag.BODY
    entity_1 = 55;            // Tag.BODY
    entity_4[entity_9] = '9'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_1 = 78;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_3] = '9'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_1] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER