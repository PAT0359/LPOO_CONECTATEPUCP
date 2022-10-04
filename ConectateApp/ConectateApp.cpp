#include "pch.h"
#include "ConectateMainForm.h"

using namespace System;
using namespace ConectateModel;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //LPOOInduction is your project name
    ConectateApp::ConectateMainForm form;
    Application::Run(% form);

    /*
    //Creadores de las actividades
    Creator^ c1 = gcnew Creator();
    c1->Account = "Esteban Quito";
    c1->CreatorId = 20200171;

    Creator^ c2 = gcnew Creator();
    c2->Account = "Ingrid Terrones";
    c2->CreatorId = 20200211;

    //Usuarios inscritos
    User^ u1 = gcnew User();
    u1->Account = "Juan Perez";
    u1->PucpId = 20184579;

    User^ u2 = gcnew User();
    u2->Account = "Gonzalo Rivera";
    u2->PucpId = 20190589;

    //Información actividades
    Activity^ a1 = gcnew Activity();
    a1->ActivityId = 1;
    //a1->CreatorId = c2;
    a1->Title = "Grupo de estudio Fa3";
    a1->StartDate = "26/09/2022";
    a1->EndDate = "02/10/2022";
    a1->DeadLine = "24/09/2022";
    a1->Description = "Grupo de estudio para el curso de Fisica 3, todo estudiante esta invitado a participar. Por ahora se tiene un limite de 10 alumnos y las sesiones serian 3 veces por semana. Nos encontrariamos en el CIA, se reservara cubiculo";
    a1->State = "Activa";
    a1->TotalParticipants = 1;
    a1->LocationId = 2;

    Activity^ a2 = gcnew Activity();
    a2->ActivityId = 2;
    //a2->CreatorId = c1;
    a2->Title = "Campeonato de futbol";
    a2->StartDate = "30/10/2022";
    a2->EndDate = "01/10/2022";
    a2->DeadLine = "28/09/2022";
    a2->Description = "Campeonato de futbol organizado por los alumnos de Mecatronica. Cualquier estudiante puede participar, serán equipos de 7 jugadores y pueden llevar maximo 2 reemplazos. Se jugaran los partidos en las canchas de minas (al frente del pabellon M).";
    a2->State = "Activa";
    a2->TotalParticipants = 1;
    a2->LocationId = 1;

    //Lugares
    Location^ l1 = gcnew Location();
    l1->LocationName = "Canchas de Minas";
    l1->LocationId = 1;

    Location^ l2 = gcnew Location();
    l2->LocationName = "Cia";
    l2->LocationId = 2;

    //Tags
    Tags^ tag1 = gcnew Tags();
    tag1->SportTag = "Futbol";
    tag1->TagId = 1;

    Tags^ tag2 = gcnew Tags();
    tag2->ClassTag = "Fisica3";
    tag2->TagId = 3;

    //Tags por actividad
    TagsPerActivity^ tpa1 = gcnew TagsPerActivity();
    tpa1->TagState = "Activo";
    tpa1->Activity = a2;
    tpa1->Tags = tag1;

    TagsPerActivity^ tpa2 = gcnew TagsPerActivity();
    tpa2->TagState = "Activo";
    tpa2->Activity = a1;
    tpa2->Tags = tag2;

    //Simulación de publicación de una actividad
    Main^ main1 = gcnew Main();
    main1->ActivityDetail = gcnew List<ActivityDetail^>();
    main1->ActivityDetail->Add(gcnew ActivityDetail());
    main1->ActivityDetail[0]->Activity = a2;
    main1->ActivityDetail[0]->Creator = c1;
    main1->ActivityDetail[0]->User = u1;
    main1->ActivityDetail[0]->Location = l1;
    main1->ActivityDetail[0]->TagsPerActivity = tpa1;
    main1->ActivityDetail->Add(gcnew ActivityDetail());
    main1->ActivityDetail[1]->Activity = a1;
    main1->ActivityDetail[1]->Creator = c2;
    main1->ActivityDetail[1]->User = u2;
    main1->ActivityDetail[1]->Location = l2;
    main1->ActivityDetail[1]->TagsPerActivity = tpa2;

    //Emisión de la actividad
    for (int i = 0; i < main1->ActivityDetail->Count; i++) {
        Console::WriteLine("Nueva actividad:\n");
        Console::WriteLine("Creador: " + main1->ActivityDetail[i]->Creator->Account);
        Console::WriteLine("Codigo Pucp: " + main1->ActivityDetail[i]->Creator->CreatorId);
        Console::WriteLine("\n");
        Console::WriteLine("Titulo: " + main1->ActivityDetail[i]->Activity->Title);
        Console::WriteLine("Fecha de inicio: " + main1->ActivityDetail[i]->Activity->StartDate);
        Console::WriteLine("Fecha de termino: " + main1->ActivityDetail[i]->Activity->EndDate);
        Console::WriteLine("Plazo para inscribirse hasta " + main1->ActivityDetail[i]->Activity->DeadLine);
        Console::WriteLine("Estado de la actividad: " + main1->ActivityDetail[i]->Activity->State);
        Console::WriteLine("Descripcion: " + main1->ActivityDetail[i]->Activity->Description);
        Console::WriteLine("Lugar: " + main1->ActivityDetail[i]->Location->LocationName);
        if (i == 0) {
            Console::WriteLine("Tags: " + main1->ActivityDetail[i]->TagsPerActivity->Tags->SportTag);
        }
        else {
            Console::WriteLine("Tags: " + main1->ActivityDetail[i]->TagsPerActivity->Tags->ClassTag);
        }
        Console::WriteLine("Cantidad de participantes inscritos: " + main1->ActivityDetail[i]->Activity->TotalParticipants);
        Console::WriteLine("\n");
        Console::WriteLine("Participantes:");
        Console::WriteLine("Alumno: " + main1->ActivityDetail[i]->User->Account);
        Console::WriteLine("Codigo Pucp: " + main1->ActivityDetail[i]->User->PucpId);
        Console::WriteLine("\n");
    }
    */
    return 0;
}
