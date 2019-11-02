#ifndef OGSE_CONFIG_H
#define OGSE_CONFIG_H

// ������� �� ���������� ����� �������
// ��������								r2_sunshafts [qt_off/qt_low/qt_medium/qt_high/qt_extreme]
// �������� ��������					r2_sunshafts_mode volumetric
// ������� �������� ��� Crysis			r2_sunshafts_mode screen_space
// ������ ����							r2_soft_water [on/off]
// ������ ��������						r2_soft_particles [on/off]
// ������ ����							r2_soft_shadows [qt_off/qt_low/qt_medium/qt_high/qt_extreme]
// SSDO									r2_ssao_mode ssdo
// HBAO									r2_ssao_mode hbao
// Steep Parallax						r2_steep_parallax [qt_off/qt_low/qt_medium/qt_high/qt_extreme]
// Dynamic Depth Of Field				r2_dof [qt_off/qt_low/qt_medium/qt_high/qt_extreme]
// Motion Blur							r2_mblur [on/off]
// Antialiasing							r2_aa [qt_off/qt_low/qt_medium/qt_high/qt_extreme]
// FXAA Antialiasing					r2_aa_mode fxaa
// SMAA Antialiasing					r2_aa_mode smaa
// ��������� ����						r2_detail_bump [on/off]

// PARAMETERS 
// ����������� ��������� ��� ��������� ���������������� �������
/////////////////////////////////////////////////////////////
// ������� ��������
	#define SS_INTENSITY float(0.5)			// ������� �����, �������� ��������� � ����������� �� �������
	#define SS_BLEND_FACTOR float(0.8)		// ������ ���������� � ���������� ������. ��� ������ ��������, ��� ������ "��������" �� �������, �� �������� "����������"
	#define SS_LENGTH float(1.0)			// ����� �����. ��� ������ �����, ��� ������ ������������������

/////////////////////////////////////////////////////////////
// volumetric light
	#define USE_VOLUMETRIC_DUST
	#define SS_VOL_MAX_INTENSITY float(0.170)
	#define VOL_LIGHT_MAX_INTENSITY float(0.015)

/////////////////////////////////////////////////////////////
// Horizon-Based Ambient Occlusion	
	#define HBAO_NUM_STEPS int(3)			// ���������� ���������� ����� ��� ������ ���������. �������� ��������, �������� ������������������
	#define HBAO_RADIUS float(2.0)			// ������ ������ ���������.
	#define HBAO_STEP_SIZE float(4)			// ��� �������������. ������� �������� �������� � ����� ������ �����
	#define HBAO_ANGLE_BIAS float(0.5)		// ���� � �������� ��� ����������� ������������� ����� ��������������� ���������. �����������, ���� ��  ������ ��������� ������� ����.
	#define HBAO_THRESHOLD float(0.3)		// ����� ������������ �������. ��� ������, ��� ����� ������ ������ ����������.
	#define HBAO_GRASS_TUNING float(2.0)	// ��������� ��������� �����. ��� ������, ��� ������ ����������.
	#define HBAO_BLEND_FACTOR float(0.700)
	#define AO_BLUR_FACTOR int(4)
	
/////////////////////////////////////////////////////////////
// improved parallax occlusion mapping
	#define POM_PARALLAX_OFFSET float(0.02)			// ��������. ��� ������, ��� ������ ����� ��������� �������.
	
/////////////////////////////////////////////////////////////
// Gaussian blur
	#define GAUSS_SIGMA float(2.5)
	
/////////////////////////////////////////////////////////////
// Motion blur
	#define MBLUR_CLAMP (0.0025)
	#define MBLUR_SEUS_NOISE_INT (0.75)

/////////////////////////////////////////////////////////////
// Raindrops
	#define DROPS_TURBSIZE 15.f
	#define DROPS_TURBSHIFT float4(0.35, 1, 0, 1)
	#define DROPS_TURBTIME sin(0.1/3.f)
	#define DROPS_TURBCOF 0.33

/////////////////////////////////////////////////////////////
// Ripples
	#define RIPPLES_DISTORTION 0.095f
	#define RIPPLES_FREQUENCY 0.4f
	#define RIPPLES_MAX_RADIUS 2	

/////////////////////////////////////////////////////////////
// Hashed alpha test
	#define H_AREF //enables hashed alpha test 
	#define H_AREF_SCALE float(0.5) //scale
	
/////////////////////////////////////////////////////////////
// depth of field

	//common
	#define DDOF_SKY_DIST float(10000)		// ���������� �� ����. ������, ������ ���� ���� ��������� ��� ����������� ������ �� ����.
	#define DDOF_FOCUS_CIRCLE float(10)		// ������� ������� ������� ������������ ������, � ��������. ���������� �� ���������� ������� ���� ����� ������� ������� ��� ����� ������.
	//far
	#define DDOF_FAR_PLANE float(40)		// ��������� �� ������ �� ������� ��������� �����.
	#define DDOF_FAR_INTENSITY float(1.0)	// ������������� �������. [0..1]
	//near
	#define DDOF_NEAR_PLANE float(10)		// ���������, � ������� ���� ����� �������� �����������. ������ ��������� - ������ �� ������ ����� ���������������� ������� ����
	#define DDOF_NEAR_MINDIST float (1.5)	// ���������� �� ������ �� ��������� ������ ������������. ����������, ����� �� ��������� ������
	#define DDOF_NEAR_INTENSITY float(1.0)	// ������������� �������. [0..1]
	//zoom depth of field
	#define ZDOF_MINDIST float(100)	        // ����������� ��������� �� ������ ������, � ��������. ����� � ������ ����� ���
	#define ZDOF_MAXDIST float(600)			// ������������ ��������� �� ������ ������, � ��������. ������ - ����������� ����.
	#define ZDOF_OFFSET float(2)			// ������ ������� �������, ������� �������� �� ���������� ��� ������� �������� ������.
	#define ZDOF_INTENSITY float(1.0)
	#define ZDOF_MULT float(5)
	//reload depth of field
	#define RDOF_DIST float (1)				// ����������, �� ������� ���������� ����. ���������� ���, ����� �� ��������� ������ (0,7-1,2)
	#define RDOF_SPEED float (5)			// �������� ���������� �������. ������� �������� - 5-1
	#define RDOF_INTENSITY float(1.0)
	#define RDOF_MULT float(5)

/////////////////////////////////////////////////////////////
// ����������
	#define IKV_DIST float(0.1)					// ���������� ���������� ���������
	#define IKV_HEATING_SPEED float(0.1)		// �������� �������/���������� ������
	// �������
	#define IKV_PRESET_1_MIN float(0.274)		// ������� �������������� ����������. ������ ������ � ��� ������, ���� ������, ��� �������.
	#define IKV_PRESET_1_MAX float(0.300)		// PRESET_1 - ������ ��� �����, ��������, ����
	#define IKV_PRESET_2_MIN float(0.837)		// PRESET_2 - ������ ��� ������
	#define IKV_PRESET_2_MAX float(0.862)		
	// �����
	#define IKV_DEAD_COLOR float4(0.0,0.07,0.49,1.0)			// �������� ��������� �����������:
	#define IKV_MID3_COLOR float4(0.203,0.567,0.266,1.0)		// DEAD - ���� �������� ���������
	#define IKV_MID2_COLOR float4(0.644,0.672,0.098,1.0)		// LIVE - ���� ������� ���������
	#define IKV_MID1_COLOR float4(0.7,0.35,0.07,1.0)			// MID - ������������� �����
	#define IKV_LIVE_COLOR float4(0.7,0.16,0.08,1.0)	
	// ������
	#define IKV_NOISE_INTENSITY float(1.0)		// ������������� ����
	
/////////////////////////////////////////////////////////////
// ����
	#define WATER_ENV_POWER float (0.7)				// ������������� ��������� �������� �� ����
	#define PUDDLES_ENV_POWER float (0.3)			// ������������� ��������� �������� �� �����
	#define SW_USE_FOAM								// �������� "����" ������
	#define SW_FOAM_THICKNESS float (0.035)			// ������� "����"
	#define SW_FOAM_INTENSITY float (3)				// ������������� ����� "����"
	#define SW_WATER_INTENSITY float (1.0)			// ������� ����� ����
	#define SW_REFL_INTENSITY float(2.0)			// ������������� "�������" ���������
	#define SW_PUDDLES_REFL_INTENSITY float(3.0)	// ������������� "�������" ��������� � �����
	#define MOON_ROAD_INTENSITY float(1.5)			// ������������� "������ �������"
	#define WATER_GLOSS float(0.5)					// ������������� ��������� �� ����
	#define PUDDLES_GROW_SPEED float(0.200)
	#define USE_MOON_ROAD	
	
/////////////////////////////////////////////////////////////
// ����� �� ����
	#define FL_POWER float(1.0)					// ����� ������������� ������
	#define FL_GLOW_RADIUS float(0.2)			// ������ ������ ��������� �����
	#define FL_DIRT_INTENSITY float(1.0)		// ������������� ������� Lens Dirt
	#define FL_USE_LONG_FLARE	
	
	#define MODEL_SELFLIGHT_POWER float(6.0)	// ������� �������� �������
	#define MODEL_LOW_SELFLIGHT_POWER 2.f
	#define MODEL_RED_SELFLIGHT_POWER 2.f
	
/////////////////////////////////////////////////////////////
// �������, ��������� � ������

	#define RAIN_MAX_DIFFUSE_SCALING float(0.7)				// ������������ ����������� ���������� ���������
	#define RAIN_MAX_DIFFUSE_DETAILS_MULT float(0.9)		// ����������� ���������� ����� ������������ ��������
	#define RAIN_MAX_SPECULAR_SCALING float (3.0)			// ������������ ������� ��������� �����
	#define RAIN_MAX_REFLECTION_POWER float(0.1)			// ������������ ���� ���������
	#define RAIN_WETTING_SPEED float(0.5)					// �������� ��������� ������������
	#define RAIN_GAIN_REFLECTIONS float(3.0)				// �������� ������� ��������� �� �������� ������������

	// test params, not used now
	#define RMAP_KERNEL float(1.0)
	#define RMAP_size float(2048)
	#define RMAP_MAX_ENV_MAP_COEFF float(0.1)

/////////////////////////////////////////////////////////////
// ����� �� �����
//	#define USE_GRASS_WAVE							// �������� "�����" �� ����� �� �����
	#define GRASS_WAVE_POWER float(2.0)				// "�������", ���������� ����
	#define GRASS_WAVE_FREQ float(0.7)				// ������� ��������� ����

/////////////////////////////////////////////////////////////
// ��������� �������������� ���������
	#define TRANSLUCENT_GLOSS float(1.0)						// ��������
	#define TRANSLUCENT_TORCH_ATT_FACTOR float(0.001231148)		// calculated as 1/(torch_range*torch_range*0.95*0.95)
	#define TRANSLUCENT_TORCH_COLOR float4(0.6,0.64,0.60,0.8)	// color of torch light
	#define TRANSLUCENT_TORCH_POSITION float3(0.00,0.0,0)		// position of torch light in view space
	#define TRANSLUCENT_TORCH_ANGLE_COS float(0.8434)			// cosinus of a half of a torch cone angle

/////////////////////////////////////////////////////////////
// ������������� ���������
							// �������� "������"
	#define ID_DETECTOR_1_DETECT_RADIUS float(20.0)			// ������ �������������� ����������. ������ ������������ ������ �� ��������� � �������
	#define ID_DETECTOR_1_COLOR float4(1.0,1.0,1.0,1.0)		// ���� ���������
	#define ID_DETECTOR_1_POWER float(6.0)					// ������� ���������

							// �������� "�������"
	#define ID_DETECTOR_2_DETECT_RADIUS float(20.0)			// ������ �������������� ����������. ������ ������������ ������ �� ��������� � �������
	#define ID_DETECTOR_2_COLOR float4(0.1,1.0,0.0,1.0)		// ���� ���������
	#define ID_DETECTOR_2_POWER float(5.0)					// ������� ���������
	#define ID_DETECTOR_2_CENTER float2(0.2559, 0.2305)		// ���������� ���������� ������ ������ ���������. ������ ��� ����� ��������
	#define ID_DETECTOR_2_SECTOR float(0.7)					// ������ ��������� �� ������. ��� ������ ��������, ��� ������ ������. ����� 1.0 �� �������!

							// �������� "�����"
	#define ID_DETECTOR_3_DETECT_RADIUS float(35.0)			// ������ �������������� ����������. ������ ������������ ������ �� ��������� � �������
	#define ID_DETECTOR_3_COLOR float4(0.1,1.0,0.0,1.0)		// ���� ���������
	#define ID_DETECTOR_3_POWER float(6.0)					// ������� ���������
	#define ID_DETECTOR_3_DOT_RADIUS float(0.01)			// ������ ����� ��������� �� ������
	#define ID_DETECTOR_3_SCREEN_CORNERS float4(0.4668, 0.8398, 0.1035, 0.2891)		// ���������� ���������� ����� ������ � ������� (max u,max v,min u,min v). ������ ��� ����� ��������
	#define USE_ANOMALY_DETECTION							// ��������� ������ ��������� ��������
	#define ID_DETECTOR_3_AN_COLOR float4(1.0,0.0,0.0,1.0)	// ���� ��������� ��������
	#define ID_DETECTOR_3_AN_DOT_RADIUS float(0.02)			// ������ ����� �������� �� ������
	#define ID_DETECTOR_3_NUM_COLOR float4(1.0,0.0,0.0,1.0)	// ���� ��������� ���� �� ������

/////////////////////////////////////////////////////////////
// ������
	#define DETAIL_TEXTURE_MULTIPLIER float(1.5)			// ��������� ������� ��������� ��������
	
// ������ ���������
	#define CONTRAST_FILTER_COEF float(0.4)					// ������� ���������

// ��������������
	#define COLOR_GRADING_LUMINANCE float3(0.213, 0.715, 0.072)		// ���� ��� ������� ������������� ����������. ����� �� ������.


// Setting local light
#define ECB_LL_DIST 1.2f                            // ��������� ��������� ���� � �������
#define ECB_LL_BRIGHTNESS 1.5f                      // ������� ��������� ���� � �������

#endif