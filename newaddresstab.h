#ifndef NEWADDRESSTAB_H
#define NEWADDRESSTAB_H

#include <QWidget>

class QLabel;
class QPushButton;
class QVBoxLayout;

class NewAddressTab : public QWidget
{
    Q_OBJECT

public:
    NewAddressTab(QWidget *parent = nullptr);

signals:
    void sendDetails(QString name, QString address);

public slots:
    void addEntry();

private:
    QLabel *descriptionLabel;
    QPushButton *addButton;
    QVBoxLayout *mainLayout;
};

#endif // NEWADDRESSTAB_H
