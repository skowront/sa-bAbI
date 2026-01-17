#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    entity_7 = 97;            // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_9[91];        // Tag.BODY
    entity_0 = 0;             // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    entity_0 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 2;             // Tag.BODY
    }                         // Tag.BODY
    char entity_1[66];        // Tag.BODY
    entity_9[entity_0] = 'u'; // Tag.BUFWRITE_COND_SAFE
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_2[88];        // Tag.BODY
    entity_6 = 32;            // Tag.BODY
    entity_3 = 0;             // Tag.BODY
    entity_1[entity_6] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_3] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER