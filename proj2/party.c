// This program asks the user to enter information about eggs, bacon, and bread for a breakfast party. The program will then evaluate a set of logical expressions and print out specific messages based on the truth value of those expressions.
#include <stdio.h>

int main (void)
{
int budget, eggsamount, eggsprice, baconamount, baconprice, breadamount, breadprice; /*Declares variables for use*/
printf("Enter the number of cartons of eggs and price per carton:\n");
scanf("%d %d", &eggsamount, &eggsprice);
printf("Enter the number of pounds of bacon and price per pound:\n");
scanf("%d %d", &baconamount, &baconprice);
printf("Enter the number of loaves of bread and price per loaf:\n");
scanf("%d %d", &breadamount, &breadprice); 
printf("Enter Jerry's budget:\n");
scanf("%d", &budget);
if (budget>0){ /*The first if-else statement is to check the budget with logical operator to see if Jerry has a budget above 0 or not, or enough to buy any supplies.*/
printf("(1)Jerry has money to buy breakfast supplies.\n");
}
else{
printf("(1)Jerry does not have money to buy anything.\n");
}

if (budget>((eggsamount*eggsprice)+(baconamount*baconprice)+(breadamount*breadprice))){ /*This if elseif else statement is to evaluate condition 2. Contains a cascaded and nested if elseif else.*/
printf("(2)Jerry can buy all the supplies for his party.\n");
}
else if (budget<((eggsamount*eggsprice)+(baconamount*baconprice)+(breadamount*breadprice))){
	if (budget>(eggsamount*eggsprice)+(baconamount*baconprice)){
	printf("(2)Jerry can only buy eggs and bacon for his party.\n");
	}
	else if (budget>(eggsamount*eggsprice)+(breadamount*breadprice)){
	printf("(2)Jerry can only buy eggs and bread for his party.\n");
	}
	else if (budget>(baconamount*baconprice)+(breadamount*breadprice)){
	printf("(2)Jerry can only buy bacon and bread for his party.\n");
	}
	else if ((budget>=(eggsamount*eggsprice))&&(budget<((eggsamount*eggsprice)+(baconamount*baconprice)+(breadamount*breadprice)))){
	printf("(2)Jerry can only buy eggs for his party.\n");
	}
	else if ((budget<=(baconamount*baconprice))&&((eggsamount*eggsprice)+(baconamount*baconprice)+(breadamount*breadprice))){
	printf("(2)Jerry can only buy bacon for his party.\n");
	}
	else if ((budget<=(breadamount*breadprice))&&((eggsamount*eggsprice)+(baconamount*baconprice)+(breadamount*breadprice))){
	printf("(2)Jerry can only buy bread for his party.\n");
	}
	else{
	printf("(2)Jerry is going to have a very sad party.\n");
	}
}
if (budget>=(eggsamount*eggsprice)&&(budget<(baconamount*baconprice))&&(budget<(breadamount*breadprice))){ /*This statement is to check condition 3.*/
printf("(3)Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
}
else if (budget>=(baconamount*baconprice)&&(budget<(eggsamount*eggsprice))&&(budget<(breadamount*breadprice))){
printf("(3)Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
}
else if (budget>=(breadamount*breadprice)&&(budget<(baconamount*baconprice))&&(budget<(eggsamount*eggsprice))){	
printf("(3)Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
}
else{
printf("(3)More than one of the breakfast supplies is cheaper than or equal to Jerry's budget or they are all more expensive.\n");
}

if (budget<((eggsamount*eggsprice)&&(baconamount*baconprice))){ /*Checking condition 4 begins here*/
printf("(4)At least two breakfast supplies are more expensive than Jerry's budget.\n");
}
else if (budget<((eggsamount*eggsprice)&&(breadamount*breadprice))){
printf("(4)At least two breakfast supplies are more expensive than Jerry's budget.\n");
}
else if (budget<((baconamount*baconprice)&&(breadamount*breadprice))){
printf("(4)At least two breakfast supplies are more expensive than Jerry's budget.\n");
}
else{
printf("(4)At least two breakfast supplies are cheaper than or equal to Jerry's budget.\n");
}

if (((eggsamount*eggsprice)==(baconamount*baconprice)==(breadamount*breadprice))){ 
/*Condition 5 begins here.*/printf("(5)All the supplies cost the same\n");
}
else if (((eggsamount*eggsprice)==(baconamount*baconprice))||(eggsamount*eggsprice)==(breadamount*breadprice)||(baconamount*baconprice)==(breadamount*breadprice)){
printf("(5)Only two breakfast supplies cost the same.\n");
}
else{
printf("(5)No supplies have the same total price.\n");
}
return 0;
}




