#include<iostream>

using namespace std;

// Registered customer

class rcustomer
{
private:
  int custID;
  char custPassword;
  char custName;
  char custEmail;
  char telNo;

public:
  rcustomer(int custID,char custPassword,char custName,char custEmail,char telNo);
  void logging();
  void logout();
  void displayDetails();
};
rcustomer::rcustomer(int custID,char custPassword,char custName,char custEmail,char telNo)
{}
void rcustomer::logging()
{}
void rcustomer::logout()
{}
void rcustomer::displayDetails()
{
      
}

//recipe  
class Recipe
{
private:
  char recipeID;
  char recipeName;
  double recipePrice;

public:
  Recipe(char recipeID, char recipeName, double 
  recipePrice);
  void addRecipe();
  void displayRecipe();
};


void Recipe::addRecipe()
{}
void Recipe::displayRecipe()
{}

//main
int main()
{
  unregistercustomer*nUser;
  nUser = new unregistercustomer("Kamal","kamal@gmail.com",123456123);//
  nUser-> registration();

  Hall * H;
  H = new Hall(123,"midhal",123,155.50);
  H->displayHall();

  staff *s1;
  s1->display_confamation_details();
  s1->conform_payment_details();

  Feedback*fb;
  fb->displayFeedback();
  fb->~Feedback();

  Recipe *r1;
  r1->addRecipe();
  r1->displayRecipe();

  Book *bk;
  bk->calculateBookingPrice();
  bk-> displayBookingDetails();
  bk-> addBooking();

  payment *p1;
  p1->displayPayment();
  p1-> calculatePayment();

  rcustomer *rc1;
  rc1-> logging();
  rc1-> logout();
  rc1-> displayDetails();
}  