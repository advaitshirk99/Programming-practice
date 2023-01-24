import pulp as p 
  
# Create a LP Minimization problem 
Lp_prob = p.LpProblem('Problem', p.LpMaximize)  
  
# Create problem Variables  
x = p.LpVariable("x", lowBound = 0)   # Create a variable x >= 0 
y = p.LpVariable("y", lowBound = 0)   # Create a variable y >= 0 
#z= p.LpVariable("z", lowBound=0)      # Create a variable z >= 0 
# Objective Function 
Lp_prob += 10 * x + 9 * y # + 45 * z     
  
# Constraints: 
Lp_prob +=  3*x + 3* y <= 21
Lp_prob += 4*x+3*y <= 24
#Lp_prob += x >= 10
#Lp_prob += z <= 30
#Lp_prob += x >=20
#Lp_prob += y+z>=15
#Lp_prob += x,y,z>=0  
# Display the problem 
print(Lp_prob) 
  
status = Lp_prob.solve()   # Solver 
print(p.LpStatus[status])   # The solution status 
  
# Printing the final solution 
print(p.value(x), p.value(y), p.value(Lp_prob.objective)) 