#ifndef AFFICHAGERECHERCHECLIENT_H
#define AFFICHAGERECHERCHECLIENT_H

#include <QDialog>

namespace Ui {
    class affichageRechercheClient;
}

class affichageRechercheClient : public QDialog
{
    Q_OBJECT

public:
    explicit affichageRechercheClient(QWidget *parent = 0);
    ~affichageRechercheClient();

private slots:
    void on_buttonOK_clicked();
    
private:
    Ui::affichageRechercheClient *ui;
};

#endif // AFFICHAGERECHERCHECLIENT_H
