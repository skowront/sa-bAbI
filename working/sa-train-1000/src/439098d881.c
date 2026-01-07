#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_0[87];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 25;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    if (entity_6 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 38;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 30; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_8[52];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0[entity_5] = 'C';                            // Tag.BUFWRITE_COND_SAFE
    entity_2 = 45;                                       // Tag.BODY
    entity_8[entity_2] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER