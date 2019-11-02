#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QVector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

QString items[] = {"The Art of Fugue", "St Matthew Passion", "Der Ring des Nibelungen", "Symphony in C major (Wagner)",
                  "Symphony No. 9 (Dvořák)", "Blues 'N' Jazz", "Hey Jude", "Here Comes the Sun", "Paranoid",
                  "Iron Man", "Chaosphere"};

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_currentTextChanged(const QString &currentText) {

    /* Main part */
    if (currentText == items[0]) {
        ui->textBrowser->setText("The Art of Fugue (or The Art of the Fugue; German: Die Kunst der Fuge), BWV 1080, is an incomplete musical work of unspecified instrumentation by Johann Sebastian Bach (1685–1750). Written in the last decade of his life, The Art of Fugue is the culmination of Bach's experimentation with monothematic instrumental works.");
    } else if (currentText == items[1]) {
        ui->textBrowser->setText("The St Matthew Passion (German: Matthäus-Passion), BWV 244, is a Passion, a sacred oratorio written by Johann Sebastian Bach in 1727 for solo voices, double choir and double orchestra, with libretto by Picander. It sets chapters 26 and 27 of the Gospel of Matthew (in the Luther Bible) to music, with interspersed chorales and arias. It is widely regarded as one of the greatest masterpieces of classical sacred music. The original Latin title Passio Domini nostri J.C. secundum Evangelistam Matthæum translates to \"The Passion of our Lord J[esus] C[hrist] according to the Evangelist Matthew\".");
    } else if (currentText == items[2]) {
        ui->textBrowser->setText("WWV 86, is a cycle of four German-language epic music dramas composed by Richard Wagner. The works are based loosely on characters from the Norse sagas and the Nibelungenlied. The composer termed the cycle a \"Bühnenfestspiel\" (stage festival play), structured in three days preceded by a Vorabend (\"preliminary evening\"). It is often referred to as the Ring cycle, Wagner's Ring, or simply The Ring.");
    } else if (currentText == items[3]) {
        ui->textBrowser->setText("The Symphony in C major, WWV 29, is the only completed symphony of Richard Wagner.");
    } else if (currentText == items[4]) {
        ui->textBrowser->setText("The Symphony No. 9 in E minor, \"From the New World\", Op. 95, B. 178 (Czech: Symfonie č. 9 e moll „Z nového světa“), popularly known as the New World Symphony, was composed by Antonín Dvořák in 1893 while he was the director of the National Conservatory of Music of America from 1892 to 1895. It has been described as one of the most popular of all symphonies.");
    } else if (currentText == items[5]) {
        ui->textBrowser->setText("Blues 'N' Jazz is the twenty-eighth studio blues album by B.B. King released in 1983. It was recorded on his 57th birthday, September 16, 1983. The album won a Grammy Award for best blues album of 1983.");
    } else if (currentText == items[6]) {
        ui->textBrowser->setText("\"Hey Jude\" is a song by the English rock band the Beatles that was released as a non-album single in August 1968. It was written by Paul McCartney and credited to the Lennon–McCartney partnership. The single was the Beatles' first release on their Apple record label and one of the \"First Four\" singles by Apple's roster of artists, marking the label's public launch. \"Hey Jude\" was a number-one hit in many countries around the world and became the top-selling single of 1968 in the UK, the US, Australia and Canada. Its nine-week run at number one on the Billboard Hot 100 tied the all-time record in 1968 for the longest run at the top of the US charts. It has sold approximately eight million copies and is frequently included on music critics' lists of the greatest songs of all time.");
    } else if (currentText == items[7]) {
        ui->textBrowser->setText("\"Here Comes the Sun\" is a song written by George Harrison and released on the Beatles' 1969 album Abbey Road. It is one of Harrison's best-known Beatles compositions. The song was written at the country house of his friend Eric Clapton, where Harrison had chosen to play truant for the day, to avoid attending a meeting at the Beatles' Apple Corps organisation. The lyrics reflect the composer's relief at both the arrival of spring and the temporary respite he was experiencing from the band's business affairs.");
    } else if (currentText == items[8]) {
        ui->textBrowser->setText("\"Paranoid\" is a song by the British heavy metal band Black Sabbath, featured on their second album Paranoid (1970). It is the first single from the album, while the B-side is the song \"The Wizard\". It reached number 4 on the UK Singles Chart and number 61 on the Billboard Hot 100.");
    } else if (currentText == items[9]) {
        ui->textBrowser->setText("\"Iron Man\" is a song written and performed by the English heavy metal band Black Sabbath, released on their 1970 album Paranoid. The lyrics tell the story of a man who time travels into the future and sees the apocalypse. In the process of returning to the present, he is turned into steel by a magnetic storm. He is rendered mute, unable verbally to warn people of his vision of impending destruction. His attempts to communicate are ignored and mocked. This causes Iron Man to become furious, and drives his revenge on mankind, causing the apocalypse seen in his vision.");
    } else if (currentText == items[10]) {
        ui->textBrowser->setText("Chaosphere is the third album by Swedish metal band Meshuggah. It was released on 9 November 1998 by Nuclear Blast, and is the only studio album to feature bassist Gustaf Hielm. Chaosphere's sound is an almost complete departure from the thrash style of the band's previous releases, instead focusing on the technical, polyrhythmic, groove-oriented sound they would continue to explore on subsequent albums. A video was made for \"New Millennium Cyanide Christ\".");
    }
}

