fh-ios-sdk-blank-app
--------------------
iOS native demo app to test FeedHenry cloud access.

## Build project
The project is using [Cocoapods](http://cocoapods.org). Make sure you have cocoapods is installed.

In your ```Podfile``` you should have:

```
pod 'FH', '2.2.9'
```

Cocoapods will fetch the 2.2.9 [FH release to cocoapods](https://cocoapods.org/?q=FH).

and then:

```bash
pod install
```

For now on, open the *.xcworkspace* instead of *@.xcodeproj*.

If you want to change the release version, update ```Podfile``` and run:

```bash
pod update
```
to update your dependencies.