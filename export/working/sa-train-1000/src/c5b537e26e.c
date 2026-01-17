#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[10];        // Tag.BODY
    char entity_6[50];        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_9[5];         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2 = 1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_5 = 68;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 97;            // Tag.BODY
    entity_3 = 33;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    entity_9[entity_4] = 'S'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_3] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 1;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_2] = 'f'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER