/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "../CCPhysicsSetting.h"
#if (CC_PHYSICS_ENGINE == CC_PHYSICS_CHIPMUNK)

#ifndef __CCPHYSICS_JOINT_INFO_H__
#define __CCPHYSICS_JOINT_INFO_H__

#include "chipmunk.h"
#include "CCPlatformMacros.h"
#include <vector>
#include <map>
NS_CC_BEGIN

class PhysicsJoint;

class PhysicsJointInfo
{
public:
    void add(cpConstraint* shape);
    void remove(cpConstraint* shape);
    void removeAll();
    
public:
    std::vector<cpConstraint*> joints;
    PhysicsJoint* joint;
    static std::map<cpConstraint*, PhysicsJointInfo*> map;
    
private:
    PhysicsJointInfo(PhysicsJoint* joint);
    ~PhysicsJointInfo();
    
    friend class PhysicsJoint;
};

NS_CC_END
#endif // __CCPHYSICS_SHAPE_INFO_H__

#endif // CC_PHYSICS_ENGINE == CC_PHYSICS_CHIPMUNK
