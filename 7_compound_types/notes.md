# Compound types
A compound type is a type that is defined in terms of another type.

Examples: references and pointers

## References
- A reference defines an alternative name for an object.
- A reference type refers to another type.
- Once initialized, a reference remains bound to its initial object.
- Because there is no way to rebind a reference to refer to a different object.
- Because there is no way to rebind a reference, reference must be intialized.
- A reference is not an object. Instead, a reference is just another name for an already existing object.
- After a reference has been defined, all operations on that reference are actually operations on the object to which the reference is bound

## Pointers
- A pointer is a compound type that "points to" another type.
- Pointers are used for indirect access to other objects.
- The different between pointers and references:
  - A pointer is an object on its own right. Therefore, it can be initialized without pointing to any existing object. It should be noted that a reference must be bound to an already exxisting object when it is initialied.
  - Pointers can be assigned and copied. A single pointer can point to several different objects over its lifetime.
- Pointer definiton: `*d` where d is the name is being defined.
  - Ex: `int *p`,
  - Ex: `double *p = &val` where "val" is a variable of type "double.
- A pointer holds the address of an object. As a reminder, we get the address of an object by using the "address-of" operator (`&`).