#include <UnknownWord.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
SDL_Surface* surface = nullptr;
SDL_Texture* texture = nullptr;
SDL_Event event;
void draw_text(const char* msg, SDL_Rect rect, SDL_Renderer* ren){
    TTF_Font* font = TTF_OpenFont("JOKERMAN.ttf", 50);

    SDL_Color color = {255, 0, 255, 255};
    SDL_Surface* sur = TTF_RenderText_Solid(font, msg, color);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, sur);

    SDL_RenderCopy(ren, tex, NULL, &rect);
    SDL_FreeSurface(sur);
    SDL_DestroyTexture(tex);
}
void waitUntilKeyPressed(string word, string &mystery_word, bool &correct_guess, SDL_Rect mystery_rect, SDL_Renderer* ren){
    SDL_Event e;
    bool wait =true;
    while (wait) {
        if (SDL_WaitEvent(&e) != 0)
        {   if (e.type == SDL_KEYDOWN){
                switch(e.key.keysym.sym)
                {
                    case SDLK_a:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'a') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'a';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_b:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'b') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'b';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_c:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'c') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'c';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_d:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'd') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'd';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_e:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'e') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'e';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_f:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'f') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'f';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_g:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'g') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'g';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_h:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'h') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'h';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_i:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'i') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'i';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_j:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'j') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'j';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_k:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'k') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'k';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_l:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'l') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'l';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_m:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'm') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'm';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_n:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'b') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'b';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_o:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'o') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'o';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_p:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'p') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'p';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_q:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'q') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'q';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_r:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'r') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'r';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_s:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 's') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 's';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_t:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 't') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 't';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_u:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'u') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'u';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_v:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'v') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'v';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_w:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'w') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'w';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_x:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'x') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'x';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_y:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'y') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'y';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                    case SDLK_z:{
                        for(int i = 0; i< word.length(); i++)
                        {
                            if(word[i] == 'z') // check xem tu co chu da doan ko
                            {
                                mystery_word[i] = 'z';
                                draw_text(mystery_word.c_str(),mystery_rect,ren);
                                correct_guess = true;
                            }
                        }
                        wait= false; break;
                    }
                }
            }
        }

    }
}
void draw_image(const char* filename){
    surface = IMG_Load(filename);
    texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_DestroyTexture(texture);
    SDL_RenderPresent(renderer);
}
void music(){
    Mix_Music* music = nullptr;
    music = Mix_LoadMUS("pictures/Coffin_Dance.mp3");
    Mix_PlayMusic(music, -1);
}
void effect(){
    Mix_Chunk* chunk = nullptr;
    chunk = Mix_LoadWAV("pictures/OMG.wav");
    Mix_PlayChannel(-1, chunk, 0);
}
int main( int argc, char* argv[])
{
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
        cout << " failed to initialized SDL " << SDL_GetError() << endl;
        return -1;
    }
    window = SDL_CreateWindow(" A VERY NEW GAME ", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    if(window == nullptr){
        cout << " failed to create window " << SDL_GetError() << endl;
        return -1;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(renderer == nullptr){
        cout << "failed to create renderer " << SDL_GetError() << endl;
        return -1;
    }
    if(TTF_Init() < 0){
        cout << "failed to initialized TTF " << TTF_GetError() << endl;
        return -1;
    }
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) != 0){
        cout << " failed to load music " << Mix_GetError() << endl;
    }
    int tries = 8; // so lan doan
    bool correct_guess = false;
    bool isRunning = true;

    UnknownWord obj;
    string word = obj.m_word ;
    string mystery_word(word.length(), '*');

    draw_image("pictures/background.png");
    SDL_Rect mystery_rect = {400,100,100,60};
    SDL_Rect tries_rect = {700, 100, 60, 60};
    bool waitEvent =true;

    while(isRunning){
        music();
        draw_text(mystery_word.c_str(), mystery_rect, renderer);
        SDL_RenderPresent(renderer);
        waitUntilKeyPressed(word, mystery_word, correct_guess, mystery_rect, renderer);
        correct_guess = false; // reset bool

        if(word == mystery_word){
                draw_image("pictures/passed.png");
                SDL_Delay(3000);
                break;
            }
        if(correct_guess == false){
                tries--;
            }
        switch(tries)
            {
                case 7:
                {
                    draw_image("pictures/hang.png");
                    draw_text("6", tries_rect, renderer);
                    effect();
                    break;
                }
                case 6:
                {
                    draw_image("pictures/hang_head.png");
                    draw_text("5", tries_rect, renderer);
                    effect();
                    break;
                }
                case 5:
                {
                    draw_image("pictures/hang_body.png");
                    draw_text("4", tries_rect, renderer);
                    effect();
                    break;
                }
                case 4:
                {
                    draw_image("pictures/hang_leftarm.png");
                    draw_text("3", tries_rect, renderer);
                    effect();
                    break;
                }
                case 3:
                {
                    draw_image("pictures/hang_rightarm.png");
                    draw_text("2", tries_rect, renderer);
                    effect();
                    break;
                }
                case 2:
                {
                    draw_image("pictures/hang_leftleg.png");
                    draw_text("1", tries_rect, renderer);
                    effect();
                    break;
                }
                case 1:
                {
                    draw_image("pictures/hang_rightleg.png");
                    draw_text("0", tries_rect, renderer);
                    effect();
                    tries = 0;
                    break;
                }
                default:
                    cout << "if this line appear, the program has bugs !" << endl;
                }

            if(tries == 0){
                draw_image("pictures/wasted.png");
                SDL_Delay(3000);
                isRunning = false;
            }
        }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    Mix_Quit();
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
    return 0;
}
