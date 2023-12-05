package education;

import java.util.Objects;

public class University extends School
{
    private String type;
    private int studies;

    public University(String name, String address, int students, String type, int studies)
    {
        super(name, address, students);

        if (type == null || type.isEmpty())
        {
            this.type = "university of technology";
        }
        else
        {
            this.type = type;
        }

        if (studies < 0)
        {
            this.studies = 10;
        }
        else
        {
            this.studies = studies;
        }
    }

    public String getType()
    {
        return type;
    }

    public void setType(String type)
    {
        if (type != null && !type.isEmpty())
        {
            this.type = type;
        }
    }

    public int getStudies()
    {
        return studies;
    }

    public void setStudies(int studies)
    {
        if (studies >= 0)
        {
            this.studies = studies;
        }
    }

    @Override
    public String toString()
    {
        return getClass().getSimpleName() + ": Name: " + getName() + ". Address: " + getAddress() +
                ". Number of students: " + getStudents() + ".\nType: " + type + ". Number of fields of study: " +
                studies + ".";
    }

    @Override
    public void recruitment(int newStudents)
    {
        super.recruitment(newStudents);
        studies += newStudents / 10;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        if (!super.equals(o)) return false;
        University that = (University) o;
        return studies == that.studies;
    }

    @Override
    public int hashCode() {
        return Objects.hash(super.hashCode(), studies);
    }
}
