#include "qpagesendxst.h"

QPageSendFUN::QPageSendFUN(QWidget *parent) :
    QStealthPage(parent)
{
    sendCoinsPage = new SendCoinsDialog(this);
    sendCoinsPage->setGeometry(0, 0, SC_PAGE_WIDTH, SC_PAGE_HEIGHT);
    sendCoinsPage->showNormal();
}

void QPageSendFUN::setModel(WalletModel *model)
{
    sendCoinsPage->setModel(model);
}

void QPageSendFUN::showOutOfSyncWarning(bool fShow)
{
    sendCoinsPage->showOutOfSyncWarning(fShow);
}

