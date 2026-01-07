#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[17];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_3[50];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_0 = 74;            // Tag.BODY
    entity_4 = 35;            // Tag.BODY
    if(entity_9 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 28;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_9] = 'C'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_4] = '3'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER