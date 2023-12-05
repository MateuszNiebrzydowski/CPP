import education.School;
import education.University;

public class TestSchool {
    public static void main(String[] args)
    {
        School s1 = new School("Zespół Szkół Ekonomicznych", "ul. Bałtycka 37, 10-144 Olsztyn", 800);
        School s2 = new School("Handluwa", "al. Wojska Polskiego, Zatorze", 370);
        System.out.println(s1.getName());
        System.out.println(s1.getAddress());
        System.out.println(s1.getStudents());
        s1.setName("Samochoduwa");
        s1.setStudents(420);
        s1.setAddress("al. Wojska Polskiego, Zatorze");
        System.out.println(s1.getName());
        System.out.println(s1.getAddress());
        System.out.println(s1.getStudents());
        System.out.println(s1.toString());
        s1.recruitment(30);
        System.out.println(s1.toString());
        School.checkLimit(s1);
        System.out.println(s1.equals(s2));
        System.out.println(s1.hashCode());

        University u1 = new University("", "Słoneczna 54", 800, "IT", 2);
        University u2 = new University("Guwno", "Słoneczna 54", 100, "Sraka", 2);
        //u1.recruitment(50);
        System.out.println(u1.toString());
        System.out.println(u1.equals(u2));
        System.out.println(u1.hashCode());




    }
}
