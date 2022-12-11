/********************************************************************************
** Form generated from reading UI file 'screenwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENWIDGET_H
#define UI_SCREENWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screenwidget
{
public:

    void setupUi(QWidget *screenwidget)
    {
        if (screenwidget->objectName().isEmpty())
            screenwidget->setObjectName(QString::fromUtf8("screenwidget"));
        screenwidget->resize(521, 324);

        retranslateUi(screenwidget);

        QMetaObject::connectSlotsByName(screenwidget);
    } // setupUi

    void retranslateUi(QWidget *screenwidget)
    {
        screenwidget->setWindowTitle(QCoreApplication::translate("screenwidget", "ScreenPen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screenwidget: public Ui_screenwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENWIDGET_H
