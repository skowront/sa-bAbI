#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_7[80];                                   // Tag.BODY
    entity_2 = 73;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 40; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'E';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER