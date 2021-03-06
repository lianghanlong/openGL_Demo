//
//  main.cpp
//  openGL环境搭建
//
//  Created by hanlong_liang on 2018/3/26.
//  Copyright © 2018年 kolamama. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <GLUT/GLUT.h>

void draw() {
    //1.设置清屏色
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    //2.设置颜色，红色
    glColor3f(1.0f, 0.0f, 1.0f);
    
    //设置绘图时的坐标系统
    glOrtho(0.0f, 1.0f, 0.0f, 1.0f, -1.0f, 1.0f);
    
    //开始渲染
    glBegin(GL_POLYGON);
    
    glVertex3f(0.25f, 0.25f, 0.0f);
    glVertex3f(0.75f, 0.25f, 0.0f);
    glVertex3f(0.75f, 0.75f, 0.0f);
//    glVertex3f(0.25f, 0.75f, 0.0f);
    
    //结束渲染
    glEnd();
    //强制刷新缓冲区，保证绘制命令被执行
    glFlush();
    
}

int main(int argc,const char *argv[]) {
    //1.初始化GLUT库
    glutInit(&argc, (char **)argv);
    //2.创建一个窗口并制定窗口名
    glutCreateWindow("HelloWorld");
    //3.注册一个绘图函数，操作系统在必要时刻就会对窗口进行重新绘制操作
    glutDisplayFunc(draw);
    //4.进入glut事件处理循环，让所有的与“事件”有关的函数调用无限循环
    glutMainLoop();
    
    return 0;
    
    
}



















