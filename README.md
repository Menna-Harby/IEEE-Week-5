# IEEE-Week-5
mini project involves creating an Online Order System for a market

## Online Shopping System Documentation:

### Overview:
The Online Shopping System allows users to enter information about items they want to purchase, calculates shipping costs, applies discounts, and generates an order receipt. The program is designed to be user-friendly and interactive.

### Flow and Logic:

#### Welcome Message:
Upon execution, the program starts with a welcome message to greet the user.

#### Item Entry Loop:
The program enters a loop where the user can enter information about items they want to purchase.
For each item, the user is prompted to enter:
Item name
Quantity
Price
Whether overnight shipping is required.
Input Validation:

The program performs basic input validation to ensure that quantities and prices are valid (positive values).

#### Shipping Cost Calculation:
Shipping costs are calculated based on the price of the item and whether overnight shipping is selected.
Regular shipping costs:
Items under $10: $2 shipping charge.
Items $10 or more: $3 shipping charge.
An additional $5 is added for overnight shipping.

#### Total Cost Calculation:
The total cost for each item is calculated as the sum of the item price, shipping costs, and quantity.

#### Continue Shopping Prompt:
After entering information for one item, the user is asked if they want to continue shopping.
If the user decides to continue, the loop repeats. If not, the loop exits.

#### Minimum Order Requirement:
The program enforces a minimum order requirement of 2 items. The loop continues until this requirement is met or the user decides not to continue.

#### Discount Application:
If the user orders more than 5 items, a 20% discount is applied to the total cost.

#### Order Receipt Display:
After completing the item entry process, the program displays an order receipt.
The receipt includes the number of items ordered, the total cost, and, if applicable, the discounted total cost.

#### Program Conclusion:
The program concludes with a thank you message for shopping.


#### -------------------------------------------------------------------------------------------------------------------------------


## Online Shopping System User Instructions:

### Welcome
Upon running the program, you will be greeted with a welcome message indicating that you are entering the Online Shopping System.

#### Item Entry:
Enter the name of the item you want to purchase when prompted.
Specify the quantity of the item you wish to buy. Ensure the quantity is a positive integer.

#### Price Input:
Input the price of the item. Ensure the price is a non-negative value.

#### Shipping Options:
Indicate whether the item requires overnight shipping.
Enter 'y' for yes or 'n' for no.

#### Shipping Costs:
Regular shipping costs:
Items under $10: $2 shipping charge.
Items $10 or more: $3 shipping charge.
Overnight delivery adds an additional $5 to the shipping cost.

#### Continue Shopping:
After entering information for one item, you will be prompted to decide if you want to continue shopping.
Enter 'y' for yes or 'n' for no.

#### Minimum Order Requirement:
A minimum of 2 items is required for one order. The program will continue to prompt for item information until the minimum is met or you decide not to continue.

#### Discounts:
If you order more than 5 items, a 20% discount will be applied to the total cost.

#### Order Receipt:
Once you finish entering items, the program will display an order receipt.
The receipt includes the number of items ordered, the total cost, and, if applicable, the discounted total cost.

#### Program Completion:
The program concludes with a thank you message for shopping. 

### Note:
Please follow the prompts carefully and ensure accurate inputs to get a precise order receipt.


Enjoy your online shopping experience! If you have any questions or encounter issues, feel free to contact support.
