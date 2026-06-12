// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "../design"

Container {
    anchors.fill: parent

    Header {
        id: title
        text: "MAIN SCREEN"
    }

    Card {
        anchors.top: title.bottom
        anchors.left: parent.left
        anchors.margins: 20

        width: 500

        title: "Простая карточка"
        text: "Пример очень-очень длинного и невлезающего в карточку текста. " +
              "Это покажет нам как карточка реагирует и адаптируется к такой длинне строки"
    }
}
