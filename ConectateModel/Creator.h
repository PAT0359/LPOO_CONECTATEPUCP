/**
 * Project Untitled
 */


#include "User.h"
#pragma once

using namespace System;
namespace ConectateModel {
    public ref class Creator : public User {
    public:
        property int CreatorId;
        Creator();
        Creator(int id, String^ name, int creatorid);
    };
}
