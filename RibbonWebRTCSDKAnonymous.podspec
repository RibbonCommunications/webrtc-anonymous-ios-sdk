Pod::Spec.new do |s|
    s.name              = 'RibbonWebRTCSDKAnonymous'
    s.version           = '6.8.1'
    s.summary           = 'Ribbon WebRTC Anonymous MobileSDK Framework'
    s.homepage          = 'https://github.com/RibbonCommunications/webrtc-anonymous-ios-sdk'
    s.license 		      = { :type => 'MIT', :file => 'mit-license.txt'}
    s.author            = { 'Name' => 'dpd-tur.MobileSDK@orioninc.com' }
    s.platform          = :ios
    s.source            = { :git => '6.8.1', :tag => s.version}
    s.dependency  'RibbonWebRTC'
    s.ios.deployment_target   = '11.0'
    s.library           = ['c++','icucore','z']
    s.ios.frameworks    = ['AVFoundation','SystemConfiguration','GLKit','VideoToolbox','AudioToolbox','PushKit']
    s.vendored_frameworks = ['MobileSDKAnonymous.xcframework']
    s.pod_target_xcconfig = {
        'ENABLE_BITCODE' => 'NO',
        'FRAMEWORK_SEARCH_PATHS' => '$(inherited)',
        'OTHER_LDFLAGS' => '$(inherited) -framework WebRTC -ObjC',
        'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'
   }



end
