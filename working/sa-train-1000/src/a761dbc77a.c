#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[92];                                   // Tag.BODY
    char entity_5[30];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 46;                                       // Tag.BODY
    entity_6 = 2;                                        // Tag.BODY
    for(entity_2 = 48; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_3] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER