Brief description of Project :- 

• Mini Project :- Banking System with Account Hierarchy :-

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




