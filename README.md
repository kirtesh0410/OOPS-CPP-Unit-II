Brief description of Program :- 

• Vehicle Fleet Management :-

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
