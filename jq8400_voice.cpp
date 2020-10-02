/**
 * @file jq8400_voice.cpp
 * @author Felícito Manzano (felicito.manzano@detektor.com.sv)
 * @brief 
 * @version 0.1
 * @date 2020-09-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "mbed.h"

    //PLAY BY NAME
    /**
     * @brief 
     * 
     */
    const char PLAY_FILE01[] = {0xAA, 0x07, 0x02, 0x00, 0x01, 0xB4};
    const char PLAY_FILE02[] = {0xAA, 0x07, 0x02, 0x00, 0x02, 0xB5};
    const char PLAY_FILE03[] = {0xAA, 0x07, 0x02, 0x00, 0x03, 0xB6};
    const char PLAY_FILE04[] = {0xAA, 0x07, 0x02, 0x00, 0x04, 0xB7};
    const char PLAY_FILE05[] = {0xAA, 0x07, 0x02, 0x00, 0x05, 0xB8};
    const char PLAY_FILE06[] = {0xAA, 0x07, 0x02, 0x00, 0x06, 0xB9};
    const char PLAY_FILE07[] = {0xAA, 0x07, 0x02, 0x00, 0x07, 0xBA};
    const char PLAY_FILE08[] = {0xAA, 0x07, 0x02, 0x00, 0x08, 0xBB};
    const char PLAY_FILE09[] = {0xAA, 0x07, 0x02, 0x00, 0x09, 0xBC};
    const char PLAY_FILE10[] = {0xAA, 0x07, 0x02, 0x00, 0x0A, 0xBD};
    const char PLAY_FILE11[] = {0xAA, 0x07, 0x02, 0x00, 0x0B, 0xBE};
    const char PLAY_FILE12[] = {0xAA, 0x07, 0x02, 0x00, 0x0C, 0xBF};
    const char PLAY_FILE13[] = {0xAA, 0x07, 0x02, 0x00, 0x0D, 0xC0};
    const char PLAY_FILE14[] = {0xAA, 0x07, 0x02, 0x00, 0x0E, 0xC1};
    const char PLAY_FILE15[] = {0xAA, 0x07, 0x02, 0x00, 0x0F, 0xC2};
    const char PLAY_FILE16[] = {0xAA, 0x07, 0x02, 0x00, 0x10, 0xC3};
    const char PLAY_FILE17[] = {0xAA, 0x07, 0x02, 0x00, 0x11, 0xC4};
    const char PLAY_FILE18[] = {0xAA, 0x07, 0x02, 0x00, 0x12, 0xC5};
    const char PLAY_FILE19[] = {0xAA, 0x07, 0x02, 0x00, 0x13, 0xC6};
    const char PLAY_FILE20[] = {0xAA, 0x07, 0x02, 0x00, 0x14, 0xC7};
    const char PLAY_FILE21[] = {0xAA, 0x07, 0x02, 0x00, 0x15, 0xC8};
    const char PLAY_FILE22[] = {0xAA, 0x07, 0x02, 0x00, 0x16, 0xC9};
    const char PLAY_FILE23[] = {0xAA, 0x07, 0x02, 0x00, 0x17, 0xCA};
    const char PLAY_FILE24[] = {0xAA, 0x07, 0x02, 0x00, 0x18, 0xCB};
    const char PLAY_FILE25[] = {0xAA, 0x07, 0x02, 0x00, 0x19, 0xCC};
    const char PLAY_FILE26[] = {0xAA, 0x07, 0x02, 0x00, 0x1A, 0xCD};
    const char PLAY_FILE27[] = {0xAA, 0x07, 0x02, 0x00, 0x1B, 0xCE};
    const char PLAY_FILE28[] = {0xAA, 0x07, 0x02, 0x00, 0x1C, 0xCF};
    const char PLAY_FILE29[] = {0xAA, 0x07, 0x02, 0x00, 0x1D, 0xD0};
    const char PLAY_FILE30[] = {0xAA, 0x07, 0x02, 0x00, 0x1E, 0xD1};

    //VOLUME
    /**
     * @brief 
     * 
     */
    const char SET_VOLUME_VERY_LOW[]    = {0xAA, 0x13, 0x01, 0x05, 0xC3};
    const char SET_VOLUME_LOW[]         = {0xAA, 0x13, 0x01, 0x0A, 0xC8};
    const char SET_VOLUME_MEDIUM[]      = {0xAA, 0x13, 0x01, 0x0F, 0xCD};
    const char SET_VOLUME_HIGH[]        = {0xAA, 0x13, 0x01, 0x14, 0xD2};
    const char SET_VOLUME_VERY_HIGH[]   = {0xAA, 0x13, 0x01, 0x19, 0xD7};
    const char SET_VOLUME_MAXIMUM[]     = {0xAA, 0x13, 0x01, 0x1E, 0xDC};



