class Base {
    public:
        int pub;         // accessible anywhere
    protected:
        int prot;        // accessible in Base and derived classes
    private:
        int priv;        // accessible only in Base
    };

    
    //      Inheritance Types in C++

    //      Inheritance Type	    Syntax	                    Meaning
    //      public	            class A : public B	        Keeps public and protected of base as-is in derived class.
    //      protected	        class A : protected B	    Makes public and protected of base become protected in derived.
    //      private	            class A : private B	        Makes all base public and protected members private in derived.


    //      Effect on Members After Inheritance

    //      Base Class Member	    Inherited via public	    via protected	    via private
    //      public	                public	                    protected	        private
    //      protected	            protected	                protected	        private
    //      private	                not inherited	            not inherited	    not inherited