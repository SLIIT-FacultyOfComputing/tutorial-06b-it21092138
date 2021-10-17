class Student {
  // private section
  private:
  //    int studentId
  int studentId;
  //    name <- 20 charcters
  char name[20];
  // public section
  public:
  //    assignDetails() method declaration
  void assignDetails(int t_studentId, const char t_name[]);
  //    display() method declaration
  void display();
};
