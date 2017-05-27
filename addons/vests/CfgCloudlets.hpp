class cfgCloudlets {
class Default;

class SmokeSignalWhiteEffect: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=17;
		moveVelocity[]={0.2,0.4,0.1};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.050000001;
		size[]={0.1,4,8};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.60000002;
		lifeTimeVar=1;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.3,0.25,0.3};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.34999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class SmokeSignalWhiteWater: SmokeSignalWhiteEffect
	{
		colorCoef[]={1,1,1,1};
		interval=0.25;
	};
	class SmokeSignalRedWater: SmokeSignalWhiteWater
	{
		colorCoef[]={0.84380001,0.1383,0.1353,1};
	};
	class SmokeSignalGreenWater: SmokeSignalWhiteWater
	{
		colorCoef[]={0.21250001,0.62580001,0.48909998,1};
	};
	class SmokeSignalWhite2: SmokeSignalWhiteEffect
	{
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=4;
		particleFSLoop=0;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,1},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0}
		};
	};
	class SmokeSignalWhiteUW: Default
	{
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
		particleFSNtieth=4;
		particleFSIndex=0;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=15;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.15;
		volume=1;
		rubbing=0.050000001;
		size[]={0.2};
		color[]=
		{
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=-1;
		lifeTimeVar=8;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=0;
		sizeVar=0.0040000002;
		colorVar[]={0,0,0,1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	
	class SmokeSignalRedUW: SmokeSignalWhiteUW
	{
		color[]=
		{
			{0.84380001,0.1383,0.1353,1}
		};
	};
	
	class SmokeSignalGreenUW: SmokeSignalWhiteUW
	{
		color[]=
		{
			{0.21250001,0.62580001,0.48909998,1}
		};
	};
	class SmokeSignalWhite2UW: SmokeSignalWhiteUW
	{
		postEffects="SmokeSignalWhiteWater";
	};
	class SmokeSignalRed2UW: SmokeSignalRedUW
	{
		postEffects="SmokeSignalRedWater";
	};
	class SmokeSignalGreen2UW: SmokeSignalGreenUW
	{
		postEffects="SmokeSignalGreenWater";
	};
	
};

class SmokeSignalWhiteEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="SmokeSignalWhiteEffect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2
	{
		simulation="particles";
		type="SmokeSignalWhite2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};

class Smokeshell;
class SmokeShell2;

class SmokeSignalRedEffect: SmokeSignalWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeSignalRedUW";
	position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeSignalRed2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class SmokeSignalGreenEffect: SmokeSignalWhiteEffect
{
	class SmokeShell: SmokeShell
	{
	};
	class SmokeShell2: SmokeShell2
	{
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeSignalGreenUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeSignalGreen2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};	};