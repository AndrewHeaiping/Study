MarkDown语法

## 什么是Markdown?

markdown是一种轻量级标记语言，以纯文本形式（易读/易写/易更改）编写文档。由Aaron Swartz和John Gruber共同设计。

## 主要语法

标题，段落，区块引用，代码区块，强调，列表，分割线，链接，图片，反斜杠，反引号，特殊符号

1. 标题： # 可以表示1～6级标题，第6级标题与正文的字体的黑体版

2. 段落：一句话结束部分加2空格，表示为一个段落 

3. 区块引用：用>和>>表示

   > 区块引用
   >
   > > > 嵌套引用

4. 代码区块:  ``` + 回车

   ```C
   void main
   {
       printf("hello markdown!\n")
   }    
   ```

5. 强调：在内容两边加上*或者_

   \*斜体\*  -> *斜体*  

   \*\*粗体\*\* -> **粗体**  或者 快捷键 Ctrl + B 

6. 列表：

   (1) 使用.   +   -三种符号标记无序列表

   ```markdown
   * 第一项
   + 第二项
   - 第三项
   ```

   * 第一项
   + 第二项

   - 第三项

   (2)使用数字 加 .的方式

   ```
   1. 第一项
   2. 第二项
   3. 第三项
   ```

   1. 第一项
   2. 第二项
   3. 第三项

7. 分割线：

   ---

   使用3个*或- 或_表示分割线

8. 链接

   (1)行内式

   ```
   [我的笔记](https://github.com/AnddrewHeaiping/Study/Markdown语法.md)
   ```

   [我的笔记](https://github.com/AnddrewHeaiping/Study/Markdown语法.md)

   (2)参考式

   ```
   [参考资料1][1]
   [参考资料2][2]
   ```

   [参考资料1][1]
   [参考资料2][2]

9. 图片：在链接的最前面加上!符号

   ![我的笔记](https://github.com/AnddrewHeaiping/Study/Markdown语法.md)

10. 反斜杠 

    转义作用

11. 反引号：起到标记作用

    ```
    `ctrl + a`
    ```

    `ctrl + a`

12. 特殊符号 

    ```
    ~~删除线~~
    ```

    (1) ~~删除线~~

    (2) TODO：

    ```
    - [x] Eat
    - [x] Code
    	- [x] Html
    	- [x] CSS
    	- [x] JavaScript
    - [x] Sleep
    ```

    - [ ] Eat
    - [x] Code
    	- [x] Html
    	- [x] CSS
    	- [x] JavaScript
    - [ ] Sleep

    13. 表格

        * :--- 左对齐
        * :---: 居中对齐
        * ---: 右对齐

        

