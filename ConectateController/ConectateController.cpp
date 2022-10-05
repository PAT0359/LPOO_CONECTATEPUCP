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

//Admin
//Guardado
int ConectateController::Controller::AddAdmin(Admin^ admin)
{
    adminList->Add(admin);
    return 1;
}
//Actualizado
int ConectateController::Controller::UpdateAdmin(Admin^ admin)
{
    for (int i = 0; i < adminList->Count; i++)
        if (admin->PucpId == adminList[i]->PucpId) {
            adminList[i] = admin;
            return 1;
        }
    return 0;
}
//Borrado
int ConectateController::Controller::DeleteAdmin(int adminId)
{
    for (int i = 0; i < adminList->Count; i++)
        if (adminId == adminList[i]->PucpId) {
            adminList->RemoveAt(i);
            return 1;
        }
    return 0;
}
//Verificación de estado
List<Admin^>^ ConectateController::Controller::QueryAllAdmins() //Falta definir si se hace o no
{
    List<Admin^>^ activeAdminList = gcnew List<Admin^>();
    for (int i = 0; i < adminList->Count; i++) {
        if (adminList[i]->StateUser == "Active") {
            activeAdminList->Add(adminList[i]);
        }
    }
    return activeAdminList;
}
//Lectura de producto
Admin^ ConectateController::Controller::QueryAdminById(int adminId)
{
    for(int i=0; i>adminList->Count;i++)
        if (adminId == adminList[i]->PucpId) {
            return adminList[i];
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

//Creator
//Guardado
int ConectateController::Controller::AddCreator(Creator^ creator)
{
    creatorList->Add(creator);
    return 1;
}
//Actualizado
int ConectateController::Controller::UpdateCreator(Creator^ creator)
{
    for (int i = 0; i < creatorList->Count; i++)
        if (creator->PucpId == creatorList[i]->PucpId) {
            creatorList[i] = creator;
            return 1;
        }
    return 0;
}
//Borrado
int ConectateController::Controller::DeleteCreator(int creatorId)
{
    for (int i = 0; i < creatorList->Count; i++)
        if (creatorId == creatorList[i]->PucpId) {
            creatorList->RemoveAt(i);
            return 1;
        }
    return 0;
}
//Verificación de estado
List<Creator^>^ ConectateController::Controller::QueryAllCreators() //Falta definir si se hace o no
{
    List<Creator^>^ activeCreatorList = gcnew List<Creator^>();
    for (int i = 0; i < creatorList->Count; i++) {
        if (creatorList[i]->StateUser == "Active") {
            activeCreatorList->Add(creatorList[i]);
        }
    }
    return activeCreatorList;
}
//Lectura de producto
Creator^ ConectateController::Controller::QueryCreatorById(int creatorId)
{
    for (int i = 0; i > creatorList->Count; i++)
        if (creatorId == creatorList[i]->PucpId) {
            return creatorList[i];
        }
    return nullptr;
}


User^ ConectateController::Controller::Login(String^ username, String^ password)
{
    User^ user;
    Creator^ creator;
    Admin^ admin;
    if (username == "Alejandra Patiño Espinoza" && password == "pokemon") {
        user = gcnew User();
        user->PucpId = 20200359;
        user->Account = "Alejandra Patiño Espinoza";
        user->StateUser = "Active";
        admin = gcnew Admin();
        admin->CodeName = "APE";
        creator = gcnew Creator();
        creator->CreatorId = user->PucpId;
    }
    return user, admin, creator;
    // TODO: Insertar una instrucción "return" aquí
}


