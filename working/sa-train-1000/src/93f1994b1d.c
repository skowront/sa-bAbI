#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[61];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = 30;                                       // Tag.BODY
    for(entity_3 = 91; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER