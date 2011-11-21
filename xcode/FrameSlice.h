/*
 *  FrameSlice.h
 *  VideoPan
 *
 *  Created by Charles Hoey on 11/20/11.
 *  Copyright 2011 Flimshaw Industries. All rights reserved.
 *
 */
#pragma once
#include "cinder/Channel.h"
#include "cinder/Vector.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"

using namespace ci;

class FrameSlice {
public:
	FrameSlice( int frameNumber, float frameOffset, float frameSpeed, float frameFocalDistance );

	void update();
	void draw();
	void setup();

	void setPosition( ci::Vec2f newPos);
	void setFrameTexture( gl::Texture newTexture );
	void setFrameOffset( float pixelOffset );

	
	// Texture specific variables
	gl::Texture mFrameTexture;
	float		mFrameOffset;
	int			mFrameNumber;
	float		mFrameSpeed;
	float		mFrameFocalDistance;
	float		mFrameTrueWidth;
	float		mFrameLensAngle;
	float		mFrameMaxWidth;
	
	// Particle specific variables
	ci::Vec2f	mCurrentPosition;
	ci::Vec2f	mDestinationPosition;
	ci::Vec2f	mVel;
	ci::Vec2f	mSize;
	float		mWidth;
};