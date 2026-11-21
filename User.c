//USER INFORMATION
typedef struct student
{
    char firstname[20];
    char middlename[20];
    char lastname[20];
    char studentid[11];
    char grade[4];
} student;

typedef struct teacher
{
    char firstname[20];
    char middlename[20];
    char lastname[20];
    char teacherid[11];
} teacher;

typedef struct parent
{
    char firstname[20];
    char middlename[20];
    char lastname[20];
    char phone[8];
} parent;

//USER NODE
typedef struct StudentListNode
{
    student studentuser;
    struct StudentListNode *next;
} StudentListNode;

typedef struct TeacherListNode
{
    teacher teacheruser;
    struct TeacherListNode *next;
} TeacherListNode;

typedef struct ParentListNode
{
    parent parentuser;
    struct ParentListNode *next;
} ParentListNode;









