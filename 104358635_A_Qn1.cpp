#include <iostream>
#include "splashkit.h"

int main()
{
    open_window("Button drawing", 800, 800);
    clear_screen(COLOR_WHITE);

    while (not quit_requested())
    {
        process_events();

        //button 1
        fill_rectangle(COLOR_RED, 0, 0, 50, 50);
        draw_text("B1", COLOR_WHITE, 20, 20);

        //button 2
        fill_rectangle(COLOR_BLUE, 750, 0, 50, 50);
        draw_text("B2", COLOR_WHITE, 770, 20);

        if (mouse_clicked(LEFT_BUTTON) && mouse_x() <= 50 && mouse_y() <= 50)
        
        {clear_screen(COLOR_LIGHT_BLUE);
            //darwing
             
            fill_rectangle(COLOR_BROWN, 0,425,800,50);

            //Bird legs
            fill_rectangle(COLOR_BLACK, 400, 390, 10, 40);
            fill_rectangle(COLOR_BLACK, 450, 390, 10, 40);
            fill_rectangle(COLOR_BLACK, 395, 430, 25, 10);
            fill_rectangle(COLOR_BLACK, 445, 430, 25, 10);

            //Bird face
            fill_circle(COLOR_ORANGE,250,300,50);

            //Bird beak 
            fill_triangle(COLOR_RED, 150, 300,200,285, 200, 315);
            
            // Bird eye 
            fill_circle(COLOR_BLACK,225,285,10);

            //Body
            fill_ellipse(COLOR_ORANGE, 300, 200, 250, 200);

            refresh_screen(60);
        }
        
        else if (mouse_clicked(LEFT_BUTTON) && mouse_x() >= 750 && mouse_y() <= 50)
        {
            clear_screen(COLOR_LIGHT_BLUE);
            // Drawing

            // Draw ground
            fill_rectangle(COLOR_GREEN, 0, 450, 800, 150);

            // Draw walls
            fill_rectangle(COLOR_BROWN, 200, 350, 400, 100);

            // Draw walls
            fill_rectangle(COLOR_BROWN, 350, 250, 100, 50);

            // Draw factory chimney
            fill_rectangle(COLOR_BLACK, 440, 200, 20, 50);

            // Draw ellipse as a cloud
            fill_ellipse(COLOR_WHITE, 400, 100, 200, 90);

            // Draw windows
            fill_circle(COLOR_WHITE, 280, 380, 20);
            fill_circle(COLOR_WHITE, 400, 380, 20);
            fill_circle(COLOR_WHITE, 520, 380, 20);

            // Draw triangular roof
            fill_triangle(COLOR_GRAY, 200, 350, 600, 350, 400, 200);

            refresh_screen(60);
        
            
    
            
        }
        refresh_screen(60);
    }

    return 0;
}
