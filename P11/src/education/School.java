package education;

import java.util.Objects;

public class School {
    private String name;
    private String address;
    private int students;

    public School(String name, String address, int students)
    {
        if (name == null || name.isEmpty())
        {
            this.name = "Wydział Matematyki i Informatyki UWM";
        }
        else
        {
            this.name = name;
        }

        if (address == null || address.isEmpty())
        {
            this.address = "ul. Słoneczna 54, 10-710 Olsztyn";
        }
        else
        {
            this.address = address;
        }

        if (students < 1)
        {
            this.students = 100;
        }
        else
        {
            this.students = students;
        }
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        if (name != "")
        {
            this.name = name;
        }
    }

    public String getAddress()
    {
        return address;
    }

    public void setAddress(String address)
    {
        if (address != null && !address.isEmpty())
        {
            this.address = address;
        }
    }

    public int getStudents()
    {
        return students;
    }

    public void setStudents(int students)
    {
        if (students >= 1)
        {
            this.students = students;
        }
    }
    public void recruitment(int newStudents)
    {
        if (students + newStudents > 500)
        {
            this.students = 500;
        }
        else
        {
            this.students += newStudents;
        }
    }

    public static void checkLimit(School s)
    {
        System.out.println("Number of students: " + s.students + ", How many to full limit: " + (500 - s.students));
    }

    @Override
    public String toString()
    {
        return getClass().getSimpleName() + ": Name: " + name + ". Address: " + address + ". Number of students: " + students + ".";
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        School school = (School) o;
        return Objects.equals(address, school.address);
    }

    @Override
    public int hashCode() {
        return Objects.hash(address);
    }
}
