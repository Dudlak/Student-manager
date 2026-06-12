// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Container {
    id: root
    width: buttonText.paintedWidth + padding*2
    height: buttonText.paintedHeight + padding*2

    color: Theme.backgroundColor

    property string text: ""
    property int padding:10
    property int fontSize: Theme.normalFontSize

    signal clicked()

    radius: Theme.borderRadius
    border {
        width: 2
        color: Theme.borderColor
    }

    Text {
        id: buttonText
        anchors.centerIn: parent
        text: root.text
        font.pixelSize: root.fontSize
        color: Theme.textColor

    }

    MouseArea {
        id: mouse
        hoverEnabled: true
        anchors.fill: root

        onPressed: {
            shadow.visible = false
            root.scale = 0.95
        }

        onReleased: {
            shadow.visible = true
            root.scale = 1
        }

        onClicked: root.clicked()
    }

}
