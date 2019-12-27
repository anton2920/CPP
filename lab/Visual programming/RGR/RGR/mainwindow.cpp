#include <QMessageBox>
#include <QFileDialog>
#include <QColorDialog>
#include <QCloseEvent>
#include <QInputDialog>
#include <QImageWriter>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scribblearea.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Create the ScribbleArea widget and make it
    // the central widget
    scribbleArea = new ScribbleArea;
//    setCentralWidget(scribbleArea);
    ui->gridLayout->addWidget(scribbleArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbout_Qt_triggered() {

    /* Main part */
    QMessageBox::aboutQt(this, "About Qt");
}

void MainWindow::on_actionAbout_Paint_triggered() {

    /* Main part */
    QMessageBox::about(this, "About", "This is simple Paint application");
}

// User tried to close the app
void MainWindow::closeEvent(QCloseEvent *event)
{
    // If they try to close maybeSave() returns true
    // if no changes have been made and the app closes
    if (maybeSave()) {
        event->accept();
    } else {

        // If there have been changes ignore the event
        event->ignore();
    }
}

// Check if the current image has been changed and then
// open a dialog to open a file
void MainWindow::open()
{
    // Check if changes have been made since last save
    // maybeSave() returns true if no changes have been made
    if (maybeSave()) {

        // Get the file to open from a dialog
        // tr sets the window title to Open File
        // QDir opens the current dirctory
        QString fileName = QFileDialog::getOpenFileName(this,
                                   tr("Open File"), QDir::currentPath());

        // If we have a file name load the image and place
        // it in the scribbleArea
        if (!fileName.isEmpty())
            scribbleArea->openImage(fileName);
    }
}

// Called when the user clicks Save As in the menu
void MainWindow::save()
{
    // A QAction represents the action of the user clicking
    QAction *action = qobject_cast<QAction *>(sender());

    // Stores the array of bytes of the users data
    QByteArray fileFormat = action->data().toByteArray();

    // Pass it to be saved
    saveFile(fileFormat);
}

// Opens a dialog to change the pen color
void MainWindow::penColor()
{
    // Store the chosen color from the dialog
    QColor newColor = QColorDialog::getColor(scribbleArea->penColor());

    // If a valid color set it
    if (newColor.isValid())
        scribbleArea->setPenColor(newColor);
}

// Opens a dialog that allows the user to change the pen width
void MainWindow::penWidth()
{
    // Stores button value
    bool ok;

    // tr("Paint") is the title
    // the next tr is the text to display
    // Get the current pen width
    // Define the min, max, step and ok button
    int newWidth = QInputDialog::getInt(this, tr("Paint"),
                                        tr("Select line width:"),
                                        scribbleArea->penWidth(),
                                        1, 50, 1, &ok);
    // Change the pen width
    if (ok)
        scribbleArea->setPenWidth(newWidth);
}

bool MainWindow::maybeSave()
{
    // Check for changes since last save
    if (scribbleArea->isModified()) {
       QMessageBox::StandardButton ret;

       // Scribble is the title
       // Add text and the buttons
       ret = QMessageBox::warning(this, tr("Paint"),
                          tr("The image has been modified.\n"
                             "Do you want to save your changes?"),
                          QMessageBox::Save | QMessageBox::Discard
                          | QMessageBox::Cancel);

       // If save button clicked call for file to be saved
        if (ret == QMessageBox::Save) {
            return saveFile("png");

        // If cancel do nothing
        } else if (ret == QMessageBox::Cancel) {
            return false;
        }
    }
    return true;
}

bool MainWindow::saveFile(const QByteArray &fileFormat)
{
    // Define path, name and default file type
    QString initialPath = QDir::currentPath() + "/untitled." + fileFormat;

    // Get selected file from dialog
    // Add the proper file formats and extensions
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"),
                               initialPath,
                               tr("%1 Files (*.%2);;All Files (*)")
                               .arg(QString::fromLatin1(fileFormat.toUpper()))
                               .arg(QString::fromLatin1(fileFormat)));

    // If no file do nothing
    if (fileName.isEmpty()) {
        return false;
    } else {

        // Call for the file to be saved
        return scribbleArea->saveImage(fileName, fileFormat.constData());
    }
}

void MainWindow::clear_btn_selection() {

    /* Main part */
    ui->pushButton_free_form->setChecked(false);
    ui->pushButton_eraser->setChecked(false);
    ui->pushButton_pick_clr->setChecked(false);
    ui->pushButton_pencil->setChecked(false);
    ui->pushButton_airbrush->setChecked(false);
    ui->pushButton_line->setChecked(false);
    ui->pushButton_rectangle->setChecked(false);
    ui->pushButton_ellipse->setChecked(false);
    ui->pushButton_rounded_rectangle->setChecked(false);
    ui->pushButton_polygon->setChecked(false);
    ui->pushButton_curve->setChecked(false);
    ui->pushButton_text->setChecked(false);
    ui->pushButton_brush->setChecked(false);
    ui->pushButton_magnifier->setChecked(false);
    ui->pushButton_fill_with_clr->setChecked(false);
    ui->pushButton_select->setChecked(false);
}

void MainWindow::on_pushButton_brush_clicked() {

    /* Main part */
    clear_btn_selection();
    this->scribbleArea->setTool(ScribbleArea::tool::BRUSH);
    ui->pushButton_brush->setChecked(true);
}

void MainWindow::on_pushButton_pencil_clicked() {

    /* Main part */
    clear_btn_selection();
    this->scribbleArea->setTool(ScribbleArea::tool::PEN);
    ui->pushButton_pencil->setChecked(true);
}

void MainWindow::on_actionSet_Line_Width_triggered() {

    /* Main part */
    this->penWidth();
}

void MainWindow::on_pushButton_eraser_clicked() {

    /* Main part */
    clear_btn_selection();
    this->scribbleArea->setTool(ScribbleArea::tool::ERASER);
    ui->pushButton_eraser->setChecked(true);
}

void MainWindow::on_actionOpen_triggered() {

    /* Main part */
    this->open();
}

void MainWindow::on_actionSave_As_triggered() {

    /* Main part */
    this->save();
}

void MainWindow::on_actionPrint_triggered() {

    /* Main part */
    this->scribbleArea->print();
}

void MainWindow::on_actionTool_box_triggered() {

    /* Main part */
    ui->frame_toolbox->setVisible(!ui->frame_toolbox->isVisible());
}

void MainWindow::on_actionColor_Box_triggered() {

    /* Main part */
    ui->frame_color->setVisible(!ui->frame_color->isVisible());
}

void MainWindow::on_actionStatus_Bar_triggered() {

    /* Main part */
    ui->statusbar->setVisible(!ui->statusbar->isVisible());
}

void MainWindow::on_frame_black_clicked() {

    /* Initializing variables */


    /* Main part */
    this->scribbleArea->setPenColor(ui->frame_black->palette());
}
