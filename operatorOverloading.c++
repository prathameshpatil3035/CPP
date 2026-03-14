#include <iostream>
using namespace std;

/*
===============================================================================
C++ OPERATOR OVERLOADING – COMPLETE NOTES WITH EXAMPLES
(using namespace std) | SINGLE FILE NOTE
===============================================================================

Operator overloading allows operators to work with user-defined types.

Example concept:
Instead of:

    add(a,b)

We write:

    a + b

for objects.

===============================================================================
1. BASIC RULES OF OPERATOR OVERLOADING
===============================================================================

RULE 1 — Only EXISTING operators can be overloaded

Valid:
    operator+
    operator*

Invalid (new operators cannot be created):
    operator**   ❌
    operator##   ❌
    operator+-   ❌

Example (valid):

class A{
public:
    int x;
    A(int v){ x=v; }

    A operator+(A obj)
    {
        return A(x + obj.x);
    }
};

Usage:
    A a(10), b(20);
    A c = a + b;


-------------------------------------------------------------------------------

RULE 2 — At least ONE operand must be USER-DEFINED TYPE

Invalid:

    void operator+(int a, int b);   ❌

Reason:
Both operands are primitive types.

Valid:

class A{};

void operator+(A a, int b) { }

-------------------------------------------------------------------------------

RULE 3 — Cannot change number of operands

Example:

+ is binary → must remain binary

Invalid:

    A operator+(A obj);   ❌ (missing operand)

Correct:

    A operator+(A a, A b);

-------------------------------------------------------------------------------

RULE 4 — Operator precedence cannot change

Example:

    a + b * c

Multiplication always happens first.

-------------------------------------------------------------------------------

RULE 5 — Operator associativity cannot change

Example:

    a + b + c

Always evaluated left → right.

-------------------------------------------------------------------------------

RULE 6 — Cannot combine operators

Invalid:

    operator**   ❌
    operator+-   ❌
    operator*=*  ❌

Valid:

    operator*
    operator*=

Example:

class A{
public:
    int x;

    A(int v){ x=v; }

    A operator*(A obj)
    {
        return A(x * obj.x);
    }
};

-------------------------------------------------------------------------------

RULE 7 — Some operators MUST be member functions

Operators:

    =
    []
    ()
    ->

Example:

class A{
public:
    int arr[5];

    int& operator[](int index)
    {
        return arr[index];
    }
};

Usage:

    A obj;
    obj[1] = 50;

-------------------------------------------------------------------------------

RULE 8 — Operator overloading can be done in three ways

1) Member function
2) Global function
3) Friend function

===============================================================================
2. OPERATORS THAT CANNOT BE OVERLOADED
===============================================================================

These operators cannot be overloaded:

    ::      scope resolution
    .       member access
    .*      pointer-to-member
    ?:      ternary operator
    sizeof
    typeid
    alignof

Invalid Example:

    operator::();  ❌

===============================================================================
3. OPERATORS THAT CAN BE OVERLOADED
===============================================================================

Arithmetic
+  -  *  /  %

Increment / Decrement
++  --

Relational
==  !=  <  >  <=  >=

Logical
&&  ||  !

Bitwise
&  |  ^  ~  <<  >>

Assignment
=  +=  -=  *=  /=  %=

Bitwise Assignment
&=  |=  ^=  <<=  >>=

Other
[]   ()   ->   ->*
,    new   delete
new[] delete[]

===============================================================================
4. MEMBER FUNCTION OPERATOR OVERLOADING
===============================================================================

Example: Addition of objects

class Num{
public:
    int value;

    Num(int v){ value=v; }

    Num operator+(Num obj)
    {
        return Num(value + obj.value);
    }
};

Usage:

    Num a(5), b(10);

    Num c = a + b;

Compiler converts:

    a + b

to

    a.operator+(b)

===============================================================================
5. GLOBAL OPERATOR OVERLOADING (NO MEMBER CALL)
===============================================================================

Example:

class Num{
public:
    int value;

    Num(int v){ value=v; }
};

Num operator+(Num a, Num b)
{
    return Num(a.value + b.value);
}

Usage:

    Num a(10), b(20);

    Num c = a + b;

Compiler internally does:

    operator+(a,b)

===============================================================================
6. STREAM OPERATOR EXAMPLE
===============================================================================

Example similar to cout << value

class Num{
public:
    int x;

    Num(int v){ x=v; }
};

ostream& operator<<(ostream& out, Num n)
{
    out << n.x;
    return out;
}

Usage:

    Num n(50);

    cout << n;

===============================================================================
7. UNARY OPERATOR EXAMPLE
===============================================================================

class A{
public:
    int x;

    A(int v){ x=v; }

    void operator-()
    {
        x = -x;
    }
};

Usage:

    A a(10);

    -a;

===============================================================================
8. PREFIX INCREMENT
===============================================================================

class A{
public:
    int x;

    A(int v){ x=v; }

    void operator++()
    {
        ++x;
    }
};

Usage:

    ++a;

===============================================================================
9. POSTFIX INCREMENT
===============================================================================

class A{
public:
    int x;

    A(int v){ x=v; }

    void operator++(int)
    {
        x++;
    }
};

Usage:

    a++;

===============================================================================
10. ARRAY OPERATOR
===============================================================================

class Array{
public:

    int arr[5];

    int& operator[](int i)
    {
        return arr[i];
    }
};

Usage:

    Array obj;

    obj[2] = 200;

===============================================================================
11. FUNCTION CALL OPERATOR
===============================================================================

class Fun{
public:

    void operator()()
    {
        cout << "Function object executed\n";
    }
};

Usage:

    Fun f;

    f();

===============================================================================
12. MEMBER ACCESS OPERATOR
===============================================================================

class Node{
public:

    int value;

    Node(int v){ value=v; }

    Node* operator->()
    {
        return this;
    }
};

Usage:

    Node n(10);

    cout << n->value;

===============================================================================
13. IMPORTANT INTERVIEW POINTS
===============================================================================

1. Operator overloading improves readability.

2. Must involve user-defined type.

3. Cannot overload operators only for primitive types.

Invalid:

    operator+(int,int)

4. Cannot create new operators.

5. Cannot change operator precedence.

6. Cannot combine operators.

Invalid:

    operator**

7. Operators = [] () -> must be member functions.

8. << and >> are usually overloaded globally.

===============================================================================
END OF OPERATOR OVERLOADING NOTES
===============================================================================
*/

int main()
{
    cout << "Operator Overloading Notes Loaded\n";
    return 0;
}