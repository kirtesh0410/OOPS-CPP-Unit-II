# OOPs-CPP-Unit-II
Object Oriented Programming with C++ - Unit II

Student Name :- Kirtesh Bharambe

ZPRN :- 125UET1089

Class/Division :- SY AIDS C

Unit :- II

List of Programs :- 

                    1)Employee Payroll System
                    2)Digital Payment Gateway
                    3)Vehicle Fleet Management
                    4)Mini Project :- Banking System with Account Hierarchy

Brief descriptions of each Program :- 

• 1)Employee Payroll System :-

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

• 2)Digital Payment Gateway :-

This C++ program implements a **Digital Payment Gateway** that supports different payment methods such as **credit card, UPI, and net banking**.

* The **`PaymentMethod` abstract class** provides common information such as transaction ID and payment amount.
* Derived classes such as **`CreditCardPayment`**, **`UPIPayment`**, and **`NetBankingPayment`** inherit from the base class.
* A **pure virtual function `processPayment()`** ensures that every payment method provides its own payment-processing implementation.
* **Hierarchical inheritance** is used because multiple payment classes inherit from the same `PaymentMethod` class.
* A **virtual destructor** ensures proper cleanup of derived objects.
* **Runtime polymorphism** is demonstrated by storing different payment objects in a vector of `unique_ptr<PaymentMethod>` and calling `processPayment()` through the base-class pointer.
* Each payment type processes the transaction differently while following the same common interface.

**In short:** The program demonstrates how **abstract classes, inheritance, pure virtual functions, and runtime polymorphism** can be used to build a flexible payment gateway supporting multiple payment methods.

• 3)Vehicle Fleet Management :-

This C++ program implements a **Vehicle Fleet Management System** for a logistics company that manages different types of vehicles such as **trucks, delivery vans, and delivery bikes**.

* The **`Vehicle` base class** stores common information such as vehicle ID, registration number, and fuel level.
* Derived classes **`Truck`**, **`DeliveryVan`**, and **`Bike`** inherit the common properties from the `Vehicle` class.
* **Hierarchical inheritance** is used because multiple vehicle classes are derived from the same base class.
* **Protected data members** allow derived classes to access common vehicle information.
* The `displayInfo()` function is declared as a **virtual function** and is overridden in each derived class to display specialized vehicle details.
* Each vehicle has its own specialized property: **cargo capacity** for trucks, **package count** for delivery vans, and **delivery box availability** for bikes.
* The `startEngine()` function starts the vehicle, while `refuel()` updates the fuel level.
* **Runtime polymorphism** is demonstrated using `vector<unique_ptr<Vehicle>>`, allowing different vehicle objects to be managed through base-class pointers.

**In short:** The program demonstrates how **inheritance, virtual functions, function overriding, protected data, and polymorphism** can be used to manage different types of vehicles in a logistics fleet while sharing common vehicle functionality.

• 4)Mini Project :- Banking System with Account Hierarchy :-

### Brief Description of the Mini-Project

This C++ mini-project implements a **Banking System with Account Hierarchy** to manage different types of bank accounts such as **Savings Account, Current Account, and Fixed Deposit Account**.

* The **`Account` base class** stores common information such as account number, account holder name, and balance.
* Derived classes **`SavingsAccount`**, **`CurrentAccount`**, and **`FixedDepositAccount`** inherit the common properties from the base class.
* **Hierarchical inheritance** is used because multiple account types are derived from the same `Account` class.
* Functions such as **deposit** and **withdrawal** are provided to manage account balances.
* **Virtual functions** are used to implement account-specific interest calculation and behavior.
* Each account type can have its own **interest rate and calculation method**.
* **Encapsulation** protects account information from direct external access.
* **Runtime polymorphism** can be used to handle different account types through a common `Account` interface.

**In short:** The mini-project demonstrates how **inheritance, virtual functions, encapsulation, and polymorphism** can be used to build a banking system where different account types share common operations but have their own specific interest and account behavior.




