// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    id: root
    width: parent.width
    color: mouse.containsMouse ? "#e0e0e0" : "gray"
    height: 50

    property string text: ""
    signal clicked()

    Text {
        id: title
        text: root.text
        anchors.fill: parent
        anchors.margins: 10
        font.pixelSize: 30
        anchors.verticalCenter: root.verticalCenter
        verticalAlignment: Text.AlignVCenter
    }


    MouseArea {
        id: mouse
        anchors.fill: root
        hoverEnabled: true

        onClicked: root.clicked()
    }
}
