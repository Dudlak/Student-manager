// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import Effects 1.0

Rectangle {
    anchors.fill: parent
    color: parent.color
    z: parent.z - 1
    radius: parent.radius


    Rectangle {
        width: parent.width
        height: parent.height
        color: parent.color
        z: parent.z
        radius: parent.radius

        effect: DropShadow {
            blurRadius: 10.0      // Сила размытия (чем больше, тем мягче тень)
            offset: Qt.point(5, 5) // Смещение тени: (5px вправо, 5px вниз)
            color: Qt.darker(Theme.backgroundColor, 1.2)
        }
    }


    Rectangle {
        width: parent.width
        height: parent.height
        color: parent.color
        z: parent.z
        radius: parent.radius

        effect: DropShadow {
            blurRadius: 10.0      // Сила размытия (чем больше, тем мягче тень)
            offset: Qt.point(-5, -5) // Смещение тени: (5px вправо, 5px вниз)
            color:Qt.lighter(Theme.backgroundColor, 1.3)
        }
    }


}
