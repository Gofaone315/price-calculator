""" price milestone calculator
::@Gofaone315
::https://github.com/Gofaone315 """
child_meal= float(input("What's the price of children's meal? "))
adult_meal = float(input("What's the price of adults meal? "))
child_number = int(input("How many children are there? "))
adult_number = int(input("How many adults are there? "))
child_cost = child_number * child_meal
adult_cost = adult_number * adult_meal
subtotal = child_cost + adult_cost
print(f"subtotal: {subtotal:.2f}")
sales_tax_rate = float(input("What is the sales tax rate? "))
sales_tax = (subtotal*sales_tax_rate)/100
print(f"Sales Tax: {sales_tax:.2f}")
total_price = sales_tax + subtotal
print(f"Total: {total_price:.2f}")
payment = float(input("What's the payment amount? "))
change = float(payment - total_price)
if change == 0:
    print("Thank you for buying at our shop, Goodbye!")
elif change < 0:
    print(f"Money short with: {change/-1:.2f}")
else:
    print(f"Change: {change:.2f}")