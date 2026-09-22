Brief description of Program :- 

• Digital Payment Gateway :-

This C++ program implements a **Digital Payment Gateway** that supports different payment methods such as **credit card, UPI, and net banking**.

* The **`PaymentMethod` abstract class** provides common information such as transaction ID and payment amount.
* Derived classes such as **`CreditCardPayment`**, **`UPIPayment`**, and **`NetBankingPayment`** inherit from the base class.
* A **pure virtual function `processPayment()`** ensures that every payment method provides its own payment-processing implementation.
* **Hierarchical inheritance** is used because multiple payment classes inherit from the same `PaymentMethod` class.
* A **virtual destructor** ensures proper cleanup of derived objects.
* **Runtime polymorphism** is demonstrated by storing different payment objects in a vector of `unique_ptr<PaymentMethod>` and calling `processPayment()` through the base-class pointer.
* Each payment type processes the transaction differently while following the same common interface.

**In short:** The program demonstrates how **abstract classes, inheritance, pure virtual functions, and runtime polymorphism** can be used to build a flexible payment gateway supporting multiple payment methods.
