Copy assignment operator
The copy assignment operator (operator=) is used to copy values from one object to another already existing object.
Both copy constructor and copy assignment operator copy one object to another.
Copy constructor initializes new objects;
Assignment operator replaces the contents of existing objects.

If a new object has to be created before the copying can occur, the copy constructor is used (note: this includes passing or returning objects by value).
If a new object does not have to be created before the copying can occur, the assignment operator is used.

 "Accuracy" refers to how close a measurement is to the true value;
 "Precision" has to do with how much information you have about a quantity, how uniquely you have it pinned down.

 Integers have complete accuracy, 2 is exactly 2. But integers lack accuracy, dividing both 5 and 4 over 2 will both get 2.
 Floating point numbers are accurate but have poor accuracy. 0.333333 can ever be equal to 1/3; we can never have enough 3's.