package furniture;

public class Table {
    private static Table instance;
    private double price;

    private Table(double price)
    {
        this.price = price;
    }

    public static Table getInstance(double price)
    {
        if (instance == null)
        {
            instance = new Table(price);
        }

        return instance;
    }
}