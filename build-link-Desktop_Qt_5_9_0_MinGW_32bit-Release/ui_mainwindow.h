/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *creat_int;
    QLabel *welcome1;
    QLabel *welcome2;
    QPushButton *close;
    QPushButton *creat_float;
    QPushButton *creat_double;
    QPushButton *creat_char;
    QGroupBox *groupBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(316, 261);
        QFont font;
        font.setFamily(QStringLiteral("3ds"));
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        creat_int = new QPushButton(centralWidget);
        creat_int->setObjectName(QStringLiteral("creat_int"));
        creat_int->setGeometry(QRect(30, 100, 51, 41));
        welcome1 = new QLabel(centralWidget);
        welcome1->setObjectName(QStringLiteral("welcome1"));
        welcome1->setGeometry(QRect(30, 20, 261, 21));
        welcome2 = new QLabel(centralWidget);
        welcome2->setObjectName(QStringLiteral("welcome2"));
        welcome2->setGeometry(QRect(30, 40, 301, 51));
        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(240, 154, 71, 31));
        creat_float = new QPushButton(centralWidget);
        creat_float->setObjectName(QStringLiteral("creat_float"));
        creat_float->setGeometry(QRect(90, 100, 51, 41));
        creat_double = new QPushButton(centralWidget);
        creat_double->setObjectName(QStringLiteral("creat_double"));
        creat_double->setGeometry(QRect(150, 100, 71, 41));
        creat_char = new QPushButton(centralWidget);
        creat_char->setObjectName(QStringLiteral("creat_char"));
        creat_char->setGeometry(QRect(230, 100, 51, 41));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 271, 61));
        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        creat_int->raise();
        welcome1->raise();
        welcome2->raise();
        close->raise();
        creat_float->raise();
        creat_double->raise();
        creat_char->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 316, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(close, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Linked List by \345\274\240\345\256\207\350\275\251", Q_NULLPTR));
        creat_int->setText(QApplication::translate("MainWindow", "int", Q_NULLPTR));
        welcome1->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\351\223\276\350\241\250\345\210\233\345\273\272\347\250\213\345\272\217v1.0", Q_NULLPTR));
        welcome2->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\346\202\250\346\211\200\345\210\233\345\273\272\351\223\276\350\241\250\347\232\204\346\225\260\346\215\256\347\261\273\345\236\213", Q_NULLPTR));
        close->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        creat_float->setText(QApplication::translate("MainWindow", "float", Q_NULLPTR));
        creat_double->setText(QApplication::translate("MainWindow", "double", Q_NULLPTR));
        creat_char->setText(QApplication::translate("MainWindow", "char", Q_NULLPTR));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