/**
 * @brief 
 * 
 * @param id_voice_file 
 * @param puertoCOM 
 * @return true 
 * @return false 
 */
extern bool jq8400_playID(int id_voice_file, Serial *puertoCOM) {
    bool result_play = false;

    switch (id_voice_file) {
        case 1:
            puertoCOM->printf("%s\r\n", PLAY_FILE01);
            result_play = true;
            break;

        case 2:
            puertoCOM->printf("%s\r\n", PLAY_FILE02);
            result_play = true;
            break;
            
        case 3:
            puertoCOM->printf("%s\r\n", PLAY_FILE03);
            result_play = true;
            break;
            
        case 4:
            puertoCOM->printf("%s\r\n", PLAY_FILE04);
            result_play = true;
            break;
            
        case 5:
            puertoCOM->printf("%s\r\n", PLAY_FILE05);
            result_play = true;
            break;
            
        case 6:
            puertoCOM->printf("%s\r\n", PLAY_FILE06);
            result_play = true;
            break;
            
        case 7:
            puertoCOM->printf("%s\r\n", PLAY_FILE07);
            result_play = true;
            break;
            
        case 8:
            puertoCOM->printf("%s\r\n", PLAY_FILE08);
            result_play = true;
            break;
            
        case 9:
            puertoCOM->printf("%s\r\n", PLAY_FILE09);
            result_play = true;
            break;
            
        case 10:
            puertoCOM->printf("%s\r\n", PLAY_FILE10);
            result_play = true;
            break;
            
        case 11:
            puertoCOM->printf("%s\r\n", PLAY_FILE11);
            result_play = true;
            break;
            
        case 12:
            puertoCOM->printf("%s\r\n", PLAY_FILE12);
            result_play = true;
            break;
            
        case 13:
            puertoCOM->printf("%s\r\n", PLAY_FILE13);
            result_play = true;
            break;
            
        case 14:
            puertoCOM->printf("%s\r\n", PLAY_FILE14);
            result_play = true;
            break;
            
        case 15:
            puertoCOM->printf("%s\r\n", PLAY_FILE15);
            result_play = true;
            break;
            
        case 16:
            puertoCOM->printf("%s\r\n", PLAY_FILE16);
            result_play = true;
            break;
            
        case 17:
            puertoCOM->printf("%s\r\n", PLAY_FILE17);
            result_play = true;
            break;
            
        case 18:
            puertoCOM->printf("%s\r\n", PLAY_FILE18);
            result_play = true;
            break;
            
        case 19:
            puertoCOM->printf("%s\r\n", PLAY_FILE19);
            result_play = true;
            break;
            
        case 20:
            puertoCOM->printf("%s\r\n", PLAY_FILE20);
            result_play = true;
            break;
            
        case 21:
            puertoCOM->printf("%s\r\n", PLAY_FILE21);
            result_play = true;
            break;
            
        case 22:
            puertoCOM->printf("%s\r\n", PLAY_FILE22);
            result_play = true;
            break;
            
        case 23:
            puertoCOM->printf("%s\r\n", PLAY_FILE23);
            result_play = true;
            break;
            
        case 24:
            puertoCOM->printf("%s\r\n", PLAY_FILE24);
            result_play = true;
            break;
            
        case 25:
            puertoCOM->printf("%s\r\n", PLAY_FILE25);
            result_play = true;
            break;
            
        case 26:
            puertoCOM->printf("%s\r\n", PLAY_FILE26);
            result_play = true;
            break;
            
        case 27:
            puertoCOM->printf("%s\r\n", PLAY_FILE27);
            result_play = true;
            break;
            
        case 28:
            puertoCOM->printf("%s\r\n", PLAY_FILE28);
            result_play = true;
            break;
            
        case 29:
            puertoCOM->printf("%s\r\n", PLAY_FILE29);
            result_play = true;
            break;

        case 30:
            puertoCOM->printf("%s\r\n", PLAY_FILE30);
            result_play = true;
            break;

        default:
            result_play = false;
    }
    return(result_play);
}