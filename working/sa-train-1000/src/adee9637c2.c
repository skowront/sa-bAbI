#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_8[51];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 88;                                       // Tag.BODY
    for(entity_5 = 94; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER