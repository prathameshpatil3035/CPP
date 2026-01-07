// C++ STRUCTURE – Complete Note (Single File, Single main())
// Covers:
// - Primary & secondary data types
// - Methods inside struct
// - Default access modifier
// - Manual access modifiers
// - Default member values
// - Object creation (stack & heap using new)
// - Pointer & reference usage
// - Output demonstration

#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Employee
{
    // 🔹 Default access modifier in struct is PUBLIC
    int id = 101;                 // primary data type with default value
    double salary = 50000.50;     // primary data type
    bool isActive = true;         // primary data type
    string name = "Paurush";      // secondary (object) data type

private:
    // 🔹 Private member (manual access modifier)
    string secretCode = "EMP-SECRET";

public:
    // 🔹 Method inside structure
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Active: " << isActive << endl;
    }

    // 🔹 Method accessing private member
    void showSecret()
    {
        cout << "Secret Code: " << secretCode << endl;
    }
};

int main()
{
    cout << "=== Structure Object (Stack Allocation) ===" << endl;

    // 🔹 Creating object of structure (stack)
    Employee e1;
    e1.display();
    e1.showSecret();

    cout << endl;

    cout << "=== Structure Object using new (Heap Allocation) ===" << endl;

    // 🔹 Creating object using new keyword (heap)
    Employee* e2 = new Employee();
    e2->id = 202;
    e2->name = "Rahul";
    e2->salary = 75000;

    e2->display();

    cout << endl;

    cout << "=== Pointer to Structure ===" << endl;

    // 🔹 Pointer to structure
    Employee* ptr = &e1;
    ptr->name = "Modified Name";
    ptr->display();

    cout << endl;

    cout << "=== Reference to Structure ===" << endl;

    // 🔹 Reference to structure
    Employee& ref = e1;
    ref.salary = 90000;
    ref.display();

    // 🔹 Clean up heap memory
    delete e2;

    return 0;
}

/*
================== OUTPUT ==================

=== Structure Object (Stack Allocation) ===
ID: 101
Name: Paurush
Salary: 50000.5
Active: 1
Secret Code: EMP-SECRET

=== Structure Object using new (Heap Allocation) ===
ID: 202
Name: Rahul
Salary: 75000
Active: 1

=== Pointer to Structure ===
ID: 101
Name: Modified Name
Salary: 50000.5
Active: 1

=== Reference to Structure ===
ID: 101
Name: Modified Name
Salary: 90000
Active: 1

==========================================
*/
