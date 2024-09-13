//Weather Stats Structures
#include <iostream>
#include <string>
#include <limits>
using namespace std;

//define the structure with all variables
struct WeatherStats{
double Total_Rainfall;
double Total_Snowfall;
double High_Temperature;
double Low_Temperature;
double Average_Temperature;
};

int main() {
  //state promt for user input and store in array of strucutres
  cout << "Enter the following information for the weather statistics for the past year:" << endl;
  
  //array of structures
  const int Months = 12;
  WeatherStats Weather[Months];
  int i;    //loop for user input on rainfall, snowfall, high temp, and low temp
  cout << "enter the total rainfall for months 1-12: ";
  for (i = 0; i < Months; i++)
    {
      cin >> Weather[i].Total_Rainfall;
      if (Weather[i].Total_Rainfall < 0)
      {
        cout << "Invalid input. Please enter a number greater than or equal to 0." << endl;
        i--;    //decrement to re-enter input for same month
      }
    }
  
  cout << "enter the total snowfall for months 1-12: ";
  for (i = 0; i < Months; i++)
    {
      cin >> Weather[i].Total_Snowfall;
      if (Weather[i].Total_Snowfall < 0)
      {
        cout << "Invalid input. Please enter a number greater than or equal to 0." << endl;
        i--;
      }
    }
  
  cout << "enter the high temperature for the months 1-12: ";
  for (i = 0; i < Months; i++)
    {
      cin >> Weather[i].High_Temperature;
      if (Weather[i].High_Temperature > 150 || Weather[i].High_Temperature < -150)
      {
        cout << "Invalid input. Please enter a temperature between 150 and -150 degrees Fahrenheit." << endl;
        i--;
      }
    }
  
  cout << "enter the low temperature for the months 1-12: ";
  for (i = 0; i < Months; i++)
    {
      cin >> Weather[i].Low_Temperature;
      if (Weather[i].Low_Temperature > 150 || Weather[i].Low_Temperature < -150)
      {
        cout << "Invalid input. Please enter a temperature between 150 and -150 degrees Fahrenheit." << endl;
        i--;
      }
    }

  //calculate and display the average monthly rainfall, and total rainfall for the year
  double totalRainfall = 0;
  for (i = 0; i < Months; i++)
    {
      totalRainfall += Weather[i].Total_Rainfall;
    }
  cout << "The average monthly rainfall is: " << totalRainfall / Months << " inches" << endl;
  cout << "The total rainfall for the year is: " << totalRainfall << " inches" << endl;

  //calculate and display the average monthly snowfall, and total snowfall for the year
  double totalSnowfall = 0;
  for (i = 0; i < Months; i++)
    {
      totalSnowfall += Weather[i].Total_Snowfall;
    }
  cout << "The average monthly snowfall is: " << totalSnowfall / Months << " inches" << endl;
  cout << "The total snowfall for the year is: " << totalSnowfall << " inches" << endl;

  //display the highest and lowest temperatures for the year
  double highestTemp = Weather[0].High_Temperature;
  double lowestTemp = Weather[0].Low_Temperature;
  int highestTempMonth = 1;
  int lowestTempMonth = 1;
  for (i = 1; i < Months; i++)
    {
      if (Weather[i].High_Temperature > highestTemp)
      {
        highestTemp = Weather[i].High_Temperature;
        highestTempMonth = i + 1;
      }
      if (Weather[i].Low_Temperature < lowestTemp)
      {
        lowestTemp = Weather[i].Low_Temperature;
        lowestTempMonth = i + 1;
      }
    }
  cout << "The highest temperature for the year is: " << highestTemp << " °F, in month: " << highestTempMonth << endl;
  cout << "The lowest temperature for the year is: " << lowestTemp << " °F, in month: " << lowestTempMonth << endl;

  //calculate and display the average monthly temperatures and months
  double aveTempMonths = 0;
  for (i = 0; i < Months; i++)
    {
      Weather[i].Average_Temperature = ((Weather[i].High_Temperature + Weather[i].Low_Temperature) / 2.0);
      aveTempMonths += Weather[i].Average_Temperature;
      cout << "The average temperature for month " << (i + 1) << " is: " << Weather[i].Average_Temperature << " °F" << endl;
    }
  
  //calculate and display the average of all the monthly average temperatures
  double aveTemp = 0;
  for (i = 0; i < Months; i++)
    {
      Weather[i].Average_Temperature = ((Weather[i].High_Temperature + Weather[i].Low_Temperature) / 2.0);
      aveTemp += Weather[i].Average_Temperature;
    }
  double aveTemp_year = aveTemp / Months;
  cout << "The average of all the monthly average temperatures is: " << aveTemp_year << " °F" << endl;
  return 0;
}
