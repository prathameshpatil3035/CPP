public class AbstractFactoryPatternDemo {

    // ==========================
    // PRODUCT 1 : Burger
    // ==========================
    interface Burger {
        void prepare();
    }

    static class ClassicBurger
            implements Burger {

        @Override
        public void prepare() {
            System.out.println(
                    "Preparing Classic Burger"
            );
        }
    }

    static class OrientalBurger
            implements Burger {

        @Override
        public void prepare() {
            System.out.println(
                    "Preparing Oriental Burger"
            );
        }
    }

    // ==========================
    // PRODUCT 2 : Drink
    // ==========================
    interface Drink {
        void serve();
    }

    static class Coke implements Drink {

        @Override
        public void serve() {
            System.out.println(
                    "Serving Coke"
            );
        }
    }

    static class Juice implements Drink {

        @Override
        public void serve() {
            System.out.println(
                    "Serving Juice"
            );
        }
    }

    // ==========================
    // ABSTRACT FACTORY
    // ==========================
    interface RestaurantFactory {

        Burger createBurger();

        Drink createDrink();
    }

    // ==========================
    // CONCRETE FACTORIES
    // ==========================
    static class ClassicRestaurantFactory
            implements RestaurantFactory {

        @Override
        public Burger createBurger() {

            System.out.println(
                    "Creating Classic Burger..."
            );

            return new ClassicBurger();
        }

        @Override
        public Drink createDrink() {

            System.out.println(
                    "Creating Coke..."
            );

            return new Coke();
        }
    }

    static class OrientalRestaurantFactory
            implements RestaurantFactory {

        @Override
        public Burger createBurger() {

            System.out.println(
                    "Creating Oriental Burger..."
            );

            return new OrientalBurger();
        }

        @Override
        public Drink createDrink() {

            System.out.println(
                    "Creating Juice..."
            );

            return new Juice();
        }
    }

    // ==========================
    // CLIENT
    // ==========================
    public static void main(String[] args) {

        RestaurantFactory classicFactory =
                new ClassicRestaurantFactory();

        Burger classicBurger =
                classicFactory.createBurger();

        Drink classicDrink =
                classicFactory.createDrink();

        classicBurger.prepare();
        classicDrink.serve();

        System.out.println();

        RestaurantFactory orientalFactory =
                new OrientalRestaurantFactory();

        Burger orientalBurger =
                orientalFactory.createBurger();

        Drink orientalDrink =
                orientalFactory.createDrink();

        orientalBurger.prepare();
        orientalDrink.serve();
    }
}