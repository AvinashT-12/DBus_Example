import QtQuick 2.15
import QtQuick.Controls 2.5
Item {
    anchors.fill: parent
    property var recived_text:"not yet recieved"
    TextField {
        id: _text
        text: recived_text
    }
    Button{
        anchors.top: _text.bottom
        anchors.topMargin: 30
        text:"getCarStatus"
        onClicked: {
            recived_text=viewModelObject.status
        }
    }
}
