/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *ElevatorDisplay;
    QLabel *EDTitle;
    QFrame *EDLine;
    QHBoxLayout *Elevators;
    QSlider *Elevator0;
    QSlider *Elevator1;
    QTabWidget *tabWidget;
    QWidget *tbFlrV;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *FloorControlPanel;
    QHBoxLayout *FCPTitle;
    QLabel *FCPTItle1;
    QComboBox *cboFloors;
    QLabel *FCPTitle2;
    QFrame *FCPLine;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QWidget *tbElevV;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *ElevatorControlPanel;
    QHBoxLayout *ECPTitle;
    QLabel *ECPTitle1;
    QComboBox *cboElevators;
    QLabel *ECPTitle2;
    QLabel *ECPFloor;
    QFrame *ECPLine;
    QHBoxLayout *ECPOptions;
    QVBoxLayout *ECPPassengerView;
    QLabel *ECPPVTitle;
    QFrame *ECPPVLine;
    QGridLayout *ECPPVFloors;
    QRadioButton *rdo0;
    QRadioButton *rdo1;
    QRadioButton *rdo2;
    QRadioButton *rdo3;
    QHBoxLayout *ECPPVDoor;
    QRadioButton *btnOpen;
    QRadioButton *btnClose;
    QRadioButton *btnHelp;
    QFrame *ECPODivisor;
    QVBoxLayout *ECPDebug;
    QLabel *ECPDebugTitle;
    QFrame *ECPDebugLine;
    QVBoxLayout *ECPDebugControls;
    QLabel *lblWeight;
    QSlider *sldrWeight;
    QCheckBox *chkDoorObs;
    QCheckBox *chkFireElev;
    QWidget *tbECSV;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *Strategies;
    QLabel *StratsTitle;
    QFrame *StratsLine;
    QComboBox *cboStrats;
    QCheckBox *chkFireBuld;
    QCheckBox *chkPowerOut;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *FSD;
    QLabel *FSDTitle;
    QFrame *FSDLine;
    QGridLayout *FSDCheckBoxes;
    QCheckBox *chk3;
    QCheckBox *chk2;
    QCheckBox *chkB;
    QCheckBox *chk1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1090, 573);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(860, 140, 160, 211));
        ElevatorDisplay = new QVBoxLayout(verticalLayoutWidget);
        ElevatorDisplay->setObjectName("ElevatorDisplay");
        ElevatorDisplay->setContentsMargins(0, 0, 0, 0);
        EDTitle = new QLabel(verticalLayoutWidget);
        EDTitle->setObjectName("EDTitle");
        EDTitle->setAlignment(Qt::AlignCenter);

        ElevatorDisplay->addWidget(EDTitle);

        EDLine = new QFrame(verticalLayoutWidget);
        EDLine->setObjectName("EDLine");
        EDLine->setFrameShape(QFrame::HLine);
        EDLine->setFrameShadow(QFrame::Sunken);

        ElevatorDisplay->addWidget(EDLine);

        Elevators = new QHBoxLayout();
        Elevators->setObjectName("Elevators");
        Elevator0 = new QSlider(verticalLayoutWidget);
        Elevator0->setObjectName("Elevator0");
        Elevator0->setEnabled(false);
        Elevator0->setMinimum(0);
        Elevator0->setMaximum(3);
        Elevator0->setValue(1);
        Elevator0->setSliderPosition(1);
        Elevator0->setTracking(true);
        Elevator0->setOrientation(Qt::Vertical);
        Elevator0->setTickPosition(QSlider::TicksAbove);
        Elevator0->setTickInterval(1);

        Elevators->addWidget(Elevator0);

        Elevator1 = new QSlider(verticalLayoutWidget);
        Elevator1->setObjectName("Elevator1");
        Elevator1->setEnabled(false);
        Elevator1->setMaximum(3);
        Elevator1->setSingleStep(1);
        Elevator1->setValue(2);
        Elevator1->setSliderPosition(2);
        Elevator1->setOrientation(Qt::Vertical);
        Elevator1->setTickPosition(QSlider::TicksAbove);
        Elevator1->setTickInterval(1);

        Elevators->addWidget(Elevator1);


        ElevatorDisplay->addLayout(Elevators);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 781, 471));
        tbFlrV = new QWidget();
        tbFlrV->setObjectName("tbFlrV");
        verticalLayoutWidget_6 = new QWidget(tbFlrV);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(270, 130, 232, 148));
        FloorControlPanel = new QVBoxLayout(verticalLayoutWidget_6);
        FloorControlPanel->setObjectName("FloorControlPanel");
        FloorControlPanel->setContentsMargins(0, 0, 0, 0);
        FCPTitle = new QHBoxLayout();
        FCPTitle->setObjectName("FCPTitle");
        FCPTItle1 = new QLabel(verticalLayoutWidget_6);
        FCPTItle1->setObjectName("FCPTItle1");
        FCPTItle1->setAlignment(Qt::AlignCenter);

        FCPTitle->addWidget(FCPTItle1);

        cboFloors = new QComboBox(verticalLayoutWidget_6);
        cboFloors->setObjectName("cboFloors");

        FCPTitle->addWidget(cboFloors);

        FCPTitle2 = new QLabel(verticalLayoutWidget_6);
        FCPTitle2->setObjectName("FCPTitle2");

        FCPTitle->addWidget(FCPTitle2);


        FloorControlPanel->addLayout(FCPTitle);

        FCPLine = new QFrame(verticalLayoutWidget_6);
        FCPLine->setObjectName("FCPLine");
        FCPLine->setFrameShape(QFrame::HLine);
        FCPLine->setFrameShadow(QFrame::Sunken);

        FloorControlPanel->addWidget(FCPLine);

        btnUp = new QPushButton(verticalLayoutWidget_6);
        btnUp->setObjectName("btnUp");

        FloorControlPanel->addWidget(btnUp);

        btnDown = new QPushButton(verticalLayoutWidget_6);
        btnDown->setObjectName("btnDown");

        FloorControlPanel->addWidget(btnDown);

        tabWidget->addTab(tbFlrV, QString());
        tbElevV = new QWidget();
        tbElevV->setObjectName("tbElevV");
        verticalLayoutWidget_2 = new QWidget(tbElevV);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(170, 50, 403, 328));
        ElevatorControlPanel = new QVBoxLayout(verticalLayoutWidget_2);
        ElevatorControlPanel->setObjectName("ElevatorControlPanel");
        ElevatorControlPanel->setContentsMargins(0, 0, 0, 0);
        ECPTitle = new QHBoxLayout();
        ECPTitle->setObjectName("ECPTitle");
        ECPTitle1 = new QLabel(verticalLayoutWidget_2);
        ECPTitle1->setObjectName("ECPTitle1");
        ECPTitle1->setMaximumSize(QSize(16777215, 30));
        ECPTitle1->setAlignment(Qt::AlignCenter);

        ECPTitle->addWidget(ECPTitle1);

        cboElevators = new QComboBox(verticalLayoutWidget_2);
        cboElevators->setObjectName("cboElevators");

        ECPTitle->addWidget(cboElevators);

        ECPTitle2 = new QLabel(verticalLayoutWidget_2);
        ECPTitle2->setObjectName("ECPTitle2");

        ECPTitle->addWidget(ECPTitle2);


        ElevatorControlPanel->addLayout(ECPTitle);

        ECPFloor = new QLabel(verticalLayoutWidget_2);
        ECPFloor->setObjectName("ECPFloor");
        ECPFloor->setAlignment(Qt::AlignCenter);

        ElevatorControlPanel->addWidget(ECPFloor);

        ECPLine = new QFrame(verticalLayoutWidget_2);
        ECPLine->setObjectName("ECPLine");
        ECPLine->setFrameShape(QFrame::HLine);
        ECPLine->setFrameShadow(QFrame::Sunken);

        ElevatorControlPanel->addWidget(ECPLine);

        ECPOptions = new QHBoxLayout();
        ECPOptions->setObjectName("ECPOptions");
        ECPPassengerView = new QVBoxLayout();
        ECPPassengerView->setObjectName("ECPPassengerView");
        ECPPVTitle = new QLabel(verticalLayoutWidget_2);
        ECPPVTitle->setObjectName("ECPPVTitle");
        ECPPVTitle->setMaximumSize(QSize(16777215, 30));
        ECPPVTitle->setAlignment(Qt::AlignCenter);

        ECPPassengerView->addWidget(ECPPVTitle);

        ECPPVLine = new QFrame(verticalLayoutWidget_2);
        ECPPVLine->setObjectName("ECPPVLine");
        ECPPVLine->setFrameShape(QFrame::HLine);
        ECPPVLine->setFrameShadow(QFrame::Sunken);

        ECPPassengerView->addWidget(ECPPVLine);

        ECPPVFloors = new QGridLayout();
        ECPPVFloors->setObjectName("ECPPVFloors");
        rdo0 = new QRadioButton(verticalLayoutWidget_2);
        rdo0->setObjectName("rdo0");
        rdo0->setLayoutDirection(Qt::RightToLeft);
        rdo0->setAutoExclusive(false);

        ECPPVFloors->addWidget(rdo0, 1, 0, 1, 1);

        rdo1 = new QRadioButton(verticalLayoutWidget_2);
        rdo1->setObjectName("rdo1");
        rdo1->setLayoutDirection(Qt::RightToLeft);
        rdo1->setAutoExclusive(false);

        ECPPVFloors->addWidget(rdo1, 1, 1, 1, 1);

        rdo2 = new QRadioButton(verticalLayoutWidget_2);
        rdo2->setObjectName("rdo2");
        rdo2->setEnabled(true);
        rdo2->setLayoutDirection(Qt::RightToLeft);
        rdo2->setCheckable(true);
        rdo2->setChecked(false);
        rdo2->setAutoRepeat(false);
        rdo2->setAutoExclusive(false);

        ECPPVFloors->addWidget(rdo2, 0, 0, 1, 1);

        rdo3 = new QRadioButton(verticalLayoutWidget_2);
        rdo3->setObjectName("rdo3");
        rdo3->setLayoutDirection(Qt::RightToLeft);
        rdo3->setAutoExclusive(false);

        ECPPVFloors->addWidget(rdo3, 0, 1, 1, 1);


        ECPPassengerView->addLayout(ECPPVFloors);

        ECPPVDoor = new QHBoxLayout();
        ECPPVDoor->setObjectName("ECPPVDoor");
        btnOpen = new QRadioButton(verticalLayoutWidget_2);
        btnOpen->setObjectName("btnOpen");
        btnOpen->setLayoutDirection(Qt::RightToLeft);
        btnOpen->setAutoExclusive(false);

        ECPPVDoor->addWidget(btnOpen);

        btnClose = new QRadioButton(verticalLayoutWidget_2);
        btnClose->setObjectName("btnClose");
        btnClose->setLayoutDirection(Qt::RightToLeft);
        btnClose->setAutoExclusive(false);

        ECPPVDoor->addWidget(btnClose);


        ECPPassengerView->addLayout(ECPPVDoor);

        btnHelp = new QRadioButton(verticalLayoutWidget_2);
        btnHelp->setObjectName("btnHelp");
        btnHelp->setLayoutDirection(Qt::RightToLeft);
        btnHelp->setAutoExclusive(false);

        ECPPassengerView->addWidget(btnHelp);


        ECPOptions->addLayout(ECPPassengerView);

        ECPODivisor = new QFrame(verticalLayoutWidget_2);
        ECPODivisor->setObjectName("ECPODivisor");
        ECPODivisor->setFrameShape(QFrame::VLine);
        ECPODivisor->setFrameShadow(QFrame::Sunken);

        ECPOptions->addWidget(ECPODivisor);

        ECPDebug = new QVBoxLayout();
        ECPDebug->setObjectName("ECPDebug");
        ECPDebugTitle = new QLabel(verticalLayoutWidget_2);
        ECPDebugTitle->setObjectName("ECPDebugTitle");
        ECPDebugTitle->setMaximumSize(QSize(16777215, 30));
        ECPDebugTitle->setAlignment(Qt::AlignCenter);

        ECPDebug->addWidget(ECPDebugTitle);

        ECPDebugLine = new QFrame(verticalLayoutWidget_2);
        ECPDebugLine->setObjectName("ECPDebugLine");
        ECPDebugLine->setFrameShape(QFrame::HLine);
        ECPDebugLine->setFrameShadow(QFrame::Sunken);

        ECPDebug->addWidget(ECPDebugLine);

        ECPDebugControls = new QVBoxLayout();
        ECPDebugControls->setObjectName("ECPDebugControls");
        lblWeight = new QLabel(verticalLayoutWidget_2);
        lblWeight->setObjectName("lblWeight");
        lblWeight->setMaximumSize(QSize(16777215, 30));

        ECPDebugControls->addWidget(lblWeight);

        sldrWeight = new QSlider(verticalLayoutWidget_2);
        sldrWeight->setObjectName("sldrWeight");
        sldrWeight->setMinimum(50);
        sldrWeight->setMaximum(750);
        sldrWeight->setOrientation(Qt::Horizontal);

        ECPDebugControls->addWidget(sldrWeight);

        chkDoorObs = new QCheckBox(verticalLayoutWidget_2);
        chkDoorObs->setObjectName("chkDoorObs");

        ECPDebugControls->addWidget(chkDoorObs);

        chkFireElev = new QCheckBox(verticalLayoutWidget_2);
        chkFireElev->setObjectName("chkFireElev");

        ECPDebugControls->addWidget(chkFireElev);


        ECPDebug->addLayout(ECPDebugControls);


        ECPOptions->addLayout(ECPDebug);


        ElevatorControlPanel->addLayout(ECPOptions);

        tabWidget->addTab(tbElevV, QString());
        tbECSV = new QWidget();
        tbECSV->setObjectName("tbECSV");
        verticalLayoutWidget_4 = new QWidget(tbECSV);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(270, 60, 160, 80));
        Strategies = new QVBoxLayout(verticalLayoutWidget_4);
        Strategies->setObjectName("Strategies");
        Strategies->setContentsMargins(0, 0, 0, 0);
        StratsTitle = new QLabel(verticalLayoutWidget_4);
        StratsTitle->setObjectName("StratsTitle");
        StratsTitle->setAlignment(Qt::AlignCenter);

        Strategies->addWidget(StratsTitle);

        StratsLine = new QFrame(verticalLayoutWidget_4);
        StratsLine->setObjectName("StratsLine");
        StratsLine->setFrameShape(QFrame::HLine);
        StratsLine->setFrameShadow(QFrame::Sunken);

        Strategies->addWidget(StratsLine);

        cboStrats = new QComboBox(verticalLayoutWidget_4);
        cboStrats->setObjectName("cboStrats");
        cboStrats->setEditable(false);

        Strategies->addWidget(cboStrats);

        chkFireBuld = new QCheckBox(tbECSV);
        chkFireBuld->setObjectName("chkFireBuld");
        chkFireBuld->setGeometry(QRect(50, 60, 151, 26));
        chkPowerOut = new QCheckBox(tbECSV);
        chkPowerOut->setObjectName("chkPowerOut");
        chkPowerOut->setGeometry(QRect(50, 100, 93, 26));
        tabWidget->addTab(tbECSV, QString());
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(830, 380, 211, 116));
        FSD = new QVBoxLayout(verticalLayoutWidget_3);
        FSD->setObjectName("FSD");
        FSD->setContentsMargins(0, 0, 0, 0);
        FSDTitle = new QLabel(verticalLayoutWidget_3);
        FSDTitle->setObjectName("FSDTitle");
        FSDTitle->setAlignment(Qt::AlignCenter);

        FSD->addWidget(FSDTitle);

        FSDLine = new QFrame(verticalLayoutWidget_3);
        FSDLine->setObjectName("FSDLine");
        FSDLine->setFrameShape(QFrame::HLine);
        FSDLine->setFrameShadow(QFrame::Sunken);

        FSD->addWidget(FSDLine);

        FSDCheckBoxes = new QGridLayout();
        FSDCheckBoxes->setObjectName("FSDCheckBoxes");
        chk3 = new QCheckBox(verticalLayoutWidget_3);
        chk3->setObjectName("chk3");
        chk3->setLayoutDirection(Qt::RightToLeft);
        chk3->setChecked(true);

        FSDCheckBoxes->addWidget(chk3, 0, 1, 1, 1);

        chk2 = new QCheckBox(verticalLayoutWidget_3);
        chk2->setObjectName("chk2");
        chk2->setLayoutDirection(Qt::RightToLeft);
        chk2->setChecked(true);

        FSDCheckBoxes->addWidget(chk2, 0, 0, 1, 1);

        chkB = new QCheckBox(verticalLayoutWidget_3);
        chkB->setObjectName("chkB");
        chkB->setLayoutDirection(Qt::RightToLeft);
        chkB->setChecked(true);

        FSDCheckBoxes->addWidget(chkB, 1, 0, 1, 1);

        chk1 = new QCheckBox(verticalLayoutWidget_3);
        chk1->setObjectName("chk1");
        chk1->setLayoutDirection(Qt::RightToLeft);
        chk1->setChecked(true);

        FSDCheckBoxes->addWidget(chk1, 1, 1, 1, 1);


        FSD->addLayout(FSDCheckBoxes);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1090, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Elevator-System Simulation", nullptr));
        EDTitle->setText(QCoreApplication::translate("MainWindow", "Elevators:", nullptr));
        FCPTItle1->setText(QCoreApplication::translate("MainWindow", "Floor", nullptr));
        FCPTitle2->setText(QCoreApplication::translate("MainWindow", "Buttons", nullptr));
        btnUp->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        btnDown->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbFlrV), QCoreApplication::translate("MainWindow", "Floor View", nullptr));
        ECPTitle1->setText(QCoreApplication::translate("MainWindow", "Elevator", nullptr));
        ECPTitle2->setText(QCoreApplication::translate("MainWindow", "Control Panel ", nullptr));
        ECPFloor->setText(QCoreApplication::translate("MainWindow", "Current Floor: X", nullptr));
        ECPPVTitle->setText(QCoreApplication::translate("MainWindow", "Passenger View", nullptr));
        rdo0->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        rdo1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        rdo2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        rdo3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        btnClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        btnHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        ECPDebugTitle->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        lblWeight->setText(QCoreApplication::translate("MainWindow", "Weight:", nullptr));
        chkDoorObs->setText(QCoreApplication::translate("MainWindow", "Door Obstacle", nullptr));
        chkFireElev->setText(QCoreApplication::translate("MainWindow", "Fire (src: elevator)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbElevV), QCoreApplication::translate("MainWindow", "Elevator View", nullptr));
        StratsTitle->setText(QCoreApplication::translate("MainWindow", "Strategy", nullptr));
        chkFireBuld->setText(QCoreApplication::translate("MainWindow", "Fire (src: building)", nullptr));
        chkPowerOut->setText(QCoreApplication::translate("MainWindow", "Power Out", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbECSV), QCoreApplication::translate("MainWindow", "ECS View", nullptr));
        FSDTitle->setText(QCoreApplication::translate("MainWindow", "Floor Safety Debugger (isSafe)", nullptr));
        chk3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        chk2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        chkB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        chk1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
