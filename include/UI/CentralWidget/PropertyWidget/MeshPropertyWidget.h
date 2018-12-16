#pragma once

#include <Generic/Mesh.h>
#include <UI/CentralWidget/PropertyWidget/Vector3DEditWidget.h>

class MeshPropertyWidget: public QWidget {
    Q_OBJECT

public:
    MeshPropertyWidget(Mesh* mesh, QWidget *parent = Q_NULLPTR);
    ~MeshPropertyWidget();

private:
    Mesh * mesh;
    QCheckBox * meshVisibleCheckbox, *meshReverseNormalCheckBox;
    Vector3DEditWidget * meshPositionWidget, *meshRotationWidget, *meshScalingWidget;
    QVBoxLayout * mainLayout;

    void setupLayout();
    void setupSignals();

private slots:
    void setMeshVisible(int state);
    void setMeshReverseNormal(int state);
};