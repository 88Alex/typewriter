Typewriter
==========

A powerful library that lets you easily create your own user-defined types.
Typewriter was inspired by Ada's powerful type-declaration features.

Usage
=====

Ada | C++ | Ruby
----|-----|-----
`type T is INTEGER` | `DEFINE_INTEGER_TYPE(T)` | `T = IntegerType()`
`type T is DECIMAL` | `DEFINE_DECIMAL_TYPE(T)` | `T = DecimalType()`
`type U is T` | `DEFINE_SUBTYPE(U, T)` | `U = Subtype(T)`
`type T is INTEGER range 1..100` | `DEFINE_RANGED_INTEGER(T, 1, 100)` | `T = RangedInteger(1, 100)`
`type T is DECIMAL range 1..100` | `DEFINE_RANGED_DECIMAL(T, 1, 100)` | `T = RangedDecimal(1, 100)`
`type U is T range 1..100` | `DEFINE_RANGED_SUBTYPE(U, T, 1, 100)` | `U = RangedSubtype(T, 1, 100)`
