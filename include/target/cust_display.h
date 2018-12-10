/*

// new animation parameters example:WVGA (480*800)
// A , start point of first number rectangle
// B , left_top point of battery_capacity fill_in rectangle
// c , left_bottom point of battery_capacity fill_in rectangle

// battery capacity rectangle
#define CAPACITY_LEFT                (172) // CAPACITY_LEFT = B.x = 172
#define CAPACITY_TOP                 (330) // CAPACITY_TOP = B.y = 330
#define CAPACITY_RIGHT               (307) // CAPACITY_RIGHT = B.x + fill_line.w = 172 + 135
#define CAPACITY_BOTTOM              (546) // CAPACITY_BOTTOM  = C.y = 546

// first number rectangle
#define NUMBER_LEFT                  (178) // NUMBER_LEFT = A.x
#define NUMBER_TOP                   (190) // NUMBER_TOP  = A.y
#define NUMBER_RIGHT                 (216) // NUMBER_RIGHT = A.x + num.w = 178 + 38
#define NUMBER_BOTTOM                (244) // NUMBER_BOTTOM = A.y + num.h = 190 + 54

// %  rectangle
#define PERCENT_LEFT                 (254) // PERCENT_LEFT = A.x + 2*num.w = 178 + 2*38
#define PERCENT_TOP                  (190) // PERCENT_TOP  = A.y
#define PERCENT_RIGHT                (302) // PERCENT_LEFT = A.x + 2*num.w +(%).w 
#define PERCENT_BOTTOM               (244) // PERCENT_BOTTOM = A.y + (%).h = 190 + 54

// top animation part
#define TOP_ANIMATION_LEFT           (172) // TOP_ANIMATION_LEFT = B.x
#define TOP_ANIMATION_TOP            (100) // 100 
#define TOP_ANIMATION_RIGHT          (307) // TOP_ANIMATION_LEFT = B.x + fill_line.w = 172 + 135
#define TOP_ANIMATION_BOTTOM         (124) // TOP_ANIMATION_BOTTOM = TOP_ANIMATION_TOP + fill_line.h = 100 + 24

*/


#ifndef __CUST_DISPLAY_H__
#define __CUST_DISPLAY_H__

// color
#define BAR_OCCUPIED_COLOR  (0x07E0)    // Green
#define BAR_EMPTY_COLOR     (0xFFFF)    // White
#define BAR_BG_COLOR        (0x0000)    // Black

// LOGO number
#define ANIM_V0_LOGO_NUM   		5            // version 0: show 4 recatangle growing animation without battery number
#define ANIM_V1_LOGO_NUM   		39           // version 1: show wave animation with  battery number 
#define ANIM_V2_LOGO_NUM   		68           // version 2: show wireless charging animation      

// Common LOGO index
#define BOOT_LOGO_INDEX      	0 
#define KERNEL_LOGO_INDEX    	38 
#define LCM_LOGO_MAX_INDEX   	39 /* Added start by Eli at 2014-07-30 15:18  */

#define ANIM_V0_BACKGROUND_INDEX   1 
#define ANIM_V1_BACKGROUND_INDEX   35
 
 
#define LOW_BATTERY_INDEX   	2 
#define CHARGER_OV_INDEX   		3 
#define FULL_BATTERY_INDEX   	37 

// version 1: show wave animation with  battery number 

// NUMBER LOGO INDEX
#define NUMBER_PIC_START_0   	4 
#define NUMBER_PIC_PERCENT   	14 

// DYNAMIC ANIMATION LOGO INDEX
#define BAT_ANIM_START_0   		15 

// LOW BATTERY(0~10%) ANIMATION LOGO
#define LOW_BAT_ANIM_START_0    25 

#define ANIM_LINE_INDEX   		36 


// version 2: show wireless charging animation logo index

#define V2_NUM_START_0_INDEX  	39  
#define V2_NUM_PERCENT_INDEX  	49 
 
#define V2_BAT_0_10_START_INDEX     50  
#define V2_BAT_10_40_START_INDEX    54 
#define V2_BAT_40_80_START_INDEX    58 
#define V2_BAT_80_100_START_NDEX    62

#define V2_BAT_0_INDEX   			66
#define V2_BAT_100_INDEX   			67

// battery capacity rectangle
#define CAPACITY_LEFT                (82) // battery capacity center
#define CAPACITY_TOP                 (97)
#define CAPACITY_RIGHT               (158)
#define CAPACITY_BOTTOM              (214)

// first number rectangle
#define NUMBER_LEFT                  (93) // number
#define NUMBER_TOP                   (9)
#define NUMBER_RIGHT                 (109)
#define NUMBER_BOTTOM                (32)

// %  rectangle
#define PERCENT_LEFT                 (125) // percent number_left + 2*number_width
#define PERCENT_TOP                  (9)
#define PERCENT_RIGHT                (145)
#define PERCENT_BOTTOM               (32)

// top animation part
#define TOP_ANIMATION_LEFT           (82) // top animation
#define TOP_ANIMATION_TOP            (60)
#define TOP_ANIMATION_RIGHT          (158)
#define TOP_ANIMATION_BOTTOM         (73)

#define CAPACITY_LEFT_320            (109) // battery capacity center
#define CAPACITY_TOP_320             (112)
#define CAPACITY_RIGHT_320           (211)
#define CAPACITY_BOTTOM_320          (285)

#define NUMBER_LEFT_320              (136) // number
#define NUMBER_TOP_320               (32)
#define NUMBER_RIGHT_320             (NUMBER_LEFT_320+16)
#define NUMBER_BOTTOM_320            (NUMBER_TOP_320+23)

#define PERCENT_LEFT_320             (174) // percent number_left + 2*number_width
#define PERCENT_TOP_320              (NUMBER_TOP_320)
#define PERCENT_RIGHT_320            (PERCENT_LEFT_320+20)
#define PERCENT_BOTTOM_320           (PERCENT_TOP_320+23)

#define TOP_ANIMATION_LEFT_320       (CAPACITY_LEFT_320) // top animation
#define TOP_ANIMATION_TOP_320        (70)
#define TOP_ANIMATION_RIGHT_320      (TOP_ANIMATION_LEFT_320+101)
#define TOP_ANIMATION_BOTTOM_320     (TOP_ANIMATION_TOP_320+17)

//for old
#define BAR_LEFT				    (97)
#define BAR_TOP             		(96)
#define BAR_RIGHT           		(140)
#define BAR_BOTTOM          		(184)


/* The option of new charging animation */
#define ANIMATION_NEW

#endif // __CUST_DISPLAY_H__
