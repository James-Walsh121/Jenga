#include "BasicDemo.h"

void BasicDemo::InitializePhysics() 
{
	// create the collision configuration
	m_pCollisionConfiguration = new btDefaultCollisionConfiguration();
	// create the dispatcher
	m_pDispatcher = new btCollisionDispatcher(m_pCollisionConfiguration);
	// create the broadphase
	m_pBroadphase = new btDbvtBroadphase();
	// create the constraint solver
	m_pSolver = new btSequentialImpulseConstraintSolver();
	// create the world
	m_pWorld = new btDiscreteDynamicsWorld(m_pDispatcher, m_pBroadphase, m_pSolver, m_pCollisionConfiguration);

	// create our scene's physics objects
	CreateObjects();
}

void BasicDemo::ShutdownPhysics() 
{
	delete m_pWorld;
	delete m_pSolver;
	delete m_pBroadphase;
	delete m_pDispatcher;
	delete m_pCollisionConfiguration;
}

// where the Jenga blocks are made
void BasicDemo::CreateObjects() 
{
	
	// create a ground plane
	CreateGameObject(new btBoxShape(btVector3(1,50,50)), 0, btVector3(0.2f, 0.6f, 0.6f), btVector3(0.0f, 0.0f, 0.0f));
	
		//First Level 														
	   //										   y,		x,		z						   //Red 					  x,      y,     z
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 0.5f, 0.0f));
	// create a second box
																											//Green
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 0.5f, 0.0f));
	// create third block
																											//Yellow
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 0.5f, 0.0f));

	// Second Level of blocks																				//Purple
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 1.5f, 1.0f));
																											// Orange
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 1.5f, 0.0f));
																											//Blue
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 1.5f, -1.0f));

	//Third Level // use first level parameters 
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 2.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 2.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 2.5f, 0.0f));

	// Fourth Level //use second level parameters 
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 3.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 3.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 4.5f, -1.0f));

	//Fifth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 4.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 4.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 4.5f, 0.0f));

	// Sixth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 5.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 5.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 5.5f, -1.0f));

	 // Seventh Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 6.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 6.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 6.5f, 0.0f));

	 //Eighth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 7.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 7.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 7.5f, -1.0f));

	 // Ninth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 8.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 8.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 8.5f, 0.0f));

	 // Tenth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 9.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 9.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 9.5f, -1.0f));

	 // Eleventh Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 10.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 10.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 10.5f, 0.0f));

	// Twelveth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 11.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 11.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 11.5f, -1.0f));

	 // Thirteenth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 12.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 12.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 12.5f, 0.0f));

	 // Fourteenth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 13.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 13.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 13.5f, -1.0f));

	 // Fifthteenth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 14.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 14.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 14.5f, 0.0f));

	 // Sixthteenth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 15.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 15.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 15.5f, -1.0f));

	 // Seventeenth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1, btVector3(1.000, 0.843, 0.000), btVector3(-1.0f, 16.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(0.000, 1.000, 0.000), btVector3(0.0f, 16.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 0.49999, 1.49999)), 1.0, btVector3(1.000, 0.000, 0.000), btVector3(1.0f, 16.5f, 0.0f));

	 // Eighteenth Level
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.502, 0.000, 0.502), btVector3(0.0f, 17.5f, 1.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(1.000, 0.271, 0.000), btVector3(0.0f, 17.5f, 0.0f));
	 CreateGameObject(new btBoxShape(btVector3(0.49999, 1.49999, 0.49999)), 1.0, btVector3(0.000, 0.000, 1.000), btVector3(0.0f, 17.5f, -1.0f));

}
