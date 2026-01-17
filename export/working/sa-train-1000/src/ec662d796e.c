#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_1[73];                                   // Tag.BODY
    entity_5 = 54;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2 = 95;                                       // Tag.BODY
    char entity_3[85];                                   // Tag.BODY
    for(entity_9 = 80; entity_9 < entity_5; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_9] = 'Y';                            // Tag.BUFWRITE_COND_SAFE
    entity_1[entity_2] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER