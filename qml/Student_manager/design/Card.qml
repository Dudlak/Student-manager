import QtQuick 1.1

// хорошую карточку с правильным позиционированием вложенных объектов
// относительно заголовка можно написать только из c++
Container {
    id: root
    width: title.implicitWidth + title.anchors.margins*2
    height: title.implicitHeight + title.anchors.margins*2 + text.implicitHeight + text.anchors.margins*2

    property string title: ""
    property string text: ""

    Text {
        id: title
        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
            margins: 15
        }

        text: root.title
        font.pixelSize: Theme.titleFontSize
        color: Theme.textColor
    }

    Text {
        id: text
        anchors {
            top: title.bottom
            bottom: parent.bottom
            left: parent.left
            right: parent.right
            margins: 15
        }

        text: root.text
        font.pixelSize: Theme.normalFontSize
        color: Theme.textColor

        wrapMode: Text.WordWrap

    }
}
