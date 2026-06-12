// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "design"

Rectangle {
    id: root
    width: 1500
    height: 700
    color: Theme.backgroundColor

    Item { id: navigationArea
        width: 500

        anchors {
            left: root.left
            top: root.top
            bottom: root.bottom
        }

        Menu {
            anchors.fill: parent
            anchors.margins: 10

            Column {
                anchors.fill: parent
                anchors.margins: 15
                spacing: 15

                MenuItem{
                    text: "Главная"
                    onClicked: content.source = "screens/mainScreen.qml"
                    fontSize: Theme.largeFontSize
                }

                MenuItem{
                    text: "Предметы"
                    onClicked: content.source = "screens/subjectsScreen.qml"
                    fontSize: Theme.largeFontSize
                }

                MenuItem{
                    text: "Расписание"
                    onClicked: content.source = "screens/scheduleScreen.qml"
                    fontSize: Theme.largeFontSize
                }

                MenuItem{
                    text: "Дела"
                    onClicked: content.source = "screens/toDoScreen.qml"
                    fontSize: Theme.largeFontSize
                }

                MenuItem{
                    text: "Настройки"
                    onClicked: content.source = "screens/settingsScreen.qml"
                    fontSize: Theme.largeFontSize
                }
            }

        }
    }

    Item { id: contentArea

        anchors {
            left: navigationArea.right
            top: root.top
            bottom: root.bottom
            right: root.right
            margins: 10
        }

        Loader {
            id: content
            anchors.fill: parent
            source: "screens/mainScreen.qml"
        }
    }
}
