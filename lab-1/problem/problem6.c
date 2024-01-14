/*6.Electricity bill at a certain power distribution company is computed as follows:
    First 50 units: BDT 4 per unit
    Next 30 units: BDT 3 per unit
    Next 20 units: BDT 2 per unit
    Next any units: BDT 1 per unit
    Write a C program that will take number of units used this month and
    calculate the bill in BDT.
*/
#include <stdio.h>

int main()
{
    float unit, price = 0.0;

    printf("Enter number of units = ");
    scanf("%f", &unit);

    if (unit <= 50) price = unit * 4;
    else if (unit <= 80) price = 100 + (unit - 50)*3;
    else if (unit <= 100) price = 190 + (unit - 80)*2;
    else price = 330 + (unit - 100);

    printf("BDT %.1f only", price);


    return 0;
}
