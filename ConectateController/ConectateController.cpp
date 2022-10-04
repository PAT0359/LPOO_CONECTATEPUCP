#include "pch.h"

#include "ConectateController.h"

//Activity
//Agregar una actividad
int ConectateController::Controller::CreateActivity(Activity^ activity)
{
    activityList->Add(activity);
    return 1;
}

//Actualizar la lista de actividades
int ConectateController::Controller::UpdateActivity(Activity^ activity)
{
    for (int i = 0; i < activityList->Count; i++) {
        if (activity->ActivityId == activityList[i]->ActivityId)
            activityList[i] = activity;
        return 1;
    }
    return 0;
}

//Borrar una actividad de la lista
int ConectateController::Controller::DeleteActivity(int activityId)
{
    for (int i = 0; i < activityList->Count; i++) {
        if (activityId == activityList[i]->ActivityId)
            activityList->RemoveAt(i);
        return 1;
    }
    return 0;
}

//
List<Activity^>^ ConectateController::Controller::QueryAllActivities()
{
    List<Activity^>^ activeActivitiesList = gcnew List<Activity^>();
    for (int i = 0; i < activityList->Count; i++) {
        if (activityList[i]->State == "Active") {
            activeActivitiesList->Add(activityList[i]);
        }
    }
    return activeActivitiesList;
}

//
Activity^ ConectateController::Controller::QueryActivityById(int activityId)
{
    for (int i = 0; i < activityList->Count; i++)
        if (activityId == activityList[i]->ActivityId) {
            return activityList[i];
        }
    return nullptr;
    
}

//Report
int ConectateController::Controller::CreateReport(Report^ report)
{
    reportList->Add(report);
    return 1;
}

int ConectateController::Controller::DeleteReport(int reportId)
{
    for (int i = 0; i < reportList->Count; i++) {
        if (reportId == reportList[i]->ReportId)
            reportList->RemoveAt(i);
        return 1;
    }
    return 0;
}

Report^ ConectateController::Controller::QueryReportById(int reportId)
{
    for (int i = 0; i < reportList->Count; i++)
        if (reportId == reportList[i]->ReportId) {
            return reportList[i];
        }
    return nullptr;
}



List<Report^>^ ConectateController::Controller::QueryAllReports()
{
    List<Report^>^ activeReportsList = gcnew List<Report^>();
    for (int i = 0; i < reportList->Count; i++) {
        if (reportList[i]->ReportState == "Active") {
            activeReportsList->Add(reportList[i]);
        }
    }
    return activeReportsList;
}

//Location
//Agregar
int ConectateController::Controller::AddLocation(Location^ location)
{
    locationList->Add(location);
    return 1;
}
//Actualizar
int ConectateController::Controller::UpdateLocation(Location^ location)
{
    for (int i = 0; i < locationList->Count; i++)
        if (location->LocationId == locationList[i]->LocationId) {
            locationList[i] = location;
            return 1;
        }
    return 0;
}
//Eliminar
int ConectateController::Controller::DeleteLocation(int locationId)
{
    for (int i = 0; i < locationList->Count; i++)
        if (locationId == locationList[i]->LocationId) {
            locationList->RemoveAt(i);
            return 1;
        }
    return 0;
}

List<Location^>^ ConectateController::Controller::QueryAllLocation()
{
    return locationList;
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

//Leer lugar
Location^ ConectateController::Controller::QueryLocationById(int locationId)
{
    for (int i = 0; i > locationList->Count; i++)
        if (locationId == locationList[i]->LocationId) {
            return locationList[i];
        }
    return nullptr;
}

//User
//Guardado
int ConectateController::Controller::AddUser(User^ user)
{
    userList->Add(user);
    return 1;
}
//Actualizado
int ConectateController::Controller::UpdateUser(User^ user)
{
    for (int i = 0; i < userList->Count; i++)
        if (user->PucpId == userList[i]->PucpId) {
            userList[i] = user;
            return 1;
        }
    return 0;
}
//Borrado
int ConectateController::Controller::DeleteUser(int userId)
{
    for (int i = 0; i < userList->Count; i++)
        if (userId == userList[i]->PucpId) {
            userList->RemoveAt(i);
            return 1;
        }
    return 0;
}
//Verificación de estado
List<User^>^ ConectateController::Controller::QueryAllUsers() //Falta definir si se hace o no
{
    List<User^>^ activeUserList = gcnew List<User^>();
    for (int i = 0; i < userList->Count; i++) {
        if (userList[i]->StateUser == "Active") {
            activeUserList->Add(userList[i]);
        }
    }
    return activeUserList;
}
//Lectura de producto
User^ ConectateController::Controller::QueryUserById(int userId)
{
    for(int i=0; i>userList->Count;i++)
        if (userId == userList[i]->PucpId) {
            return userList[i];
        }
    return nullptr;
}

//   TAGS
int ConectateController::Controller::CreateTags(Tags^ tags)
{
    tagList->Add(tags);
    return 1;
}

int ConectateController::Controller::UpdateTag(Tags^ tags)
{
    for (int i = 0; i < tagList->Count; i++) {
        if (tags->TagId == tagList[i]->TagId)
            tagList[i] = tags;
        return 1;
    }
    return 0;
}

int ConectateController::Controller::DeleteTags(int tagId)
{
    for (int i = 0; i < tagList->Count; i++) {
        if (tagId == tagList[i]->TagId)
            tagList->RemoveAt(i);
        return 1;
    }
    return 0;
}

List<Tags^>^ ConectateController::Controller::QueryAllTags()
{
    return tagList;
    // throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

Tags^ ConectateController::Controller::QueryTagsById(int tagId)
{
    for (int i = 0; i < tagList->Count; i++)
        if (tagId == tagList[i]->TagId) {
            return tagList[i];
        }
    return nullptr;
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

