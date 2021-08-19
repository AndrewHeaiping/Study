
# 创建ssh key、配置git
* 设置username和email（github每次commit都会记录他们）
```
    git config --global user.name "****"        // 自己起一个用户名
    git config --global user.email "***********@qq.com"   // 推荐使用邮箱
```
* 通过终端命令创建ssh key
```
    ssh-keygen -t rsa -C "***********@qq.com"
```
* 查看生成的ssh key
```
    cat .ssh/id_rsa.pub
```
* 登录GitHub，将生成的的ssh key添加到Github中，（Settings->SSH and GPG keys->New SSH key)
* 链接验证
```
    ssh -T git@github.com 
```
* 配置token信息(Settings->Developer settings->Personal access tokens)
```
    git config --global github.user aiping      // 配置用户信息时自己起的用户名
    git config --global github.token **************************
```
# 提交一个本地项目至GitHub
* Clone工程到本地，首先复制ssh 地址
```
    git clone https://github.com/AndrewHeaiping/Study.git
```
* 更新项目文件(修改项目)
* 提交项目至远程仓库
```
    git add .   //文件添加到仓库（.代表提交所有文件）
    git commit -m "First Commit"  //把文件提交到仓库
    git push  //上传到github
```

注意：在提交时，可以将token与仓库绑定，以免多次提交输入密码（token），可以进行如下的操作：
```
    git remote set-url origin https://<your_token>@github.com/<USERNAME>/<REPO>.git
```
<your_token>：换成你自己得到的token
<USERNAME>：是你自己github的用户名
<REPO>：是你的仓库名称
