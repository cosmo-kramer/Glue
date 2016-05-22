class Employee:
   
   empCount = 0 : int

   def __init__(self, name, salary): s int 
      self.name = name :s
      self.salary = salary :int
      Employee.empCount += 1
   
   def displayCount(self): 
     print "Total Employee %d" % Employee.empCount

   def displayEmployee(self): 
      print "Name : ", self.name,  ", Salary: ", self.salary


emp1 = Employee("Zara", 2000) :Employee

emp2 = Employee("Manni", 5000) :Employee
emp1.displayEmployee()
emp2.displayEmployee()
print "Total " + emp1.displayCount()	
