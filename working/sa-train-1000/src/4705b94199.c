#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[7];         // Tag.BODY
    entity_8 = 80;            // Tag.BODY
    entity_0 = 76;            // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    entity_8 = 71;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 83;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[75];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_2 = 50;            // Tag.BODY
    char entity_4[24];        // Tag.BODY
    entity_4[entity_2] = 'A'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_8] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 77;            // Tag.BODY
    entity_7[entity_6] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER