
// When const is written after the function name, it means:
// ❝ This function will NOT modify the object’s data members ❞
class Person {
private:
    int age;

public:
    Person(int a) { age = a; }

    int getAge() const {   // const member function
        return age;
    }

    explicit Entity(int x) { // explicit constructor -> it is a constructor that is not allowed to be used for implicit conversions
        value = x;
    }

    void setAge(int a) {   // non-const member function
        age = a;
        // this -> (*ClassName const)   ou CANNOT change this  (You CAN modify the object it points to)
    }

    void display() const {
        cout << "Age: " << age << endl;
        // this -> (const *ClassName const)  (this pointer cannot change ✅ (same as before) Object pointed by this is const ❌ (cannot modify members))
    }
};

// memcopy( destination, source, size ) -> it is a function that copies the contents of the source to the destination. dest should be a pointer to the destination array and source should be a pointer to the source array. size is the number of bytes to copy.