This is the native 'tealeaf' platform for android devices

## Installation

1. Install android tools, then download and unpack android-ndk-r18b
2. Export path:
export ANDROID_HOME=/home/USERNAME/Android/Sdk
export PATH=$PATH:$ANDROID_HOME/tools:$ANDROID_HOME/platform-tools
export PATH=$PATH:/YOUR_PATH_TO/android-ndk-r18b

3. Install and configure NDK tools with installed SDK Manger (see 1)

## Debug, Release and sign
Debugging with specific sgning keys might be required by some APIs and plugins or sign release build just:
1) set up environment variables and use:
```
export DEVKIT_ANDROID_KEYSTORE_PATH='path/to/your/keystore'
export DEVKIT_ANDROID_KEYSTORE_PASSWORD='your keystore pass'
export DEVKIT_ANDROID_ALIAS_PASSWORD='your alias pass'
export DEVKIT_ANDROID_ALIAS_NAME='you alias name'
```
2) Sign apk
To debug with specific keys
`devkit debug native-android --signing true`
For release apk
`devkit release native-android`
For release bundle (aab)
`devkit release native-android bundle`

### Warning!
Do not update barista submodule. Current source code requires specific commit `f2356f0`

## Errors

 
description:
# Warning: File /home/user/.android/repositories.cfg could not be loaded.  
do:
touch ~/.android/repositories.cfg
and install required sdk with sdkmanager
or
install required sdk with Android Studio


# Mac 
# version = re.match(r'(\d\.\d\.?\d*)', version).groups()[0]
AttributeError: 'NoneType' object has no attribute 'groups'
gyp ERR! configure error 
gyp ERR! stack Error: `gyp` failed with exit code: 1

do:
1. Make sure you select correct Xcode.app path with 
`xcode-select -print-path`
2. Point xcode-select to the Xcode Developer directory using the following command
`sudo xcode-select -s /Applications/Xcode.app/Contents/Developer`
More at https://github.com/nodejs/node-gyp/issues/569

#After you have made some changes in native-android go to devkit-core repositoty updated native-android submodule:
1) git submodule update --init --force --remote
2) git add .
3) git commit -m "updates of native-android"
4) git push origin YOURBRANCH

### Plugins modification and update
Next plugins are made as Gradle library projects and can be edited in Android Studio:<br />
Gameplay
Gamecircle
Facebook
Please note that these plugins library projects are not imported as project modules, instead they are imported as AAR (Android archive) which contain necessary source code and resources. You can see this in android/config.json of each library project plugin This requires to rebuild .aar file after plugin source code has been modified with proces: Import project into Android Studio -> Add changes -> Build -> Rebuild project. This will rebuild .aar file, the path to which is already in config.json.

## Using in Android Studio
Disable instant run feature in Android Studio

# Debugging or modifying native code
To modify or debug native code it is necessary to delete folder `AndroidSeed/tealeaf/src/main/libs/` with its content and to build game in debug mode

In order to save building time, NDK building is skipped if there are precompiled shared libraries `libtealeaf.so` exist at path `AndroidSeed/tealeaf/src/main/libs/` and these libraries correspond to list of abis enumerated in APP_ABI parameter in file `AndroidSeed/tealeaf/src/main/jni/Application.mk`

By default there are armeabi-v7a and arm64-v8a precompiled libraries exist at path `AndroidSeed/tealeaf/src/main/libs/` and are enumerated in file `AndroidSeed/tealeaf/src/main/jni/Application.mk`. The libraries are built in release mode so no changes required for games or plugins development.

# Debugging JavaScript code
1 open `chrome://inspect/#devices` in Crhome
2 make sure you can see your connected device
3 run debug in Android Studio
4 open url which will appear as soon as you will see hashcube splashscreen
5 wait for debugger to stop with `debugger;` command or add it in application json
6 set your breakpoints