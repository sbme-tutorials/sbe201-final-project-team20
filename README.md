# sbe201-final-project-team20
---
sbe201-final-project-team20 created by GitHub Classroom
# Fat Grinder APP project
---

**First Phase**

- Collecting data and building the data base files as accurate as it could be.

- Brain storming on how the main algorithms gonna work, drawing outlines and principle equations.

- Trying but failing on using .XSL as our database file, yet managing to transforming it into .CSV that's more programmer's friendly file type.

- Reaching out for professionals and experienced personnel to assist on building a friendly GUI.

---

**Second Phase**

- Spending most of the time on building the GUI using QT software application.

- Achieving first milestone by delivering the Menu Header file and testing it successfully.

- Redirected to use the knapsack problem and its solution as our main application algorithm.

- Rethinking strategies and passing already built parameters to its equivalent parameters in the knapsack algorithm.

- Successfully testing the algorithm.
---

**Third Phase**

- Re-modifying Menu.hpp to fit with the knapsack algorithm and building more functions to make the file easier to use and to understand.

- Test the knapsack and successfully run a test on it.

- Finally building up the application.

---

**Problems faced**

- Calling out files in .xsl didn't work out, we had to find another type of files which looks similar to .xsl in structure and arrangement.

- The functions built to call data from the files didn't work as it should, so we had to replicate the calling code lines a couple more times to call all the data which made the Menu.hpp very large regarding code lines.

- The knapsack arrays wouldn't work due to very large capacities needed to work out the problem, so we had to use the heap and build a dynamic array.

---

**Crucial code segments**

```c++
#include <fstream>  //To access files
std::ifstream bfone("Breakfast1.csv");
// ifstream is for inputing data from the file
```
```c++
while (bfone >> index >> meal >> protein >> calorie)
// To loop the file and pass data to variables
```

```c++
Protein.push_back(protein);
Calorie.push_back(calorie);
Meal.push_back(meal);
// pushing variables into vectors of the same tybe
```

```c++
void displayBreakfast()
 void displayLunch()
  void displayDinner()
   void displayVegetables()
    void displayFruits()
     void displayDrinks()
      void selectedFood(int x)
       void preparedData(int x, int y, int z)
        void knapsack(double **arrray, std::vector<double> val, std::vector<int> w, int items, int capacity)
```