QVector<QString> MainWindow::checkCheck() {

    /* Initializing variables */
    QTreeWidgetItemIterator it(ui->treeWidget);
    QVector<QString> v;

    /* Main part */
    for ( ; *it; ++it) {
        if ((*it)->checkState(0) == Qt::CheckState::Checked) {
            v.push_back((*it)->text(0));
        }
    }

    /* Returning value */
    return v;
}

void MainWindow::on_pushButton_clicked() {

    /* Initializing variables */
    QVector<QString> v;
    int check[RECORDS] = {};
    check[0] = check[1] = check[2] = check[3] = check[4] = START_VALUE;

    /* Main part */
    ui->listWidget->clear();
    v = checkCheck();
    if (!v.length()) {
        ui->listWidget->addItem("The Art of Fugue");
        ui->listWidget->addItem("St Matthew Passion");
        ui->listWidget->addItem("Der Ring des Nibelungen");
        ui->listWidget->addItem("Symphony in C major (Wagner)");
        ui->listWidget->addItem("Symphony No. 9 (Dvořák)");
        ui->listWidget->addItem("Blues 'N' Jazz");
        ui->listWidget->addItem("Hey Jude");
        ui->listWidget->addItem("Here Comes the Sun");
        ui->listWidget->addItem("Paranoid");
        ui->listWidget->addItem("Iron Man");
        ui->listWidget->addItem("Chaosphere");
    } else {
        for (auto &i : v) {
            if (i == "Baroque") {
                ++check[0];
                ++check[1];
            } else if (i == "Romantic") {
                ++check[2];
                ++check[3];
                ++check[4];
            } else if (i == "Blues") {
                ++check[5];
            } else if (i == "Rock") {
                ++check[6];
                ++check[7];
            } else if (i == "Heavy metal") {
                ++check[8];
                ++check[9];
            } else if (i == "Death metal") {
                ++check[10];
            } else if (i == "1727") {
                ++check[1];
            } else if (i == "1740") {
                ++check[0];
            } else if (i == "1832") {
                ++check[3];
            } else if (i == "1876") {
                ++check[2];
            } else if (i == "1893") {
                ++check[4];
            } else if (i == "1968") {
                ++check[6];
            } else if (i == "1969") {
                ++check[7];
            } else if (i == "1970") {
                ++check[8];
                ++check[9];
            } else if (i == "1983") {
                ++check[5];
            } else if (i == "1998") {
                ++check[10];
            } else if (i == "J.S. Bach") {
                ++check[0];
                ++check[1];
            } else if (i == "R. Wagner") {
                ++check[2];
                ++check[3];
            } else if (i == "A. Dvořák") {
                ++check[4];
            } else if (i == "B.B. King") {
                ++check[5];
            } else if (i == "The Beatles") {
                ++check[6];
                ++check[7];
            } else if (i == "Black Sabbath") {
                ++check[8];
                ++check[9];
            } else if (i == "Meshuggah") {
                ++check[10];
            } else if (i == "MCA") {
                ++check[5];
            } else if (i == "Apple") {
                ++check[6];
                ++check[7];
            } else if (i == "Vertigo") {
                ++check[8];
                ++check[9];
            } else if (i == "Nuclear Blast") {
                ++check[10];
            }
        }
    }

    for (std::size_t i = 0; i < RECORDS; ++i) {
        if (check[i] >= VALUE) {
            ui->listWidget->addItem(items[i]);
        }
    }
}
