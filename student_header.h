typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}SLL;

void add_new(SLL **);
void print(SLL *);
void delet(SLL **);
void savefile(SLL *);
void modify(SLL **);
void scanfile(SLL **);
void sort(SLL **);
void deletall(SLL **);
void rev(SLL **);
void sortroll(SLL **);
