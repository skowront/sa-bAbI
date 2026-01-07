#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_8[82];                                   // Tag.BODY
    entity_7 = 51;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 75; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'l';                            // Tag.BUFWRITE_COND_SAFE
    char entity_6[29];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 34;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[13];                                   // Tag.BODY
    entity_1 = 69;                                       // Tag.BODY
    entity_6[entity_1] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_2] = 'R';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER