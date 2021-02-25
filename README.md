# Google-Hashcode-2021

Some restrictions/notable points:
1. Each intersection can only be listed once in the submission file. 
2. Each street name can only be listed once per schedule.
3. If the street name is not present in intersection conguration it means its trac light is always red.
4. If an intersection conguration is not present in the submission file then all of its trac lights are always red.


Input format:
1. Simulation time >> Intersections >> Streets >> Cars >> Points                      //Line 1
2. Street start >> Street end >> "Street name" >> Time required to cover street       //Line [2 to n]
3. Number of Streets the car will travel in >> "Street names" >> "..." >> "..."       //Line n + 1
