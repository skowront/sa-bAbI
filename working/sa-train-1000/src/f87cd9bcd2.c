#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_0[51];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_9[50];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 44;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_3 = 31;            // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 60;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_8[6];         // Tag.BODY
    entity_9[entity_3] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 40;            // Tag.BODY
    entity_8[entity_1] = 'j'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_4] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER