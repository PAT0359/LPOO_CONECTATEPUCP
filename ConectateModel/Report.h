/**
 * Project Untitled
 */


#pragma once

using namespace System;
namespace ConectateModel {
    public ref class Report {
    public:
        property int ReportId;
        property String^ Name;
        property String^ ReportDescription;
        property String^ ReportState;
        property String^ ReportDate;
    };
}
