import QtQuick 2.0
import QtQuick.Controls 2.5

Item {
    id: resumeGamePg

    Column{
        id: roomCodeContainer
        anchors.centerIn: parent
        spacing: 20

        Repeater{
            id: loop
            model: 5

            Label{
                anchors.horizontalCenter: roomCodeContainer.horizontalCenter
                text:  qsTr("Fetched room code")
            }
        }

    }
}
