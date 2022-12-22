#ifndef MARIO_H
#define MARIO_H


#pragma once

class MarioState;
class Mario 
{
	bool crouching;
	bool dead;
	bool flipped;
	bool on_ground;
	
	float enemy_bounce_speed;
	float horizontal_speed;
	float vertical_speed;
	float x;
	float y;

	//The longer we press the jump button, the higher Mario jumps. And we use this variable for that.
	unsigned char jump_timer;
	//I was thinking about adding Fire Mario.
	//But I figured that it's gonna be too much work and I'm too lazy for that.
	//Maybe in the next part?
	unsigned char powerup_state;

	unsigned short death_timer;
	unsigned short growth_timer;
	unsigned short invincible_timer;

	std::vector<Mushroom> mushrooms;

	sf::Sprite sprite;

	sf::Texture texture;

	Animation big_walk_animation;
	Animation walk_animation;

public:

	

	Mario();

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


	void update_state_is_dead();
	void update_moving_state(bool moving);
	void update_change_moving_state(MapManager& i_map_manager);
	bool update_horizon_move(MapManager& i_map_manager);
	void update_verticle_move(MapManager& i_map_manager);
	void update_is_moving_now(MapManager& i_map_manager,bool moving);
	void update_eat_mushroom(MapManager& i_map_manager,const unsigned i_view_x);
	void update_coin(MapManager& i_map_manager);
public: 
	enum State{
		ST_small,
		ST_big
	};

	void smallTobig();
	void BigTosmall();
	void setState(State state);
private:
	MarioState *m_pState;
};


bool is_moving_or_not(int);
bool user_press_left();
bool user_press_right();
bool user_press_down();
bool user_press_up();
#endif