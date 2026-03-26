#include "students.h"

void students::add_student(int id, std::string name, double gpa) {
    m_students.insert(std::make_pair(id, student(id, name)));
}
void students::remove_student(int id) {
    m_students.erase(id);
}
student students::search(int id) {
 return m_students[id];
}
void students::display_all() {
    for (auto& m_student : m_students )
    {
        
        std::cout << "Student ID is " << m_student.second.get_info().first << 
        "Name is " << m_student.second.get_info().second << " GPA is " <<
        m_student.second.get_gpa() << std::endl;
    }
    
}