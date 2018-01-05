mergeInto(LibraryManager.library, {
    Connect: function(url, path) {
        var socket = io(Pointer_stringify(url), {
            "path": Pointer_stringify(path)
        });

        window.socket = socket;

        window.socketEvents = {};
    },

    Disconnect: function() {
        window.socket.disconnect();
    },

    On: function(eventName, gameObjectName) {
        socketEventName = Pointer_stringify(eventName);
        objectName = Pointer_stringify(gameObjectName);
        console.log(objectName);
        if(typeof window.socketEvents[socketEventName] === 'undefined') {
            window.socketEvents[socketEventName] = true;

            if (typeof window.socket !== 'undefined') {
                window.socket.on(socketEventName, function(data) {
                    var socketData = {
                        socketEvent: socketEventName,
                        eventData: typeof data === 'undefined' ? '' : JSON.stringify(data)
                    };

                    gameInstance.SendMessage(objectName, 'InvokeEventCallback', JSON.stringify(socketData));
                });
            }
        }
    }
});
