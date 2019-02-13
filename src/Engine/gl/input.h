/*
 * ========================= input.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.01.05
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 *   键盘，鼠标，joystick 等输入设备 管理文件
 * ----------------------------
 */
#ifndef _TPR_INPUT_H_
#define _TPR_INPUT_H_
//=== *** glad FIRST, glfw SECEND *** ===
#include<glad/glad.h>  
#include<GLFW/glfw3.h>

//-------------------- CPP --------------------//
#include <functional>

//-------------------- Engine --------------------//
#include "IntVec.h" 
#include "NineBox.h" 
#include "InputINS.h"


namespace input{//------------- namespace input --------------------


void init_input();

void processInput( GLFWwindow *_windowPtr );
void scroll_callback(GLFWwindow* _windowPtr, double _xoffset, double _yoffset);
IntVec2 get_mouse_pos();

using F_INPUT_INS = std::function<void(const InputINS &)>;
void bind_inputINS_callback( F_INPUT_INS _fp );



}//----------------- namespace input: end -------------------
#endif 

