#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[15];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_5 = 85;                                       // Tag.BODY
    for(entity_0 = 34; entity_0 < entity_5; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_7[90];                                   // Tag.BODY
    entity_2[entity_0] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[4];                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 50;                                       // Tag.BODY
    entity_6 = 9;                                        // Tag.BODY
    entity_9[entity_6] = 'O';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_1] = 's';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER