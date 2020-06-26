#include <iostream>
#include<sstream>
#include <string>
#include "int_link.h"
#include "ui_int_link.h"
#include "include/link_int.h"
Link_int link;//不同的窗口要改的只有这四行

void split_append(string str, string pattern)
{
    string::size_type pos;
    str += pattern;//扩展字符串以方便操作
    int size = str.size();

    for (int i = 0; i<size; i++) {
        pos = str.find(pattern, i);
        if (pos<size) {
            std::string s = str.substr(i, pos - i);
            link.append(stoi(s));
            i = pos + pattern.size() - 1;
        }
    }
}

int* split_insert(string str, string pattern)
{
    string::size_type pos;
    str += pattern;//扩展字符串以方便操作
    int size = str.size();

    int arg[2], n = 0;

    for (int i = 0; i<size; i++) {
        pos = str.find(pattern, i);
        if (pos<size) {
            std::string s = str.substr(i, pos - i);
            arg[n] = stoi(s);
            n++;
            i = pos + pattern.size() - 1;
        }
    }
    return arg;
}


int_link::int_link(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::int_link)
{
    ui->setupUi(this);
}

int_link::~int_link()
{
    delete ui;
}

void int_link::on_init_clicked()
{
    string in = ui->ioput->text().simplified().toStdString();
    split_append(in, " ");

//    QString tips = "";
//    tips.append("请在此框中以空格为分隔输入初始值,输入完成后点击初始化");
//    ui->ioput->setText(tips);
}

void int_link::on_print_clicked()
{
    int* val = link.find();
    string res = "";
    for(int i = 0; i < link.len; i++)
    {
        stringstream ss;
        string str;
        ss<<*(val + i);
        ss>>str;
        res += str + " ";
    }
    QString link_val = "";
    link_val.append(res.c_str());
    ui->ioput->setText(link_val);
}

void int_link::on_transpose_clicked()
{
    link.transpose();
}

void int_link::on_sort_clicked()
{
    link.shortt();
}

void int_link::on_insert_clicked()
{
    string in = ui->ioput->text().simplified().toStdString();
    int *arg = split_insert(in, " ");
    link.insert(*arg, *(arg +1));
}
