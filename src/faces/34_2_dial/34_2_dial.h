
// File generated by bin2lvgl
// developed by fbiego. 
// https://github.com/fbiego
// Watchface: 34_2_DIAL

#ifndef _FACE_34_2_DIAL_H
#define _FACE_34_2_DIAL_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"

    extern lv_obj_t *face_34_2_dial;
	extern lv_obj_t *face_34_2_dial_0_304;
	extern lv_obj_t *face_34_2_dial_1_58396;
	extern lv_obj_t *face_34_2_dial_2_58427;
	extern lv_obj_t *face_34_2_dial_3_58427;
	extern lv_obj_t *face_34_2_dial_4_58396;
	extern lv_obj_t *face_34_2_dial_5_58427;
	extern lv_obj_t *face_34_2_dial_6_58427;
	extern lv_obj_t *face_34_2_dial_7_58427;
	extern lv_obj_t *face_34_2_dial_8_58427;
	extern lv_obj_t *face_34_2_dial_9_59419;
	extern lv_obj_t *face_34_2_dial_10_59419;
	extern lv_obj_t *face_34_2_dial_11_86291;
	extern lv_obj_t *face_34_2_dial_12_86291;
	extern lv_obj_t *face_34_2_dial_14_118067;


	LV_IMG_DECLARE(face_34_2_dial_dial_img_0_304_0);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_1_58396_0);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_0);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_1);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_2);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_3);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_4);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_5);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_6);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_7);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_8);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_2_58427_9);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_0);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_1);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_2);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_3);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_4);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_5);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_6);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_7);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_8);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_9_59419_9);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_0);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_1);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_2);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_3);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_4);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_5);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_6);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_7);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_8);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_11_86291_9);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_13_113625_0);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_13_113625_1);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_13_113625_2);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_13_113625_3);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_13_113625_4);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_13_113625_5);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_13_113625_6);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_14_118067_0);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_14_118067_1);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_14_118067_2);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_14_118067_3);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_14_118067_4);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_14_118067_5);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_14_118067_6);
	LV_IMG_DECLARE(face_34_2_dial_dial_img_preview_0);


    void onFaceEvent(lv_event_t * e);

    void init_face_34_2_dial(void);
    void update_time_34_2_dial(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday);
    void update_weather_34_2_dial(int temp, int icon);
    void update_status_34_2_dial(int battery, bool connection);
    void update_activity_34_2_dial(int steps, int distance, int kcal);
    void update_health_34_2_dial(int bpm, int oxygen);


#ifdef __cplusplus
}
#endif

#endif
