#include <gtkmm.h>

class MyWindow : public Gtk::Window
{
public:
    MyWindow()
    {
        set_title("my first C++ Linux program");
        set_default_size(400, 300);

        // 设置盒子的布局（垂直排列）
        m_box.set_orientation(Gtk::ORIENTATION_VERTICAL);
        m_box.set_spacing(10);

        // 设置标签内容
        m_label.set_text("欢迎来到 GTKmm 世界！");

        // 设置按钮文字
        m_button.set_label("点我试试");

        // 绑定按钮点击事件
        m_button.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_button_clicked));

        // 把标签和按钮放入盒子
        m_box.pack_start(m_label);
        m_box.pack_start(m_button);

        // 把盒子放入窗口
        add(m_box);

        // 显示所有子控件
        show_all_children();
    }

private:
    void on_button_clicked()
    {
        m_label.set_text("太棒了！按钮被点击了！");
        // 还可以改变标签颜色
        m_label.override_color(Gdk::RGBA("#FF5722")); // 橙色
    }

    Gtk::Box m_box{Gtk::ORIENTATION_VERTICAL};
    Gtk::Label m_label;
    Gtk::Button m_button;
};

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.example.myapp");

    MyWindow window;

    return app->run(window);
}
