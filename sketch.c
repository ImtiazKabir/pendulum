#include <allegro5/allegro_primitives.h>
#include <stdio.h>
#include "sketch.h"

#define _USE_MATH_DEFINES
#include <math.h>


float l, g, theta, dtheta_dt, hx, hy;

// This code in setup will be run only once
void setup() {
	l = HEIGHT/2.0;
	g = 0.25;
	theta = 100 * (M_PI/180);
	dtheta_dt = 0;
	hx = WIDTH/2.0;
	hy = HEIGHT/4.0;
}


// This code in draw will run every frame
void draw() {
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_filled_circle(hx, hy, 5, al_map_rgb(200, 0, 200));

	// drawing portion
	float x = hx + l * sin(theta);
	float y = hy + l * cos(theta);
	al_draw_line(hx, hy, x, y, al_map_rgb(0, 0, 0), 2);
	al_draw_filled_circle(x, y, 10, al_map_rgb(0, 71, 171));

	// calculation portion
	theta += dtheta_dt;
	dtheta_dt -= (g/l) * sin(theta);
}



void mousePressed(bool lmb) {
	// Handle mouse click events here
}
	


void keyPressed(int keyCode) {
	// Handle key press events
}