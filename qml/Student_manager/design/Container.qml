// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    id: root
    width: 100
    height: 62

    color: Theme.backgroundColor
    radius: Theme.borderRadius

    property alias shadow: shadow
    Shadow{ id: shadow }

}
