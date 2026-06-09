// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "design"

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

        Column {
            anchors.fill: parent

            MenuItem{
                text: "Главная"
                onClicked: content.source = "mainScreen.qml"
            }

            MenuItem{
                text: "Предметы"
                onClicked: content.source = "subjectsScreen.qml"
            }

            MenuItem{
                text: "Расписание"
                onClicked: content.source = "scheduleScreen.qml"
            }

            MenuItem{
                text: "Дела"
                onClicked: content.source = "toDoScreen.qml"
            }

            MenuItem{
                text: "Настройки"
                onClicked: content.source = "settingsScreen.qml"
            }
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

        Loader {
            id: content
            anchors.fill: parent
            source: "mainScreen.qml"
        }
    }
}
