#ifndef SUCCESSFULREGISTRY_H
#define SUCCESSFULREGISTRY_H

#include <QMainWindow>

namespace Ui {
class SuccessfulRegistry;
}

class SuccessfulRegistry : public QMainWindow
{
	Q_OBJECT

public:
	explicit SuccessfulRegistry(QWidget *parent = nullptr);
	~SuccessfulRegistry();

private:
	Ui::SuccessfulRegistry *ui;
};

#endif // SUCCESSFULREGISTRY_H
