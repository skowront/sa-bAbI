#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_7[59];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_5 = 23;                                       // Tag.BODY
    entity_3 = 28;                                       // Tag.BODY
    entity_7[entity_3] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_2[44];                                   // Tag.BODY
    for(entity_6 = 35; entity_6 < entity_5; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_6] = 'P';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER