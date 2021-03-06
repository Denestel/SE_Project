import QtQuick 2.0
import QtQuick.Controls 2.5

Item {
    id: joinGamePg

    Column{

        anchors.centerIn: parent
        spacing: 40

        Label{
            text:  qsTr("Enter Room Code")
            anchors.horizontalCenter: parent.horizontalCenter
        }

        TextField{
            anchors.horizontalCenter: parent.horizontalCenter
            width: implicitWidth

            placeholderText: "Room Code"
            maximumLength: 4

        }

        Button{
            anchors.horizontalCenter: parent.horizontalCenter
            width: implicitWidth

            text: qsTr("Join")
            onClicked: {
                mainConn.hide()
                GameRenderer.launchGame()
            }
        }
    }
}
