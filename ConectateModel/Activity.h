/**
 * Project Untitled
 */


#pragma once
//#include "Location.h";
//#include "TagsPerActivity.h";

using namespace System;
namespace ConectateModel {
    public ref class Activity {
    public:
        property String^ StartDate;
        property String^ Title;
        property String^ Description;
        property int TotalParticipants;
        property String^ DeadLine;
        property array<Byte>^ Photo;
        property String^ EndDate;
        property int ActivityId;
        property int LocationId;
        property int CreatorId;
        property String^ State;
    };
}
