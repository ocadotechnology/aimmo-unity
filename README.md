# AI:MMO Unity

This is the Unity project that will be used to create and display the game view in [AI:MMO](https://github.com/ocadotechnology/aimmo), the new game by [Code for Life](https://www.codeforlife.education/). 

![Scene screenshot](http://i68.tinypic.com/wk0lfs.png)

## Getting started

These instructions will get you a copy of the project up and running on your local machine.

### Prerequisites

Install Unity 5.5.1 or later. We recommend to use Unity 2017.1.1:
* [Download for Mac OS X](https://store.unity.com/download/thank-you?thank-you=personal&os=osx&nid=427)
* [Download for Windows](https://store.unity.com/download/thank-you?thank-you=personal&os=win&nid=427)
* [Download for Linux](http://beta.unity3d.com/download/f4fc8fd4067d/public_download.html)

You will also need a text editor. The most popular ones for Unity are [MonoDevelop](http://www.monodevelop.com/) and [Visual Studio](https://www.visualstudio.com/).

### Setting up the project

Start Unity, click on `Open` and select the `UnityProject` directory, not the whole repository. Now you should be able to:
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

Please read [CONTRIBUTING.md](https://github.com/ocadotechnology/aimmo-unity/CONTRIBUTING.md) for details on the process for submitting pull requests to us.