#include </homer/se/tea/wangzk/情報処理演習2023/15week/freeglut-3.4.0/include/GL/glut.h>

void display(void)
{
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
