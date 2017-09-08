## Where to start
The good practice is to: 
  * Fork the project on your account.
  * Clone your repo using HTTPS.
  * Work on a new git branch.
  * Need help with [git](https://git-scm.com/docs/gittutorial)?

The issues are listed on [ocadotechnology/aimmo-unit/issues](https://github.com/ocadotechnology/aimmo-unity/issues). 

## Before you create a pull request
Things to know:
  * Use a branch per pull request.
  * If a commit fixes an existing issue, please include “fixes #123” in the commit message.

Once you've applied your changes:
  * Run the tests and make sure they pass. Go to `Window / Editor Tests Runner`. 
  * Debug it and make sure it works well with the main [AI:MMO repository](https://github.com/ocadotechnology/aimmo).

## Submitting the pull request
  * Push to your forked repository, and create a pull request from your branch to ocadotechnology's master branch.
  * TravisCI will run the automated tests. Please fix found issues, then push again on your branch, it will rerun the tests. - not fully implemented yet, look at [#2](https://github.com/ocadotechnology/aimmo-unity/issues/2)
  * Rebase your pull request branch on master if necessary.
  * Wait for reviewers to accept it.
  * Done! Your code is now in master :-)
