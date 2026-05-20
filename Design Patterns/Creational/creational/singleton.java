class Singleton {

    private static volatile Singleton instance;

    public static Singleton getInstance() {

        Singleton result = instance;

        if (result == null) {

            synchronized (Singleton.class) {

                result = instance;

                if (result == null) {
                    result = new Singleton();
                    instance = result;
                }
            }
        }

        return result;
    }
}