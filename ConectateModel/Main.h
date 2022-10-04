/**
 * Project Untitled
 */


#pragma once
//#include "Creator.h";
#include "UserPerActivity.h";
#include "ActivityDetail.h";

using namespace System;
using namespace System::Collections::Generic;

namespace ConectateModel {
    public ref class Main {
    public:
        property int ActivityId;
        property UserPerActivity^ UserPerActivity;
        property List<ActivityDetail^>^ ActivityDetail;
        //property Creator^ Creator;
        //property User^ User;
    };
}
