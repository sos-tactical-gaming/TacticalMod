class GrenadeLauncher;

class Throw: GrenadeLauncher
{
	muzzles[] += {"SmokeSignalRedMuzzle", "SmokeSignalGreenMuzzle"};
	class ThrowMuzzle;
	class SmokeSignalRedMuzzle: ThrowMuzzle
	{
		magazines[] = {"SmokeSignalRed"};
	};
	class SmokeSignalGreenMuzzle: ThrowMuzzle
	{
		magazines[] = {"SmokeSignalGreen"};
	};
};
