/**
 * Project Untitled
 */


#pragma once
#include "Tags.h"
#include "Activity.h";

using namespace System;
namespace ConectateModel {
    public ref class TagsPerActivity {
    public:
        property String^ TagState;
        //property int TagId;
        //property int ActivityId;
        property Activity^ Activity;
        property Tags^ Tags;
    };
}
