#! /bin/sh

## Run the editor unit tests
echo "Running editor unit tests for ${UNITYCI_PROJECT_NAME}"
/Applications/Unity/Unity.app/Contents/MacOS/Unity \
	-batchmode \
	-nographics \
	-silent-crashes \
	-logFile $(pwd)/unity.log \
	-projectPath "$(pwd)/${UNITYCI_PROJECT_NAME}" \
	-runEditorTests \
	-editorTestsResultFile $(pwd)/test.xml \
	-quit

rc0=$?
echo "Unit test logs"
cat $(pwd)/test.xml

# exit if tests failed
if [ $rc0 -ne 0 ]; then { echo "Failed unit tests"; exit $rc0; } fi

## This will build to webGL and put the binaries in WebGL-Dist.
echo "Attempting build of ${UNITYCI_PROJECT_NAME} for WebGL"
/Applications/Unity/Unity.app/Contents/MacOS/Unity \
	-batchmode \
	-logFile $(pwd)/unity.log \
	-projectPath "$(pwd)/${UNITYCI_PROJECT_NAME}" \
	-executeMethod WebGLBuilder.build

rc1=$?
echo "Build logs (Windows)"
cat $(pwd)/unity.log

# exit if build failed
if [ $rc1 -ne 0 ]; then { echo "Failed build"; exit $rc0; } fi

exit $(($rc0|$rc1))