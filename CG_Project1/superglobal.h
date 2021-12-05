//////////////////////// START GENERAL ////////////////////////
static const int SCREEN_WIDTH = 1280;
static const int SCREEN_HEIGHT = 720;
static const double PI = 3.141592653;
static int frame = 0, scene_counter = 1;
static bool isRunning = true;

//////////////////////// END GENERAL ////////////////////////



//////////////////////// START SCENE 1 ////////////////////////

//flag
bool isScene_1 = true;
bool isIdle_S1 = false;
bool isAnima_S1 = true;
bool flag_S1 = true;

//man leg scene 2
float manlegL_angle = 0, manlegR_angle = 0, 
manleg_angle_move, manleg_move_x, 
manleg_move_y, manleg_count = 0, 
manR_leg_lost, manL_leg_lost;

//man arms scene 2
float manarmL_angle = 0, manarmR_angle = 0, 
manarm_angle_move, manarm_move_x, 
manarm_move_y, manarm_count = 0, 
manR_arm_lost, manL_arm_lost;

//man animation scene 2
float man_movex, man_movey, man_count = 0, 
man_slidex, man_slidey, manR_lost, manL_lost;

//////////////////////// END SCENE 1 ////////////////////////



//////////////////////// START SCENE 2 ////////////////////////

//general
int infected_frame = 2500;

//heart
int heartbeep = 0;
static bool heartFlag = true;

//ken leg scene 2
float kenlegL_angle = 0, kenlegR_angle = 0, 
kenleg_angle_move, kenleg_move_x, 
kenleg_move_y, kenleg_count = 0, 
kenR_leg_lost, kenL_leg_lost;

//ken arms scene 2
float kenarmL_angle = 0, kenarmR_angle = 0, 
kenarm_angle_move, kenarm_move_x, 
kenarm_move_y, kenarm_count = 0, 
kenR_arm_lost, kenL_arm_lost;

//ken animation scene 2
float ken_movex, ken_movey, ken_count = 0, 
ken_slidex, ken_slidey, kenR_lost, kenL_lost;

//lisa leg 
float lisalegL_angle = 0, lisalegR_angle = 0, 
lisaleg_angle_move, lisaleg_move_x, 
lisaleg_move_y, lisaleg_count = 0, 
lisaR_leg_lost, lisaL_leg_lost;

//lisa arms 
float lisaarmL_angle = 0, lisaarmR_angle = 0, 
lisaarm_angle_move, lisaarm_move_x, 
lisaarm_move_y, lisaarm_count = 0, 
lisaR_arm_lost, lisaL_arm_lost;

//lisa animation 
float lisa_movex, lisa_movey, 
lisa_count = 0, lisa_slidex = 1100, 
lisa_slidey, lisaR_lost, lisaL_lost;

//////////////////////// END SCENE 2 ////////////////////////



//////////////////////// START SCENE 3 ////////////////////////

float textDamage_slidey = 0, backForthValue = 0;
static bool backForth = true;

//////////////////////// END SCENE 3 ////////////////////////



//////////////////////// START SCENE 4 ////////////////////////

float theta;
static float move_Covid = 0;

//////////////////////// END SCENE 4 ////////////////////////



//////////////////////// START SCENE 5 ////////////////////////

//////////////////////// END SCENE 5 ////////////////////////
