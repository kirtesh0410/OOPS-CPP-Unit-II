Brief description of Program :- 

• Employee Payroll System :-

This C++ program implements an **Employee Payroll System** for managing different types of employees such as **full-time employees, part-time employees, and interns**.

* The **`Employee` base class** stores common employee information such as employee ID, name, and department.
* **Derived classes** (`FullTimeEmployee`, `PartTimeEmployee`, and `Intern`) inherit the common properties from the base class.
* **Protected members** allow derived classes to access the employee information directly.
* **Hierarchical inheritance** is used because multiple classes inherit from the same `Employee` base class.
* The `Employee` class is an **abstract base class** because it contains the pure virtual function `calculateSalary()`.
* **Function overriding** is used by each derived class to calculate salary according to its employment type.
* **Constructor chaining** initializes the base-class information through the derived-class constructors.
* Full-time salary is based on a **fixed monthly salary**, part-time salary is calculated using **hourly rate × hours worked**, and interns receive a **fixed stipend**.

**In short:** The program demonstrates how **inheritance and polymorphism** can be used to create a flexible payroll system where different employee types have their own salary calculation methods while sharing common employee information.
