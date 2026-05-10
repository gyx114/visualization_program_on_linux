# GTKmm 示例项目  
一个使用CMake+GTKmm的Linux图形程序示例

## 依赖安装
```bash
sudo apt install libgtkmm-3.0-dev cmake
```
## 编译运行
### 1.使用CMake（推荐）
```bash
mkdir build && cd build
cmake ..
make
./my_app
```
### 2.使用build.sh快捷编译
```bash
./build.sh
./my_app
```


## 功能
 👍显示窗口  
 👍点击按钮改变文字

## 常见问题
### 1.窗口中文乱码
   一般由于字体设置错误，解决方法：
```bash
sudo apt install fonts-noto-cjk
```
