#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 20;                                       // Tag.BODY
    char entity_2[1];                                    // Tag.BODY
    for(entity_6 = 34; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_1[24];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2[entity_6] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 99;                                       // Tag.BODY
    entity_1[entity_4] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER