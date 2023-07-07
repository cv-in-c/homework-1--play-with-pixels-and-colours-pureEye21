#include<stdio.h>
#include "src\image.h"
#include "src\stb_image_write.h"
#include "src\stb_image.h"
#include "src\args.h"
#include "src\args.h"
// image load_image(char *filename);
int main(){
    image dog = load_image("download.jpg");
    rgb_to_hsv(dog);
    shift_image(dog, 1, 0.2);
    clamp_image(dog);
    hsv_to_rgb(dog);
    save_image(dog, "gray");
    return 0;
}