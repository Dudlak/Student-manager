// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    id: root
    width: 1500
    height: 1000

    Item {
        id: navigationArea
        width: 500
        anchors {
            left: root.left
            top: root.top
            bottom: root.bottom
        }

        Rectangle {
            anchors.fill: parent
            color: "#ff0000"
        }
    }

    Item {
        id: contentArea
        anchors {
            left: navigationArea.right
            top: root.top
            bottom: root.bottom
            right: root.right
        }

        Rectangle {
            anchors.fill: parent
            color: "#0000ff"
        }
    }
}
