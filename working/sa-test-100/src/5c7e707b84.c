#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[72];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_5 = 11;                                       // Tag.BODY
    char entity_9[6];                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2 = 70;                                       // Tag.BODY
    for(entity_4 = 50; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'Y';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_4] = 'p';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER