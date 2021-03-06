#pragma once
#include "MoveComponent.h"

class InputComponent : public MoveComponent
{
public:

	InputComponent(class Actor* owner);

	void InputProcess(const uint8_t* keyState) override;

	//Getters and Setters
	float GetForwardSpeed() const { return mMaxForwardSpeed; }
	float GetAngularSpeed() const { return mMaxAngularSpeed; }

	void SetForwardSpeed(float forwardSpeed) { mForwardSpeed = forwardSpeed; }
	void SetAngularSpeed(float angularSpeed) { mAngularSpeed = angularSpeed; }

	void SetForwardKey(int key) { mForwardKey = key; }
	void SetBackKey(int key) { mBackwardKey = key; }
	void SetClockwiseKey(int key) { mClockwiseKey = key; }
	void SetCounterClockwiseKey(int key) { mAntiClockwiseKey = key; }

private:

	//Forward and Angular Speed
	float mMaxForwardSpeed;
	float mMaxAngularSpeed;

	//Forward and Angular Movement Inputs

	int mForwardKey;
	int mBackwardKey;

	int mClockwiseKey;
	int mAntiClockwiseKey;

};

