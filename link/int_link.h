#ifndef INT_LINK_H
#define INT_LINK_H

#include <QMainWindow>

namespace Ui {
class int_link;
}

class int_link : public QMainWindow
{
    Q_OBJECT

public:
    explicit int_link(QWidget *parent = 0);
    ~int_link();

private slots:
    void on_init_clicked();

    void on_print_clicked();

    void on_transpose_clicked();

    void on_sort_clicked();

    void on_insert_clicked();

private:
    Ui::int_link *ui;
};

#endif // INT_LINK_H
