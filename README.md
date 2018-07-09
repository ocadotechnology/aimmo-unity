# AI:MMO Unity

This is the Unity project that will be used to create and display the game view in [AI:MMO](https://github.com/ocadotechnology/aimmo), the new game by [Code for Life](https://www.codeforlife.education/). 

![Main Scene GIF](https://media.giphy.com/media/cPXmCNBdL4TpT4heDs/giphy.gif)

## Getting started

These instructions will get you a copy of the project up and running on your local machine.

### Prerequisites

Install Unity 5.5.1 or later. We recommend to use **[Unity 2018.1.1f1](https://unity3d.com/unity/whatsnew/unity-2018.1.1)**. Download your Unity software using Unity Hub.

You will also need a text editor. The most popular ones for Unity are [MonoDevelop](http://www.monodevelop.com/) and [Visual Studio](https://www.visualstudio.com/).

Now open your terminal. You can use the following shortcuts:
* Ubuntu - CTRL + ALT + T
* Mac - CMD + SPACE to open spotlight search; then type in "terminal", hit return.

In the terminal type:
`git clone https://github.com/ocadotechnology/aimmo-unity.git`

And authenticate using your username and password token.

### Setting up the project

* Start Unity, click on `Open` and select the `UnityProject` directory, not the whole repository. 
* You may need to install the [.NET SDK](https://www.microsoft.com/net/learn/get-started)
* In Unity, run `Build Game` -> `Build WebGL Game into aimmo`

Now you should be able to (not necessary if you just want to build the game):
* Connect to the back-end. [How](https://github.com/ocadotechnology/aimmo-unity/wiki/Back-end-connection)?
* Use the level builder. [How](https://github.com/ocadotechnology/aimmo-unity/wiki/Level-builder)?
* Run the tests. [How](https://github.com/ocadotechnology/aimmo-unity/wiki/Tests)?

## Project structure

To understand better the different parts of the project it is important to understand the file structure. The core is:

```
aimmo-unity
  └───Scripts
  └───UnityProject
        └───Assets
              └───Scripts
              └───Scenes
              └───Resources
              └───Editor
                    └───LevelBuilder
                    └───UnityTestTools
                    └───Tests
```

From top to bottom:
* `Scripts` has the TravisCI scripts.
* `UnityProject/Assets/Scripts` has all the logic to connect to the back-end and display the scene. See the [wiki](https://github.com/ocadotechnology/aimmo-unity/wiki/Back-end-connection) for more details.
* `UnityProject/Assets/Scenes` contains both the main scene and the levels.
* `UnityProject/Assets/Resources` is where all the sprites go.
* `UnityProject/Assets/Editor/LevelBuilder` has the core of the level builder editor tool. See the [wiki](https://github.com/ocadotechnology/aimmo-unity/wiki/Level-builder) for more details.
* `UnityProject/Assets/Editor/UnityTestTools` is the library used for unit testing.
* `UnityProject/Assets/Editor/Tests` has all the tests. See the [wiki](https://github.com/ocadotechnology/aimmo-unity/wiki/Tests) for more details.

## Contributing

Please read [CONTRIBUTING.md](https://github.com/ocadotechnology/aimmo-unity/blob/master/CONTRIBUTING.md) for details on the process for submitting pull requests to us.

## Contact Us

If you ever need to contact us, please do so via our [contact form](https://www.codeforlife.education/help/#contact) on the Code For Life website. You can click [this link](https://www.codeforlife.education/help/#contact) to do so. 
