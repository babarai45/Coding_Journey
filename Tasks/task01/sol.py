# print("Hello, World!")


# radius = float(input("Enter the radius of the circle: "))
# PI = 3.14
# circumferece = 2*PI*radius
# print(f"circumfere is with radis {radius} is {circumferece:.2f}")

cost_per_dozen =0.0
sale_value_per_dozen = 0.0
cost_per_bana =0.0
sale_value_per_bana=0.0
total_sales =0.0
total_expence =0.0
net_profit =0.0

cost_per_dozen = input("Enter Cost of Banan per Dozen:")
sale_value_per_dozen = input("Enter sale value per dozen: ")
  
cost_per_bana = float(cost_per_dozen)/12.0
sale_value_per_bana = float(sale_value_per_dozen)/12.0
total_sales = 25*sale_value_per_bana
total_expence = 25*cost_per_bana

net_profit = total_sales - total_expence
if net_profit>0:
        print("Total profit after saling 25 banans is ",net_profit)
 
elif net_profit < 0:
        print("Total loss is after saling 25 banas is ",net_profit)
else:
        print("Not profit and not loss\n")

