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

extern const char PLAY_FILE01[6];
extern const char PLAY_FILE02[6];
extern const char PLAY_FILE03[6];
extern const char PLAY_FILE04[6];
extern const char PLAY_FILE05[6];
extern const char PLAY_FILE06[6];
extern const char PLAY_FILE07[6];
extern const char PLAY_FILE08[6];
extern const char PLAY_FILE09[6];
extern const char PLAY_FILE10[6];
extern const char PLAY_FILE11[6];
extern const char PLAY_FILE12[6];
extern const char PLAY_FILE13[6];
extern const char PLAY_FILE14[6];
extern const char PLAY_FILE15[6];
extern const char PLAY_FILE16[6];
extern const char PLAY_FILE17[6];
extern const char PLAY_FILE18[6];
extern const char PLAY_FILE19[6];
extern const char PLAY_FILE20[6];
extern const char PLAY_FILE21[6];
extern const char PLAY_FILE22[6];
extern const char PLAY_FILE23[6];
extern const char PLAY_FILE24[6];
extern const char PLAY_FILE25[6];
extern const char PLAY_FILE26[6];
extern const char PLAY_FILE27[6];
extern const char PLAY_FILE28[6];
extern const char PLAY_FILE29[6];
extern const char PLAY_FILE30[6];

extern const char SET_VOLUME_VERY_LOW[5];
extern const char SET_VOLUME_LOW[5];
extern const char SET_VOLUME_MEDIUM[5];
extern const char SET_VOLUME_HIGH[5];
extern const char SET_VOLUME_VERY_HIGH[5];
extern const char SET_VOLUME_MAXIMUM[5];

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