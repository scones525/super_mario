#ifndef IMARIO_H
#define IMARIO_H
#pragma once

class IMario
{
public:


	bool get_dead() const;

	float get_vertical_speed() const;
	float get_x() const;

	void die(const bool i_instant_death);
	void draw(sf::RenderWindow& i_window);
	void draw_mushrooms(const unsigned i_view_x, sf::RenderWindow& i_window);
	void reset();
	void set_position(const float i_x, const float i_y);
	void set_vertical_speed(const float i_value);
	void update(const unsigned i_view_x, MapManager& i_map_manager);

	sf::FloatRect get_hit_box() const;

	//my function to clean code
	bool is_moving_or_not(int);
	bool user_press_left();
	bool user_press_right();
	bool user_press_down();
	bool user_press_up();
};

#endif