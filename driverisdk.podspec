Pod::Spec.new do |spec|
    spec.name         = "driverisdk"
    spec.version      = '1.0.4.2'
    spec.summary      = "Netradyne Driveri SDK"
    spec.homepage     = "https://www.netradyne.com"
    spec.license      = "MIT"
    spec.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE" }
    spec.author       = { "apps-help" => "apps-help@netradyne.com" }
    spec.platform     = :ios
    spec.source       = { :http => 'https://github.com/netradyne/driveri-sdk/raw/master/releases/1.0.4.2/driverisdk.zip' }
    spec.ios.deployment_target = '12.0'
    spec.static_framework         = true
    spec.ios.vendored_frameworks = 'DriveriSDK.framework'
  
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"
  
    spec.dependency 'FirebaseCore'
    spec.dependency 'FirebaseMessaging'
    spec.dependency 'Mixpanel'
    spec.dependency 'SSZipArchive'
  
    spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'OTHER_LDFLAGS' => '$(inherited) -ObjC' }
    spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'OTHER_LDFLAGS' => '$(inherited) -ObjC' }
  
  end
  