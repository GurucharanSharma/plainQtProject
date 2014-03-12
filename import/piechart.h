#ifndef PIECHART_H
#define PIECHART_H

#include<QtQuick/QQucikItem>

class PieSlice;
class PieSlice:public QQucikItem{
    Q_OBJECT
    Q_PROPERTY( QQmlListProperty<PieSlice>slices READ slices )
    Q_PROPERTY(QString name READ name WRITE setname)

public:
    PieSlice(QQuickItem *parent=0);

    QString name() const;
    void setname(const QString &name);
    QQmlListProperty<PieSlice>slices();

private:
    static void append_slice(QQmlListProperty<PieSlice> *list,PieSlice *slice);

    QString m_name;
    QString<PieSlice *>m_slices;


};

#endif // PIECHART_H
