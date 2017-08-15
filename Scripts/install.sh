#! /bin/sh

if [ ! -d "$HOME/UnityDownloads" ]; then
	mkdir $HOME/UnityDownloads
fi

if [ ! -f "$HOME/UnityDownloads/Unity.pkg" ]; then
	echo 'Downloading Unity 5.5.0 pkg:'
	curl --retry 5 -m 600 -o $HOME/UnityDowloads/Unity.pkg http://download.unity3d.com/download_unity/38b4efef76f0/MacEditorInstaller/Unity.pkg
	if [ $? -ne 0 ]; then { echo "Download failed"; exit $?; } fi
else
	echo 'Unity package found in cache.'
fi

if [ ! -f "$HOME/UnityDownloads/Unity.pkg" ]; then
	echo 'Downloading Unity 5.5.0 WebGL Build Support pkg:'
	curl --retry 5 -o $HOME/UnityDowloads/Unity_webgl.pkg http://download.unity3d.com/download_unity/38b4efef76f0/MacEditorTargetInstaller/UnitySetup-WebGL-Support-for-Editor-5.5.0f3.pkg
	if [ $? -ne 0 ]; then { echo "Download failed"; exit $?; } fi
else
	echo 'Unity WebGL support package found in cache.'
fi

echo 'Installing Unity.pkg'
sudo installer -dumplog -package $HOME/UnityDowloads/Unity.pkg -target /
echo 'Installing Unity_webgl.pkg'
sudo installer -dumplog -package $HOME/UnityDowloads/Unity_webgl.pkg -target /
