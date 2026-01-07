#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_5[30];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_7[54];        // Tag.BODY
    entity_3 = 43;            // Tag.BODY
    if(entity_8 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 27;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_6] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    int entity_0;             // Tag.BODY
    char entity_4[27];        // Tag.BODY
    entity_0 = 34;            // Tag.BODY
    entity_4[entity_0] = 'M'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_8] = 'h'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER