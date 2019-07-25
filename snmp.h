#ifndef __SNMP_H__
#define __SNMP_H__

#include <string> 
#include "server.h" 

using namespace std; 

#define HWGANTRY_COUNT 27

int snmpInit(void);

int snmpInit(void);
int SendSnmpOid(string mSnmpOid);
int snmptrapInit(void);
void initHUAWEIGantry();

#pragma pack(push, 1)
typedef enum
{
	//锂电
	hwAcbGroupBatVolt=1,                //电池电压
	hwAcbGroupBatCurr=2,            //电池电流
	hwAcbGroupTotalCapacity=3,                //电池总容量
	hwAcbGroupTotalRemainCapacity=4,               //电池剩余容量
	hwAcbGroupBackupTime=5,              //电池备电时长
	hwAcbGroupBatSoh=6,             //电池 SOH
	//开关电源
	hwApOrAblVoltage=7,                //A/AB 电压
	hwBpOrBclVoltage=8,                //B/BC 电压
	hwCpOrCalVoltage=9,                //C/CA 电压
	hwAphaseCurrent=10,               //A 相电流
	hwBphaseCurrent=11,              //B 相电流
	hwCphaseCurrent=12,             //C 相电流
	hwDcOutputVoltage=13,             //DC 输出电压
	hwDcOutputCurrent=14,               //DC 输出电流
	//环境传感器
	hwEnvTemperature=15,              //环境温度值
	hwEnvHumidity=16,             //环境湿度值
	//直流空调
	hwDcAirCtrlMode=17,			//空调控制模式
	hwDcAirRunStatus=18,			//空调运行状态
	hwDcAirCompressorRunStatus=19,		//空调压缩机运行状态
	hwDcAirInnrFanSpeed=20,			//空调内机转速
	hwDcAirOuterFanSpeed=21,			//空调外风机转速
	hwDcAirCompressorRunTime=22,		//空调压缩机运行时间
	hwDcAirEnterChannelTemp=23,		//空调回风口温度
	hwDcAirPowerOnTempPoint=24,		//空调开机温度点
	hwDcAirPowerOffTempPoint=25,		//空调关机温度点

	//设备信息
	hwMonEquipSoftwareVersion=26,	//软件版本
	hwMonEquipManufacturer=27,		//设备生产商
	//锂电(新增加)
	hwAcbGroupTemperature=28,			//电池温度
	hwAcbGroupOverCurThr=29,			//充电过流告警点
	hwAcbGroupHighTempThr=30,		//高温告警点
	hwAcbGroupLowTempTh=31,			//低温告警点
	hwAcbGroupDodToAcidBattery=32,	//锂电放电DOD
	//开关电源(新增加)
   	hwSetAcsUpperVoltLimit=33,		//AC过压点设置
   	hwSetAcsLowerVoltLimit=34,		//AC欠压点设置
   	hwSetDcsUpperVoltLimit=35,		//设置DC过压点
   	hwSetDcsLowerVoltLimit=36,		//设置DC欠压点
   	hwSetLvdVoltage=37,				//设置LVD电压
	//环境传感器(新增加)
   	hwSetEnvTempUpperLimit=38,		//环境温度告警上限
   	hwSetEnvTempLowerLimit=39,		//环境温度告警下限
   	hwSetEnvTempUltraHighTempThreshold=40,		//环境高高温告警点
   	hwSetEnvHumidityUpperLimit=41,		//环境湿度告警上限
   	hwSetEnvHumidityLowerLimit=42,		//环境湿度告警下限
	//直流空调(新增加)
	hwDcAirRunTime=43,				//空调运行时间
	hwCoolingDevicesMode=44			//温控模式
}EM_HUAWEIGantry;

typedef struct
{
	//锂电
	string strhwAcbGroupBatVolt;                //电池电压 "51.1"
	string strhwAcbGroupBatCurr;            //电池电流
	string strhwAcbGroupTotalCapacity;                //电池总容量
	string strhwAcbGroupTotalRemainCapacity;               //电池剩余容量
	string strhwAcbGroupBackupTime;              //电池备电时长
	string strhwAcbGroupBatSoh;             //电池 SOH
	//开关电源
	string strhwApOrAblVoltage;                //A/AB 电压
	string strhwBpOrBclVoltage;                //B/BC 电压
	string strhwCpOrCalVoltage;                //C/CA 电压
	string strhwAphaseCurrent;               //A 相电流
	string strhwBphaseCurrent;              //B 相电流
	string strhwCphaseCurrent;             //C 相电流
	string strhwDcOutputVoltage;             //DC 输出电压
	string strhwDcOutputCurrent;               //DC 输出电流
	//环境传感器
	string strhwEnvTemperature;              //环境温度值
	string strhwEnvHumidity;            //环境湿度值
	//直流空调
	string strhwDcAirCtrlMode;			//空调控制模式
	string strhwDcAirRunStatus;			//空调运行状态
	string strhwDcAirCompressorRunStatus;		//空调压缩机运行状态
	string strhwDcAirInnrFanSpeed;			//空调内机转速
	string strhwDcAirOuterFanSpeed;			//空调外风机转速
	string strhwDcAirCompressorRunTime;		//空调压缩机运行时间
	string strhwDcAirEnterChannelTemp;		//空调回风口温度
	string strhwDcAirPowerOnTempPoint;		//空调开机温度点
	string strhwDcAirPowerOffTempPoint;		//空调关机温度点
	
	//设备信息 
	string strhwMonEquipSoftwareVersion;	//软件版本
	string strhwMonEquipManufacturer;		//设备生产商
	//锂电(新增加)
	string strhwAcbGroupTemperature;			//电池温度
	string strhwAcbGroupOverCurThr;			//充电过流告警点
	string strhwAcbGroupHighTempThr;		//高温告警点
	string strhwAcbGroupLowTempTh;			//低温告警点
	string strhwAcbGroupDodToAcidBattery;	//锂电放电DOD
	//开关电源(新增加)
   	string strhwSetAcsUpperVoltLimit;		//AC过压点设置
   	string strhwSetAcsLowerVoltLimit;		//AC欠压点设置
   	string strhwSetDcsUpperVoltLimit;		//设置DC过压点
   	string strhwSetDcsLowerVoltLimit;		//设置DC欠压点
   	string strhwSetLvdVoltage;				//设置LVD电压
	//环境传感器(新增加)
   	string strhwSetEnvTempUpperLimit;		//环境温度告警上限
   	string strhwSetEnvTempLowerLimit;		//环境温度告警下限
   	string strhwSetEnvTempUltraHighTempThreshold;		//环境高高温告警点
   	string strhwSetEnvHumidityUpperLimit;		//环境湿度告警上限
   	string strhwSetEnvHumidityLowerLimit;		//环境湿度告警下限
	//直流空调(新增加)
	string strhwDcAirRunTime;				//空调运行时间
	string strhwCoolingDevicesMode;			//温控模式
}THUAWEIGantry;

typedef struct
{
	string hwEnvTempAlarmTraps;		//高温/低温/高高温告警
	string hwEnvTempAlarmResume;	//高温/低温/高高温告警恢复
	string hwEnvHumiAlarmTraps;		//高湿/低湿告警
	string hwEnvHumiAlarmResume;	//高湿/低湿告警恢复
	string hwSpareDigitalAlarmTraps;	//输入干接点告警
	string hwSpareDigitalAlarmResume;	//输入干接点告警恢复
	string hwDoorAlarmTraps;		//门禁告警
	string hwDoorAlarmResume;		//门禁告警恢复
	string hwWaterAlarmTraps;		//水浸告警
	string hwWaterAlarmResume;		//水浸告警恢复
	string hwSmokeAlarmTraps;		//烟感告警
	string hwSmokeAlarmResume;		//烟感告警恢复

	string hwair_cond_infan_alarm;	//空调内风机故障
	string hwair_cond_outfan_alarm;	//空调外风机故障
	string hwair_cond_comp_alarm;	//空调压缩机故障
	string hwair_cond_return_port_sensor_alarm;	//空调回风口传感器故障
	string hwair_cond_evap_freezing_alarm;		//空调蒸发器冻结
	string hwair_cond_freq_high_press_alarm;	//空调频繁高压力
	string hwair_cond_comm_fail_alarm;			//空调通信失败告警

	//新增加告警
	string hwACSpdAlarmTraps;					//交流防雷器故障
	string hwACSpdAlarmResumeTraps;			//交流防雷器故障恢复
	string hwDCSpdAlarmTraps;					//直流防雷器故障
	string hwDCSpdAlarmResumeTraps;			//直流防雷器故障恢复
	//电源告警
	string hwAcInputFailAlarm;				//交流电源输入停电告警
	string hwAcInputFailAlarmResume;		//交流电源输入停电告警恢复
	string hwAcInputL1FailAlarm;				//交流电源输入L1	相缺相告警
	string hwAcInputL1FailAlarmResume;		//交流电源输入L1	相缺相告警恢复
	string hwAcInputL2FailAlarm;				//交流电源输入L2	相缺相告警
	string hwAcInputL2FailAlarmResume;		//交流电源输入L2	相缺相告警恢复
	string hwAcInputL3FailAlarm;				//交流电源输入L3	相缺相告警
	string hwAcInputL3FailAlarmResume;		//交流电源输入L3	相缺相告警恢复
	string hwDcVoltAlarmTraps;				//直流电源输出告警
	string hwDcVoltAlarmResumeTraps;		//直流电源输出告警恢复
	string hwLoadLvdAlarmTraps;				//LLVD1下电告警
	string hwLoadLvdAlarmResumeTraps;		//LLVD1下电恢复
	//锂电池告警
	string hwAcbGroup_comm_fail_alarm;		//所有锂电通信失败
	string hwAcbGroup_discharge_alarm;		//电池放电告警
	string hwAcbGroup_charge_overcurrent_alarm;	//电池充电过流
	string hwAcbGroup_temphigh_alarm;		//电池温度高
	string hwAcbGroup_templow_alarm;		//电池温度低
	string hwAcbGroup_poweroff_alarm;		//电池下电
	string hwAcbGroup_fusebreak_alarm;		//电池熔丝断
	string hwAcbGroup_moduleloss_alarm;		//模块丢失
}THUAWEIALARM;

#pragma pack(pop)

#endif


