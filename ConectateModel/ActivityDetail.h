/**
 * Project Untitled
 */

#pragma once
#include "Activity.h";
#include "Creator.h";
#include "Location.h";
#include "TagsPerActivity.h";

using namespace System;
using namespace System::Collections::Generic;
namespace ConectateModel {
    public ref class ActivityDetail {
    public:
        property int ActivityId;
        property int LocationId;
        property int TagId;
        property int CreatorId;
        property Creator^ Creator;
        property User^ User;
        property TagsPerActivity^ TagsPerActivity;
        property Location^ Location;
        property Activity^ Activity;
    };
}
