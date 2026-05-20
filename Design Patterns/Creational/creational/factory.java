public class FactoryDesignPatternDemo {

    // ==========================
    // Product Interface
    // ==========================
    interface Burger {
        void prepare();
    }

    // ==========================
    // Concrete Products
    // ==========================
    static class ClassicBurger implements Burger {

        @Override
        public void prepare() {
            System.out.println("Preparing Classic Burger");
        }
    }

    static class OrientalBurger implements Burger {

        @Override
        public void prepare() {
            System.out.println("Preparing Oriental Burger");
        }
    }

    // ==========================
    // Abstract Factory (Creator)
    // ==========================
    static abstract class Restaurant {

        public void orderBurger() {

            System.out.println("Ordering Burger...");

            Burger burger = createBurger();

            burger.prepare();
        }

        protected abstract Burger createBurger();
    }

    // ==========================
    // Concrete Factories
    // ==========================
    static class ClassicRestaurant
            extends Restaurant {

        @Override
        protected Burger createBurger() {

            System.out.println(
                    "Creating Classic Burger..."
            );

            return new ClassicBurger();
        }
    }

    static class OrientalRestaurant
            extends Restaurant {

        @Override
        protected Burger createBurger() {

            System.out.println(
                    "Creating Oriental Burger..."
            );

            return new OrientalBurger();
        }
    }

    // ==========================
    // Main Method
    // ==========================
    public static void main(String[] args) {

        Restaurant classicRestaurant =
                new ClassicRestaurant();

        classicRestaurant.orderBurger();

        System.out.println();

        Restaurant orientalRestaurant =
                new OrientalRestaurant();

        orientalRestaurant.orderBurger();
    }
}