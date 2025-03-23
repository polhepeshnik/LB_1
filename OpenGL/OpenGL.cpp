// LB1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define GLEW_DLL
#define GLFW_DLL

#include "glew.h"
#include "GLFW/glfw3.h"

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* mainwindow;
    mainwindow = glfwCreateWindow(512, 512, "Hello Pentagon", NULL, NULL);

    glewInit();

    glfwMakeContextCurrent(mainwindow);

    while (!glfwWindowShouldClose(mainwindow)) {

        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.8, 0.2, 0.7, 1); // Фон

        glBegin(GL_POLYGON);
        glColor3f(0.3, 0.6, 0.1); // Цвет пятиугольника
        glVertex2f(0.0, 0.35); // Вершина 1
        glVertex2f(-0.4, 0.0); // Вершина 2
        glVertex2f(-0.2, -0.4); // Вершина 3
        glVertex2f(0.2, -0.4); // Вершина 4
        glVertex2f(0.4, 0.0); // Вершина 5
        glEnd();

        glfwSwapBuffers(mainwindow);

        glfwPollEvents();
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
