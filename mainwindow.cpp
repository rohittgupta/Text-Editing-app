#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QFileDialog>
#include <QTextCursor>
#include <QTextCharFormat>
#include <QClipboard>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);

    //connect actions for bold unbold
    connect(ui->actionNew, &QAction::triggered, this, &MainWindow::on_actionNew_triggered);
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::on_actionOpen_triggered);
    connect(ui->actionSave, &QAction::triggered, this, &MainWindow::on_actionSave_triggered);
    connect(ui->actionSave_As, &QAction::triggered, this, &MainWindow::on_actionSave_As_triggered);
    connect(ui->actionCopy, &QAction::triggered, this, &MainWindow::on_actionCopy_triggered);
    connect(ui->actionCut, &QAction::triggered, this, &MainWindow::on_actionCut_triggered);
    connect(ui->actionPaste, &QAction::triggered, this, &MainWindow::on_actionPaste_triggered);
    connect(ui->actionUndo, &QAction::triggered, this, &MainWindow::on_actionUndo_triggered);
    connect(ui->actionRedo, &QAction::triggered, this, &MainWindow::on_actionRedo_triggered);
    connect(ui->actionBold_Unbold, &QAction::triggered, this, &MainWindow::on_actionBold_Unbold_triggered);

    connect(ui->actionKnow_me, &QAction::triggered, this, &MainWindow::on_actionKnow_me_clicked);

    connect(ui->actionSuperscript, &QAction::triggered, this, &MainWindow::on_actionSuperscript_triggered);
    connect(ui->actionSubscript, &QAction::triggered, this, &MainWindow::on_actionSubscript_triggered);

    connect(ui->actionText_Size, &QAction::triggered, this, &MainWindow::on_actionText_Size_triggered);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    mFilename = "";
    ui->textEdit->setPlainText("");
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();

}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this,"Open a file");

    if(!file.isEmpty()){
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text)){
            mFilename = file;
            QTextStream in(&sFile);
            QString text = in.readAll();
            sFile.close();

            ui->textEdit->setPlainText(text);
        }
    }
}


void MainWindow::on_actionSave_triggered()
{

    QFile sFile(mFilename);
    if(sFile.open(QFile::WriteOnly | QFile::Text)){
        QTextStream out(&sFile);

        out << ui->textEdit->toPlainText();/*it context output to plaintext . we can also do like tohtml someething.*/

        sFile.flush();
        sFile.close();
    }
}



// if a user select to save as a file . then first it select then if not empty then we will call save function.
void MainWindow::on_actionSave_As_triggered()
{

    QString file = QFileDialog::getSaveFileName(this,"Save as file");

    if(!file.isEmpty()){

        mFilename = file;
        on_actionSave_triggered();
    }
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}



void MainWindow::on_actionBold_Unbold_triggered()
{
    QTextCharFormat fmt;
    QTextCursor cursor(ui->textEdit->textCursor());

    if (!cursor.hasSelection())
        return;

    fmt.setFontWeight(cursor.charFormat().fontWeight() == QFont::Bold ? QFont::Normal : QFont::Bold);
    cursor.mergeCharFormat(fmt);
    ui->textEdit->mergeCurrentCharFormat(fmt);
    //cursor.mergeCharFormat(fmt);
}


void MainWindow::on_actionKnow_me_clicked()
{
    QDesktopServices::openUrl(QUrl("https://drive.google.com/file/d/1OdKDug-fTfOaCOBz2ZOjZQ3DfljKR3gV/view?usp=drivesdk"));

}


void MainWindow::on_actionSuperscript_triggered()
{
    QTextCharFormat fmt;
    QTextCursor cursor(ui->textEdit->textCursor());

    if (!cursor.hasSelection())
        return;

    fmt.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    fmt.setFontPointSize(10);
    fmt.setFontItalic(true);//italic look on superscripting.
    fmt.setForeground(QColor(Qt::red)); //red colour will be shown after superscripting it.

    cursor.mergeCharFormat(fmt);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}


void MainWindow::on_actionSubscript_triggered()
{
    QTextCharFormat fmt;
    QTextCursor cursor(ui->textEdit->textCursor());

    if (!cursor.hasSelection())
        return;

    fmt.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    fmt.setFontPointSize(10);
    fmt.setFontWeight(QFont::Bold);// bold on subscripting .
    fmt.setForeground(QColor(Qt::blue)); // blue...

    cursor.mergeCharFormat(fmt);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}


void MainWindow::on_actionText_Size_triggered()
{
    QTextCharFormat fmt;
    QTextCursor cursor(ui->textEdit->textCursor());

    if (!cursor.hasSelection())
        return;

    fmt.setFontPointSize(cursor.charFormat().fontPointSize() + 2);

    cursor.mergeCharFormat(fmt);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}

