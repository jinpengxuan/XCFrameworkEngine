/* XCFrameworkEngine
 * Copyright (C) Abhishek Porwal, 2016
 * Any queries? Contact author <https://github.com/abhishekp314>
 * This program is complaint with GNU General Public License, version 3.
 * For complete license, read License.txt in source root directory. */

#include "GameplayPrecompiledHeader.h"

#include "PCSoldier.h"

#include "Engine/Input/XCInput.h"
#include "Physics/IPhysicsFeature.h"

PCSoldier::PCSoldier(void)
{
}

PCSoldier::~PCSoldier(void)
{
}

IActor::ActorReturnState PCSoldier::Init()
{
    Soldier::Init();

    m_directInput = (XCInput*) &SystemLocator::GetInstance()->RequestSystem("InputSystem");

    XCVec4 distance(1.5f, 5.0f, 10.0f, 0.0f);
    TPCChaseableActor::SetDistanceFromTarget(distance);
    TPCChaseableActor::SetChasingAxis(m_secondaryLookAxis, m_secondaryRightAxis, m_secondaryUpAxis);

    return IActor::ActorReturnState_Success;
}

IActor::ActorReturnState PCSoldier::LoadMetaData( const void* metaData )
{
    const FBPCSoldier* soldierBuff = (FBPCSoldier*)metaData;

    return Soldier::LoadMetaData(soldierBuff->Base());
}

IActor::ActorReturnState PCSoldier::Update(f32 dt)
{
    //m_gun->CheckInput();

    if (getIsControlled())
    {
        bool isMoving = false;

        if (m_directInput->KeyDown(INPUT_UP))
        {
            Walk(50);
            isMoving = true;
        }

        if (m_directInput->KeyDown(INPUT_DOWN))
        {
            Walk(-50);
            isMoving = true;
        }

        if (m_directInput->KeyDown(INPUT_LEFT))
        {
            Strafe(-20);
            isMoving = true;
        }

        if (m_directInput->KeyDown(INPUT_RIGHT))
        {
            Strafe(20);
            isMoving = true;
        }

        Yaw(m_directInput->MouseDX() * dt, 5.0f);
        Pitch(m_directInput->MouseDY() * dt, 5.0f);

        if (m_directInput->KeyDown(INPUT_KEY_SPACE))
        {
            Jump(20);
            isMoving = true;
        }
    }

    if(m_physicsFeature->IsDirty())
    {
        m_currentPosition = m_physicsFeature->GetTransformedPosition();
        m_MTranslation = MatrixTranslate(m_currentPosition);
    }

    return Soldier::Update(dt);
}