class CfgFunctions {
    class GAIA
    {
        tag = "GAIA";
        
        class ambient
        {
            file = "\x\sos\addons\gaia\gaia\functions\ambient";

            class ambientCombat {};
            class ambientCombatServer {};
            class ambientCombatClient {};
            class getPlayers {};
            class isInMarker {};
            class getsideratio {};
            class SpawnGroup {};
            class ShowLocationOwner {};
            
        };


        class Cache
        {
            file = "\x\sos\addons\gaia\gaia\functions\cache";

            class cache {};
            class cacheFar {};
            class cacheOriginalGroup {};
            class isNearPlayer {};
            class startGaiaCache {};
            class syncCachedGroup {};
            class uncache {};
            class uncacheFar {};
            class uncacheOriginalGroup {};
        };

        class General
        {
            file = "\x\sos\addons\gaia\gaia\functions\general";
            
            class controlGroup {};
            class findClosestPosition {};
            class getDirectionalOffsetPosition {};
            class getMarkerShape {};
            class getMarkerVertices {};
            class isInCircle {};
            class isInEllipse {};
            class isInRectangle {};
            class isPositionInMarker {};
            class isSamePosition {};
            class randomPositionInCircleMarker {};
            class randomPositionInEllipseMarker {};
            class randomPositionInRectangleMarker {};
            class randomPositionInSquareMarker {};
            class rotatePosition {};
            class startGaia {};
        };

        class Control
        {
            file = "\x\sos\addons\gaia\gaia\functions\control";

            class addAttackWaypoint {};
            class addWaypoint {};
            class analyzeForces {};
            class analyzeTargets {};
            class analyzeTerrain {};
            class calculateOptimalPosition {};
            class classifySide {};
            class doTask {};
            class event {};
            class fireFlare {};
            class generateBuildingPatrolWaypoints {};
            class generateWaypoints {};
            class getConflictAreaCost {};
            class getConflictAreas {};
            class getDistanceToClosestZone {};
            class getTurretWeapons {};
            class getUnitAssets {};
            class getUnitTypeAmounts {};
            class getUnitsClassification {};
            class getZoneIntendOfGroup {};
            class getZoneStatusBehavior {};
            class hasLineOfSight {};
            class isBlacklisted {};
            class isCleared {};
            class issueOrders {};
            class occupy {};
            class removeWaypoints {};
            
        };

        class Orders
        {
            file = "\x\sos\addons\gaia\gaia\functions\control\orders";

            class doArtillery {};
            class doAttack {};
            class doAttackCar {};
            class doAttackHelicopter {};
            class doAttackInfantry {};
            class doAttackMechanizedInfantry {};
            class doAttackMotorizeInfantry {};
            class doAttackMotorizedRecon {};
            class doAttackRecon {};
            class doAttackShip {};
            class doAttackTank {};
            class doClear {};
            class doClearInfantry {};
            class doClearRecon {};
            class doFortify {};
            class doHide {};
            class doMortar {};
            class doOrganizeTransportation {};
            class doPark {};
            class doPatrol {};
            class doPatrolCar {};
            class doPatrolHelicopter {};
            class doPatrolInfantry {};
            class doPatrolMechanizedInfantry {};
            class doPatrolMotorizedInfantry {};
            class doPatrolMotorizedRecon {};
            class doPatrolRecon {};
            class doPatrolShip {};
            class doSupport {};
            class doTransportCar {};
            class doTransportHelicopter {};
            class doTransportTank {};
            class doWait {};
        };

        class Fortify
        {
            file = "\x\sos\addons\gaia\gaia\functions\control\fortify";

            class taskDefend {};
        };
    };
};
