#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_9 = 37;                                       // Tag.BODY
    char entity_7[27];                                   // Tag.BODY
    for(entity_8 = 16; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_8] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER