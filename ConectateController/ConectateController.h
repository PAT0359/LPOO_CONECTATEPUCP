#pragma once

using namespace System;

using namespace ConectateModel;
using namespace System::Collections::Generic;

namespace ConectateController {
	public ref class Controller
	{
		private:
			//Activity
			static List <Activity^>^ activityList = gcnew List<Activity^>(); //variable de clase o atributo estático
			//Report
			static List <Report^>^ reportList = gcnew List<Report^>();
			//Location
			static List <Location^>^ locationList = gcnew List<Location^>();
			//User
			static List <User^>^ userList = gcnew List<User^>();
			//Tags
			static List <Tags^>^ tagList = gcnew List<Tags^>();
		// TODO: Agregue aquí los métodos de esta clase.
		public:
			//Activity
			static int CreateActivity(Activity^ activity); //Métodos estáticos o de clase
			static int UpdateActivity(Activity^ activity);
			static int DeleteActivity(int activityId);
			static List <Activity^>^ QueryAllActivities();
			static Activity^ QueryActivityById(int activityId);
			//Report
			static int CreateReport(Report^ report);
			static int DeleteReport(int reportId);
			static Report^ QueryReportById(int reportId);
			static List <Report^>^ QueryAllReports();
			//Location
			static int AddLocation(Location^ location);
			static int UpdateLocation(Location^ location);
			static int DeleteLocation(int locationId);
			static List <Location^>^ QueryAllLocation();
			static Location^ QueryLocationById(int locationId);
			//User
			static int AddUser(User^ user);
			static int UpdateUser(User^ user);
			static int DeleteUser(int userId);
			static List <User^>^ QueryAllUsers();
			static User^ QueryUserById(int userId);
			//Tags
			static int CreateTags(Tags^ tags);
			static int UpdateTag(Tags^ tags);
			static int DeleteTags(int tagId);
			static List <Tags^>^ QueryAllTags();
			static Tags^ QueryTagsById(int tagId);

	};
}