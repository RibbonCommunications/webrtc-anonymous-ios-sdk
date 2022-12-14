# Ribbon WebRTC Anonymous iOS SDK

<p>
    <img alt="Cocoapods platforms" src="https://img.shields.io/cocoapods/p/KandyLinkMobileSDKAnonymous">
    <img alt="GitHub release (latest SemVer)" src="https://img.shields.io/github/v/release/RibbonCommunications/webrtc-anonymous-ios-sdk">
    <img alt="Cocoapods" src="https://img.shields.io/cocoapods/v/KandyLinkMobileSDKAnonymous">
</p>

## Install

### CocoaPods

CocoaPods is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website. To integrate *WebRTC Anonymous iOS SDK* into your Xcode project using CocoaPods, specify it in your `Podfile`:

```ruby
...
use_frameworks!

target 'YOUR_TARGET_NAME' do
    pod 'RibbonWebRTCSDKAnonymous', '~> 6.9.0'
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['ENABLE_BITCODE'] = 'NO'
    end
  end
end

...
```

#### Swift Package Manager
1. File > Add Package Dependency
2. Add https://github.com/RibbonCommunications/webrtc-anonymous-ios-sdk.git
3. Select "Branch" with "master"

### Manual

Alternatively *WebRTC Anonymous iOS SDK* can be manually integrated to your project with the [followed steps](https://ribboncommunications.github.io/webrtc-anonymous-ios-sdk/tutorials/#/?id=manual-installation-after-v5170). 

## Documentation

The information about tutorials and documents can be found in the links below

* Documents: [API Docs](https://ribboncommunications.github.io/webrtc-anonymous-ios-sdk/docs)

* Tutorials: Choose your configuration ( [US](https://ribboncommunications.github.io/webrtc-anonymous-ios-sdk/tutorials/?SUBSCRIPTIONFQDN=webrtc-na.kandy.io&WEBSOCKETFQDN=webrtc-na.kandy.io&ICESERVER1=turn-na-1.kandy.io&ICESERVER2=turn-na-2.kandy.io) | [EMEA](https://ribboncommunications.github.io/webrtc-anonymous-ios-sdk/tutorials/?SUBSCRIPTIONFQDN=webrtc-em.kandy.io&WEBSOCKETFQDN=webrtc-em.kandy.io&ICESERVER1=turn-em-1.kandy.io&ICESERVER2=turn-em-2.kandy.io) | [UAE](https://ribboncommunications.github.io/webrtc-anonymous-ios-sdk/tutorials/?SUBSCRIPTIONFQDN=ct-webrtc.etisalat.ae&WEBSOCKETFQDN=ct-webrtc.etisalat.ae&ICESERVER1=ct-turn1.etisalat.ae&ICESERVER2=ct-turn2.etisalat.ae) )

## Compatibility

Compatible iOS versions :

* iOS 11.x+

Compatible XCode Versions :

* XCode 13.x+

Compatible Ribbon WebRTC Gateway Server versions :

* WebRTC Gateway 4.8.1

* WebRTC Gateway 4.9.1

Tested on :

* iPhone 6S, 7, 7+, 8, X, 11, 11 Pro, iPad mini, and iPad Air

## Known Issues

