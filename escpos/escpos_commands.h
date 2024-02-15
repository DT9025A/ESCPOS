//
// Created by DT9025A on 2024/2/15.
//

#ifndef ESCPOS_ESCPOS_COMMANDS_H
#define ESCPOS_ESCPOS_COMMANDS_H

/**
 * 回调函数指针存放位置
 */
#define USER_DEF_POINTER_LOCATION xdata

/**
 * ESC * 指令列表
 */
enum ESC_COMMANDS {
    /**
     * 允许/禁止十六进制形式打印
     */
    ESC_DOUBLE_QUOTE = '"',
    /**
     * 替换用户自定义字符
     */
    ESC_PERCENT = '%',
    /**
     * 用户自定义字符
     */
    ESC_AND,
    /**
     * 打印曲线1（不自动补点即虚线）
     */
    ESC_SINGLE_QUOTE,
    /**
     * 允许/禁止上划线打印
     */
    ESC_PLUS = '+',
    /**
     * 打印曲线2(自动补点即实线)
     */
    ESC_COMMA,
    /**
     * 允许/禁止下划线打印
     */
    ESC_MINUS,
    /**
     * 设置n点行间距
     */
    ESC_1 = '1',
    /**
     * 选择字符集1
     */
    ESC_6 = '6',
    /**
     * 选择字符集2
     */
    ESC_7,
    /**
     * 恢复字符集中的字符
     */
    ESC_COLON = ':',
    /**
     * 初始化打印机
     */
    ESC_AT = '@',
    /**
     * 设置垂直造表值
     */
    ESC_B = 'B',
    /**
     * 设置水平造表值
     */
    ESC_D = 'D',
    /**
     * 执行n点行走纸
     */
    ESC_J = 'J',
    /**
     * 打印点阵图形
     */
    ESC_K,
    /**
     * 设置右限
     */
    ESC_Q = 'Q',
    /**
     * 横向放大
     */
    ESC_U = 'U',
    /**
     * 纵向放大
     */
    ESC_V,
    /**
     * 横向纵向放大
     */
    ESC_W,
    /**
     * 允许/禁止反向打印
     */
    ESC_c = 'c',
    /**
     * 打印空格或空行
     */
    ESC_f = 'f',
    /**
     * 允许/禁止反白打印
     */
    ESC_i = 'i',
    /**
     * 设置左限
     */
    ESC_l = 'l',
    /**
     * 设置字间距
     */
    ESC_p = 'p',
    /**
     * 选择打印字符集
     */
    ESC_t = 't',
};



#endif //ESCPOS_ESCPOS_COMMANDS_H
