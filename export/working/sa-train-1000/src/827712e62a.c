#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_9[12];                                   // Tag.BODY
    entity_4 = 17;                                       // Tag.BODY
    for(entity_5 = 70; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'o';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER