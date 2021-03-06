# 欧拉计划前50题复习

#### 1、1000以内的3或5的倍数之和

- 暴力枚举 -> 通过列出前30项寻求方法简化

#### 2、斐波那契数列中小于4百万的偶数和

- 4百万很大，超出了整型的范围，采用**数组存储，**设置100位的整型数组用于存储偶数和的结果
- 前两个数字a，b相加得出c，判断c是否为偶数
  -  此处可采用**循环数组**
- 因为给出的第二个数中2即是偶数，向前推一位
  - 和1做&判断奇偶，结果为1则为偶数，结果为0则为奇数
- 易错点：
  - += 大数相加时在权值低的位**累积求和**
  - 优先级问题：==的优先级高于&

#### 3、求最大质因子

- 暴力枚举，从2开始判断，判断到max^1/2
- 最大质因子无非两种情况，或者小于n^1/2或大于n^1/2
  - 每次除尽它的除数
    - 循环结束，能除尽，最后num为1，则最大质因子之前已出现
    - 若最后num不为1，则最大质因子为num本身

