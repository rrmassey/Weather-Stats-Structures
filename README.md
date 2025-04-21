# Weather Statistics Program in C++

This C++ program is designed to collect, store, and analyze weather data for a full year (12 months). It utilizes an array of structures to efficiently manage information about rainfall, snowfall, and temperature fluctuations throughout the year.

## Features

* **Data Storage using Structures:** Employs an array of `WeatherStats` structures to organize and store monthly weather data, including total rainfall, total snowfall, high temperature, and low temperature.
* **Robust User Input Validation:** Implements input validation to ensure data integrity. The program checks for:
    * Negative values for rainfall and snowfall, prompting the user for valid non-negative input.
    * Temperature values outside a realistic range (-150°F to 150°F), guiding the user to enter values within the acceptable bounds.
* **Extreme Temperature Tracking:** Identifies and displays the highest and lowest recorded temperatures of the year, along with the corresponding month in which they occurred.
* **Comprehensive Statistical Output:** Calculates and displays:
    * The average monthly rainfall and the total annual rainfall.
    * The average monthly snowfall and the total annual snowfall.
    * The average temperature for each month.
    * The average of all the monthly average temperatures for the entire year.
* **Clear User Interface:** Provides informative prompts to guide the user through the data input process.
