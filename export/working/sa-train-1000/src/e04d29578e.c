#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_0[87];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_3[21];                                   // Tag.BODY
    char entity_5[97];                                   // Tag.BODY
    entity_7 = 83;                                       // Tag.BODY
    entity_6 = 64;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_4 = 55;                                       // Tag.BODY
    for(entity_8 = 49; entity_8 < entity_6; entity_8++){ // Tag.BODY
    entity_0[entity_4] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_5[entity_7] = 'S';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_8] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER