//CollisionGroupDeleteCommand.h
//Jacqueline Passehl Winter Quarter 2k16

#ifndef _CollisionGroupDeleteCommand
#define _CollisionGroupDeleteCommand

#include "CollisionGroupCommandBase.h"
#include "CollidableGroup.h"
#include "Collidable.h"


template<typename C>
class CollisionGroupDeleteCommand : public CollisionGroupCommandBase
{
public:
	//pointers!
	//needs pointer to right manager to talk to
	//CollisionManager* CollisionMgr; DONT NEED IT
	//object that needs to be registered
	C* CollidablePtr;

	//constructors all in one place
	CollisionGroupDeleteCommand(){};
	~CollisionGroupDeleteCommand(){};
	CollisionGroupDeleteCommand(const CollisionGroupDeleteCommand&) = delete;
	CollisionGroupDeleteCommand operator=(const CollisionGroupDeleteCommand&) = delete;

	CollisionGroupDeleteCommand(C* c)
		:CollidablePtr(c)
	{
		//just stores the manager and the update
	}
	virtual void execute()
	{
		//needs to register the update
		//will be called when its ready to do it
 
		CollidableGroup<C>::Delete();
	}


};
#endif _CollisionGroupDeleteCommand