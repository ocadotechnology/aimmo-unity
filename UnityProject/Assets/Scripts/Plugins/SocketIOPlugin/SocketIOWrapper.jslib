mergeInto(LibraryManager.library, {
    ReceiveSocketEvents: function(url, path) {
        var socket = io(Pointer_stringify(url), {
            "path": Pointer_stringify(path)
        });

        socket.on("connect", function(data) {
            console.log("connected");
        });

        socket.on("game-state", function(state) {
            gameInstance.SendMessage("World Controller", "NewGameState", JSON.stringify(state));
        });
    }
});
