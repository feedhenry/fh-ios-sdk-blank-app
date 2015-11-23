iOS Blank App
=============

> This template app is deprecated use [helloworld-ios-app](https://github.com/feedhenry-templates/helloworld-ios) instead.


iOS Blank app is a simple app to get you started with FH iOS sdk.

You can scaffold this app either:
- using RHMAP (Red Hat Mobile Application Platform) UI console.
- or clone directly from this repository. If you clone it manually to make the app buildable in RHMAP Build Farm, replace the templating ```%id%``` in ```FHStarterProject\FHStarterProject-Info.plist``` in the following block:

```xml
<key>CFBundleIdentifier</key>
<string>%id%</string>
```