# 1.css属性可以不继承

    可以为属性设置inherit；例如color:inherit; 此时color就不继承父级color属性，为默认属性
    

# 2.深入了解构造函数

    (1)构造函数里面如果没有this就废了，就不能给创建出来的隐秘对象添加属性，但是里面的语句可以执行
    (2)构造函数里面不能出现return，出现return就不能返会新创建的对象
    (3)js中没有规定构造函数中的语句格式，想怎么写就怎么写
        