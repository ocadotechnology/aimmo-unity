using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnitySocketIO.IO;
using UnitySocketIO.Events;
using UnitySocketIO.Packet;
using UnitySocketIO.WebGL;
using System.Runtime.InteropServices;

namespace UnitySocketIO.SocketIO {
    public class WebGLSocketIO : BaseSocketIO {

        [DllImport("__Internal")]
        private static extern void Connect(string url, string path);

        [DllImport("__Internal")]
        private static extern void Disconnect();

        [DllImport("__Internal")]
        private static extern void On(string eventName, string gameObjectName);

        int packetID;

        Dictionary<string, List<Action<SocketIOEvent>>> eventHandlers;

        object ackQueueLock;
        Queue<SocketPacket> ackQueue;
        List<Ack> ackList;

        bool isReady;

        public override void Init(SocketIOSettings settings) {
            base.Init(settings);

            eventHandlers = new Dictionary<string, List<Action<SocketIOEvent>>>();

            ackList = new List<Ack>();
        }

        public void SetSocketID(string socketID) {
            SocketID = socketID;
        }

        public override void Connect() {
            Debug.Log("Connecting...");
            Connect("http" + (settings.sslEnabled ? "s" : "") + "://" + settings.url + (!settings.sslEnabled && settings.port != 0 ? ":" + settings.port.ToString() : "") + "/", settings.path);
        }

        public override void Close() {
            Disconnect();
        }

        public override void Emit(string e) {
        }

        public override void Emit(string e, string data) {
        }

        public override void Emit(string e, Action<string> action) {
        }

        public override void Emit(string e, string data, Action<string> action) {
        }

        public override void On(string e, Action<SocketIOEvent> callback) {
            if(!eventHandlers.ContainsKey(e)) {
                eventHandlers[e] = new List<Action<SocketIOEvent>>();
            }

            eventHandlers[e].Add(callback);
            On(e, gameObject.name);
        }

        public override void Off(string e, Action<SocketIOEvent> callback) {
        }

        public void InvokeAck(string ackJson) {
        }

        public void InvokeEventCallback(string eventJson) {
            EventJson eventData = JsonUtility.FromJson<EventJson>(eventJson);

            if(!eventHandlers.ContainsKey(eventData.socketEvent))
                return;

            for(int i = 0; i < eventHandlers[eventData.socketEvent].Count; i++) {
                SocketIOEvent socketEvent = new SocketIOEvent(eventData.socketEvent, eventData.eventData);
                eventHandlers[eventData.socketEvent][i](socketEvent);
            }
        }

    }
}
