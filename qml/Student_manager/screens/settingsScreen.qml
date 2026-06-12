// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
import "../design"
import "../elements"

/*
    Добавить уведомление о не сохранённых настройках темы
*/


Container {
    anchors.fill: parent

    Header {
        id: title
        text: "НАСТРОЙКИ"
    }

    Row { id: row
        anchors {
            top: title.bottom
            left: parent.left
            right: parent.right
            margins: 20
        }
        spacing: 20

        Container {
            width: parent.width / 2 - 10
            height: colorHeader.height + colorColumn.height + colorColumn.anchors.margins * 2

            Header {
                id: colorHeader
                text: "Настройки цвета"
                fontSize: Theme.largeFontSize
            }

            Column {
                id: colorColumn
                anchors {
                    top: colorHeader.bottom
                    left: parent.left
                    right: parent.right
                    margins: 20
                }
                width: parent.width
                spacing: 20

                Row {
                    spacing: 20
                    Text {
                        text: "Цвет фона: "
                        font.pixelSize: Theme.normalFontSize
                    }

                    ColorBox {
                        color: "#e0e0e0"
                        onClicked: Theme.backgroundColor = color
                    }

                    ColorBox {
                        color: "#212121"
                        onClicked: Theme.backgroundColor = color
                    }

                    ColorBox {
                        color: "#e6e3ad"
                        onClicked: Theme.backgroundColor = color
                    }

                    ColorBox {
                        color: "#020e3a"
                        onClicked: Theme.backgroundColor = color
                    }
                }

                Row {
                    spacing: 20
                    Text {
                        text: "Цвет текста: "
                        font.pixelSize: Theme.normalFontSize
                    }

                    ColorBox {
                        color: "#303030"
                        onClicked: Theme.textColor = color
                    }

                    ColorBox {
                        color: "#dcdcdc"
                        onClicked: Theme.textColor = color
                    }

                }

                Row {
                    spacing: 20
                    Text {
                        text: "Акцентный цвет: "
                        font.pixelSize: Theme.normalFontSize
                    }

                    ColorBox {
                        color: "orange"
                        onClicked: Theme.accentColor = color
                    }

                    ColorBox {
                        color: "#0176D3"
                        onClicked: Theme.accentColor = color
                    }

                    ColorBox {
                        color: "#5E0B0B"
                        onClicked: Theme.accentColor = color
                    }
                }

                Row {
                    spacing: 20
                    Text {
                        text: "Цвет границы "
                        font.pixelSize: Theme.normalFontSize
                    }

                    ColorBox {
                        color: "#303030"
                        onClicked: Theme.borderColor = color
                    }

                    ColorBox {
                        color: "#dcdcdc"
                        onClicked: Theme.borderColor = color
                    }

                }

            }
        }

        Container {
            width: parent.width / 2 - 10
            height: sizeHeader.height + sizeColumn.height + sizeColumn.anchors.margins * 2

            Header {
                id: sizeHeader
                text: "Настройки размеров"
                fontSize: Theme.largeFontSize
            }

            Column {
                id: sizeColumn
                anchors {
                    top: sizeHeader.bottom
                    left: parent.left
                    right: parent.right
                    margins: 20
                }
                spacing: 20

                Row {
                    spacing: 20
                    Text {
                        text: "Радиус скругления: "
                        font.pixelSize: Theme.normalFontSize
                    }
                    TextInput {
                        placeholder: "block radius"
                        onAccepted: Theme.borderRadius = parseInt(text)
                        validator: IntValidator {
                            bottom: 0      // минимум
                            top: 100       // максимум
                        }
                        Component.onCompleted: text = Theme.borderRadius
                    }
                }

                Row {
                    spacing: 20
                    Text {
                        text: "Маштаб шрифта: "
                        font.pixelSize: Theme.normalFontSize
                    }
                    TextInput {
                        placeholder: "font size"
                        onAccepted: {
                            var size = parseInt(text)
                            Theme.smallFontSize = size - 5
                            Theme.normalFontSize = size
                            Theme.largeFontSize = size + 5
                            Theme.titleFontSize = size + 10
                        }

                        validator: IntValidator {
                            bottom: 10      // минимум
                            top: 50             // максимум
                        }
                        Component.onCompleted: text = Theme.normalFontSize
                    }
                }

            }
        }
    }

    Container {
        id: toolBar
        anchors {
            left: parent.left
            right: parent.right
            top: row.bottom
            margins: 20
        }

        Row {
            anchors.fill: parent
            anchors.margins: 10
            spacing: 20

            Button {
                text: "Load light theme"
                onClicked: Theme.loadLightTheme()
            }

            Button {
                text: "Load dark theme"
                onClicked: Theme.loadDarkTheme()
            }

            Button {
                text: "Save current theme"
                onClicked: Theme.saveSettings()
            }
        }
    }
}
