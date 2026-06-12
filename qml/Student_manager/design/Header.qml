// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Container {
    id: root
    anchors {
        top: parent.top
        left: parent.left
        right: parent.right
    }

    height: titleText.implicitHeight + 10

    property string text: ""

    Text {
        id: titleText
        text: root.text
        font.pixelSize: Theme.titleFontSize
        anchors.centerIn: parent
    }
}
