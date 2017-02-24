#ifndef QPAGESENDFUN_H
#define QPAGESENDFUN_H

#include "qstealthpage.h"
#include "qhoverbutton.h"
#include "sendcoinsdialog.h"
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>

class QPageSendFUN : public QStealthPage
{
    Q_OBJECT
public:
    explicit QPageSendFUN(QWidget *parent = 0);

    void setModel(WalletModel *model);
    void showOutOfSyncWarning(bool fShow);

public:
    SendCoinsDialog *sendCoinsPage;
};

#endif // QPAGESENDFUN_H
