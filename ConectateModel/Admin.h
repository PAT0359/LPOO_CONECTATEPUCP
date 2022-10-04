/**
 * Project Untitled
 */


#include "User.h"
#pragma once

using namespace System;
namespace ConectateModel {
    public ref class Admin : public User {
    public:
        property String^ CodeName;
    };
}
