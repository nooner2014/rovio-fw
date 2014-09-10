#ifndef __DEFINE_DEMOBOARD_V17_H__
#define __DEFINE_DEMOBOARD_V17_H__


#define OPT_USE_LCM
#define OPT_USE_VIDEO_ENCODER
#define OPT_USE_VIDEO_DECODER
#define OPT_USE_AUDIO_ENCODER
#define OPT_USE_AUDIO_DECODER



#define OPT_AUDIO_PLAY_DEVICE				AU_DEV_WM8978
#define OPT_AUDIO_RECORD_DEVICE				AU_DEV_WM8978
#define OPT_GPIO_BIT_CONTROL_SENSOR_POWER	9



//#define OPT_CAPTURE_SENSOR_SOURCE
	




#define OPT_CAPTURE_PLANAR_YUV420
//#define OPT_CAPTURE_PLANAR_YUV422



#define OPT_XIN_CLOCK			13000000
#define OPT_UPLL_OUT_CLOCK		(336 * 1000 * 1000)
#define OPT_APLL_OUT_CLOCK		(49152 * 1000)


#define MAX_STACK_SIZE			(64*1024)
#define MAX_LCM_BYTES_PER_PIXEL	2
#define MAX_LCM_WIDTHxHEIGHT	(320*240)	//(176*220)	//(288*352)
#define MAX_MP4_WIDTHxHEIGHT	(176*144)	//
#define MAX_AMR_ENCODER_LEVEL	7



#endif