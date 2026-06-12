// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    id: root
    width: size
    height: size

    property int size: 20
    signal clicked()

    border {
        color: Theme.borderColor
        width: 2
    }

    MouseArea {
        anchors.fill: parent
        onClicked: root.clicked()
    }
}
