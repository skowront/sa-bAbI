#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 7;                                        // Tag.BODY
    char entity_4[12];                                   // Tag.BODY
    entity_5 = 4;                                        // Tag.BODY
    char entity_6[68];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 19; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 65;                                       // Tag.BODY
    entity_4[entity_9] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[11];                                   // Tag.BODY
    entity_3[entity_8] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_5] = 's';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER