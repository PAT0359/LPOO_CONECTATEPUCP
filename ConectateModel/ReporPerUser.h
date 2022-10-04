/**
 * Project Untitled
 */


#pragma once
#include "Report.h";

using namespace System;
namespace ConectateModel {
    public ref class ReporPerUser {
    public:
        property String^ ReportState;
        property int ReportId;
        property Report^ Report;
    };
}
