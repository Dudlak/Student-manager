// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Container {
    id: root
    width: 200
    height: textInput.height + 20

    property int fontSize: Theme.normalFontSize
    property string placeholder: ""
    property alias text: textInput.text
    property QtObject validator: null

    signal textChanged()
    signal accepted()

    TextInput {
        id: textInput

        anchors {
            fill: parent
            margins: 10
            verticalCenter: parent.verticalCenter
        }
        height: implicitHeight
        font.pixelSize: root.fontSize
        color: Theme.textColor

        selectByMouse: true
        validator: root.validator

        Rectangle {
            id: line
            width: parent.width
            height: 2
            color: Theme.borderColor
            anchors.top: parent.bottom
        }

        Text {
            anchors.fill: parent
            text: root.placeholder
            color: Theme.textColor
            opacity: 0.5
            font.pixelSize:  root.fontSize
            visible: textInput.text == "" ? true : false
        }

        onTextChanged: root.textChanged()
        onAccepted: root.accepted()

    }

}
