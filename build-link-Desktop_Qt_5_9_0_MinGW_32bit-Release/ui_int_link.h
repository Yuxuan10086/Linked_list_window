/********************************************************************************
** Form generated from reading UI file 'int_link.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INT_LINK_H
#define UI_INT_LINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_int_link
{
public:
    QWidget *centralwidget;
    QPushButton *init;
    QPushButton *sort;
    QPushButton *find;
    QPushButton *transpose;
    QPushButton *insert;
    QPushButton *len;
    QPushButton *print;
    QPushButton *del;
    QPushButton *change;
    QPushButton *destory;
    QLineEdit *ioput;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *int_link)
    {
        if (int_link->objectName().isEmpty())
            int_link->setObjectName(QStringLiteral("int_link"));
        int_link->resize(372, 195);
        centralwidget = new QWidget(int_link);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        init = new QPushButton(centralwidget);
        init->setObjectName(QStringLiteral("init"));
        init->setGeometry(QRect(40, 20, 51, 23));
        sort = new QPushButton(centralwidget);
        sort->setObjectName(QStringLiteral("sort"));
        sort->setGeometry(QRect(102, 60, 51, 23));
        find = new QPushButton(centralwidget);
        find->setObjectName(QStringLiteral("find"));
        find->setGeometry(QRect(222, 60, 51, 23));
        transpose = new QPushButton(centralwidget);
        transpose->setObjectName(QStringLiteral("transpose"));
        transpose->setGeometry(QRect(282, 20, 51, 23));
        insert = new QPushButton(centralwidget);
        insert->setObjectName(QStringLiteral("insert"));
        insert->setGeometry(QRect(40, 60, 51, 23));
        len = new QPushButton(centralwidget);
        len->setObjectName(QStringLiteral("len"));
        len->setGeometry(QRect(102, 20, 51, 23));
        print = new QPushButton(centralwidget);
        print->setObjectName(QStringLiteral("print"));
        print->setGeometry(QRect(162, 20, 51, 23));
        del = new QPushButton(centralwidget);
        del->setObjectName(QStringLiteral("del"));
        del->setGeometry(QRect(162, 60, 51, 23));
        change = new QPushButton(centralwidget);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(222, 20, 51, 23));
        destory = new QPushButton(centralwidget);
        destory->setObjectName(QStringLiteral("destory"));
        destory->setGeometry(QRect(282, 60, 51, 23));
        ioput = new QLineEdit(centralwidget);
        ioput->setObjectName(QStringLiteral("ioput"));
        ioput->setGeometry(QRect(40, 100, 291, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 130, 281, 16));
        int_link->setCentralWidget(centralwidget);
        menubar = new QMenuBar(int_link);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 372, 23));
        int_link->setMenuBar(menubar);
        statusbar = new QStatusBar(int_link);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        int_link->setStatusBar(statusbar);

        retranslateUi(int_link);
        QObject::connect(destory, SIGNAL(clicked()), int_link, SLOT(close()));

        QMetaObject::connectSlotsByName(int_link);
    } // setupUi

    void retranslateUi(QMainWindow *int_link)
    {
        int_link->setWindowTitle(QApplication::translate("int_link", "creat", Q_NULLPTR));
        init->setText(QApplication::translate("int_link", "\345\220\216\346\217\222", Q_NULLPTR));
        sort->setText(QApplication::translate("int_link", "\346\216\222\345\272\217", Q_NULLPTR));
        find->setText(QApplication::translate("int_link", "\346\237\245\346\211\276", Q_NULLPTR));
        transpose->setText(QApplication::translate("int_link", "\351\200\206\347\275\256", Q_NULLPTR));
        insert->setText(QApplication::translate("int_link", "\346\217\222\345\205\245", Q_NULLPTR));
        len->setText(QApplication::translate("int_link", "\351\225\277\345\272\246", Q_NULLPTR));
        print->setText(QApplication::translate("int_link", "\346\211\223\345\215\260", Q_NULLPTR));
        del->setText(QApplication::translate("int_link", "\345\210\240\351\231\244", Q_NULLPTR));
        change->setText(QApplication::translate("int_link", "\344\277\256\346\224\271", Q_NULLPTR));
        destory->setText(QApplication::translate("int_link", "\351\224\200\346\257\201", Q_NULLPTR));
        label->setText(QApplication::translate("int_link", "\346\263\250\346\204\217:\346\257\217\346\254\241\350\276\223\345\205\245\346\225\260\346\215\256\346\227\266\351\203\275\345\212\241\345\277\205\345\260\206\350\276\223\345\205\245\350\276\223\345\207\272\346\240\217\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class int_link: public Ui_int_link {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INT_LINK_H
