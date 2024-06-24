/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBold_Unbold;
    QAction *actionKnow_me;
    QAction *actionSuperscript;
    QAction *actionSubscript;
    QAction *actionText_Size;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuExtra;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8("new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("saveas.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave_As->setIcon(icon3);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon4);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon8);
        actionBold_Unbold = new QAction(MainWindow);
        actionBold_Unbold->setObjectName("actionBold_Unbold");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBold_Unbold->setIcon(icon9);
        actionKnow_me = new QAction(MainWindow);
        actionKnow_me->setObjectName("actionKnow_me");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionKnow_me->setIcon(icon10);
        actionSuperscript = new QAction(MainWindow);
        actionSuperscript->setObjectName("actionSuperscript");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("superscript.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSuperscript->setIcon(icon11);
        actionSubscript = new QAction(MainWindow);
        actionSubscript->setObjectName("actionSubscript");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("subscript.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSubscript->setIcon(icon12);
        actionText_Size = new QAction(MainWindow);
        actionText_Size->setObjectName("actionText_Size");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(180, 90, 221, 171));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuExtra = new QMenu(menubar);
        menuExtra->setObjectName("menuExtra");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuExtra->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuExtra->addAction(actionBold_Unbold);
        menuExtra->addSeparator();
        menuExtra->addAction(actionSuperscript);
        menuExtra->addAction(actionSubscript);
        menuExtra->addSeparator();
        menuExtra->addAction(actionText_Size);
        menuAbout->addAction(actionKnow_me);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionBold_Unbold->setText(QCoreApplication::translate("MainWindow", "Bold/Unbold", nullptr));
        actionKnow_me->setText(QCoreApplication::translate("MainWindow", "Know me", nullptr));
        actionSuperscript->setText(QCoreApplication::translate("MainWindow", "Superscript", nullptr));
        actionSubscript->setText(QCoreApplication::translate("MainWindow", "Subscript", nullptr));
        actionText_Size->setText(QCoreApplication::translate("MainWindow", "Text Size", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuExtra->setTitle(QCoreApplication::translate("MainWindow", "Features", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About Me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
